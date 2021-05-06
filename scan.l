%{
#include <stdlib.h>
#include <stdio.h>
#include "parser.tab.h" // Get tokens from bison
#include <string.h>

%}


IDENTIFIER 	[a-zA-Z_][a-zA-Z0-9_]*


DIGIT		[0-9]
NONZERODIGIT	[1-9]
DECINTEGER	{NONZERODIGIT}{DIGIT}*|"0"
INTPART		{DIGIT}+

FRACTION	"."{DIGIT}+
POINTFLOAT	({INTPART}?{FRACTION})|({INTPART}".")|{FRACTION}
EXPONENT	("e"|"E")("+"|"-")?{DIGIT}+
EXPONENTFLOAT	({INTPART}|{POINTFLOAT}){EXPONENT}

STRINGPREFIX	("r"|"u"|"ur"|"R"|"U"|"UR"|"Ur"|"uR")
SHORTSTRINGITEM	([^\n\'\"\\])|([\\].)
SHORTSTRING	{STRINGPREFIX}?([']{SHORTSTRINGITEM}*['])|(["]{SHORTSTRINGITEM}*["])

NEWLINE		\n
WHITESPACE	[ \t\v\n\f]

%option noyywrap
%option yylineno
%x C_COMMENT

%%

 
^[ ]*\n	       			 {/* Ignore blank lines. */ ;} 			
^[\t]*\n       			 {/* Ignore blank lines. */ ;}
[%].*			    	 { /*Ignore comments*/}


"PROGRAM"           {return PROGRAM;}
"PRINT"             {return PRINT;}
"FLOAT"             {return FLOAT;}
"IF" 			    {return IF;}
"THEN"              {return THEN;}
"ENDIF"             {return ENDIF;}
"FUNCTION"			{return FUNCTION;}
"ELSEIF"			{return ELSEIF;}
"ELSE"			    {return ELSE;}
"CHAR"              {return CHAR;}
"INTEGER"           {return INTEGER;}
"VARS"              {return VARS;}
"END_FUNCTION"      {return ENDFUNCTION;}
"RETURN"            {return RETURN;}
"STARTMAIN"         {return STARTMAIN;}
"ENDMAIN"           {return ENDMAIN;}
"WHILE"             {return WHILE;}
"ENDWHILE"          {return ENDWHILE;}
"FOR"               {return FOR;}
"TO"                {return TO;}
"ENDFOR"            {return ENDFOR;}
"AND"               {return AND;}
"OR"                {return OR;}
"SWITCH"            {return SWITCH;}
"CASE"              {return CASE;}
"DEFAULT"           {return DEFAULT;}
"BREAK"             {return BREAK;}
"STEP"              {return STEP;}
"ENDSWITCH"         {return ENDSWITCH;}
"STRUCT"            {return STRUCT;}
"ENDSTRUCT"         {return ENDSTRUCT;}
"TYPEDEF"           {return TYPEDEF;}


""

"\'"			{return APOSTROPHE;}
"\""			{return QUOTATION;}
";"			        {return COL;}
","			        {return COMMA;}
":"			        {return COLON;}
"="			        {return EQUAL;}
"("			        {return LPAR;}
")"			        {return RPAR;}
"["			        {return LSBRA;}
"]"			        {return RSBRA;}
"{"			        {return LBRA;}
"}"			        {return RBRA;}
"-"			        {return MINUS;}
"+"			        {return PLUS;}
"<"			        {return LESS_THAN_OP;}
">"			        {return GREATER_THAN_OP;}
"|"			        {return OR_SIGN;}
"*"			        {return STAR;}
"/"			        {return SLASH;}
"<="			    {return LE_OP; }
">="			    {return GE_OP; }
"=="			    {return EQ_OP; }
"!="			    {return NE_OP; }
"^"					{return EXP;}
\n                  {  }

"/*"            { BEGIN(C_COMMENT); }
<C_COMMENT>"*/" { BEGIN(INITIAL); }
<C_COMMENT>.    { }


{IDENTIFIER}		{	
				strcpy(yylval.item.name, yytext);
				yylval.item.type = IDENT;
				yylval.item.data_type = LITERAL;
				return IDENTIFIER;
			}

{DECINTEGER}		{	
				yylval.item.ival = atoi(yytext);
				yylval.item.type = INT;
				yylval.item.data_type = LITERAL;
				return DECINTEGER;
			}
            
{POINTFLOAT}		{	yylval.item.fval = atof(yytext);
				yylval.item.type = FL;
				yylval.item.data_type = LITERAL;
				
				return POINTFLOAT;
			}

{SHORTSTRING}	{ if(strlen(yytext) > 3){

                strcpy(yylval.item.string, yytext);
				yylval.item.type = STRING;
				yylval.item.data_type = LITERAL;
				return SHORTSTRING;}

                else{
                    strcpy(yylval.item.string, yytext);
				    yylval.item.type = CHARACT;
				    yylval.item.data_type = LITERAL;
                    return CHARACTER;
                }
                
            }
%%

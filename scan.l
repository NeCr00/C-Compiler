%{
#include <stdlib.h>
#include <stdio.h>
#include "parser.tab.h" // Get tokens from bison
#include <string.h>

%}

CHARACTER ["][a-zA-Z0-9_]["]
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
LONGSTRINGITEM	([^\\])|([\\].)
SHORTSTRING	{STRINGPREFIX}?([']{SHORTSTRINGITEM}*['])|(["]{SHORTSTRINGITEM}*["])
LONGSTRING	{STRINGPREFIX}?(([']{3}{LONGSTRINGITEM}*[']{3})|(["]{3}{LONGSTRINGITEM}*["]{3}))
NEWLINE		\n
WHITESPACE	[ \t\v\n\f]

%option noyywrap
%option yylineno

%%

^[ ]*\n	       		{/* Ignore blank lines. */ ;} 			
^[\t]*\n       		{/* Ignore blank lines. */ ;}
[%].*			    { /*Ignore comments*/}


"PROGRAM[ ]*\n"     {return PROGRAM;}
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
\n                  {  }
{CHARACTER}         {return CHARACTER;}

{IDENTIFIER}        {return IDENTIFIER;}
{DECINTEGER}        {return DECINTEGER;}
{POINTFLOAT}        {return POINTFLOAT;}
{SHORTSTRING}       {return SHORTSTRING;}
%%

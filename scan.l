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
LONGSTRINGITEM	([^\\])|([\\].)
SHORTSTRING	{STRINGPREFIX}?([']{SHORTSTRINGITEM}*['])|(["]{SHORTSTRINGITEM}*["])
LONGSTRING	{STRINGPREFIX}?(([']{3}{LONGSTRINGITEM}*[']{3})|(["]{3}{LONGSTRINGITEM}*["]{3}))
NEWLINE		\n
WHITESPACE	[ \t\v\n\f]

%option noyywrap

%%

^[ ]*\n	       		{/* Ignore blank lines. */ ;} 			
^[\t]*\n       		{/* Ignore blank lines. */ ;}
[%].*			    { /*Ignore comments*/}

"PROGRAM"           {return PROGRAM;}
"IF" 			    {return IF;}
"THEN"              {return THEN;}
"ENDIF"             {return ENDIF;}
"FOR"   		    {return FOR;}
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
"FOR"               { return FOR;}
"TO"                {return TO;}
"ENDFOR"            {return ENDFOR;}
"AND"               {return AND;}
"OR"                {return OR;}
"SWITCH"            {return SWITCH;}
"CASE"              {return CASE;}
"DEFAULT"           {return DEFAUT;}
"PRINT"             {return PRINT;}
"BREAK"             {BREAK;}

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
"%"			        {return PERCENT;}
"<"			        {return LESS_THAN_OP;}
">"			        {return GREATER_THAN_OP;}
"|"			        {return OR_SIGN;}
"*"			        {return STAR;}
"/"			        {return SLASH;}
"<"			        {return LESS_THAN_OP;}
">"			        {return GREATER_THAN_OP;}
"<="			    {return LE_OP; }
">="			    {return GE_OP; }
"=="			    {return EQ_OP; }
"!="			    {return NE_OP; }


{NEWLINE}           {return NEWLINE;}
{IDENTIFIER}        {return IDENTIFIER;}
%%

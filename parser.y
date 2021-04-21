%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  extern int yylineno;
  extern int  yywrap;
  void yyerror(const char *s);


%}

%token PROGRAM IDENTIFIER IF FOR FUNCTION ELSEIF ELSE NEWLINE

%%

program:
            PROGRAM identifier NEWLINE
            {printf("Success! You are awesome. \n");};

identifier:
            IDENTIFIER;

%%

int main(int argc, char** argv) {

   extern int yydebug;
   yydebug = 1;

  // Open a file 
  FILE *myfile = fopen(argv[1], "r");
  //  is valid?
  if (!myfile) {
    
    return -1;
  }
  // read the file
  yyin = myfile;
  
  // Parse through the input:
  yyparse();
 
}
void yyerror(const char* s) {
	fprintf(stderr, "Line: 1 --> Parser error\n" );
	exit(1);
}
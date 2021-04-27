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

%token PROGRAM IDENTIFIER IF FOR FUNCTION ELSEIF ELSE NEWLINE THEN ENDIF  CHAR INTEGER VARS ENDFUNCTION
%token RETURN STARTMAIN ENDMAIN WHILE ENDWHILE  TO ENDFOR AND OR SWITCH CASE DEFAUT PRINT BREAK COL
%token COMMA COLON EQUAL LPAR RPAR LSBRA RSBRA LBRA RBRA MINUS PLUS PERCENT  LESS_THAN_OP GREATER_THAN_OP
%token  OR_SIGN  STAR SLASH   LE_OP GE_OP EQ_OP NE_OP APOSTROPHE QUOTATION CHARACTER
%token DECINTEGER POINTFLOAT FLOAT INTPART  SHORTSTRING
%%

program:
             statement NEWLINE
            {printf("Success! You are awesome. \n");};

statement:
      assigment_stmt
      |print_stmt
      |break_stmt;

break_stmt:
	BREAK;

//=================================Print===================================================
print_stmt:
      PRINT LPAR string RPAR
      |PRINT LPAR string LSBRA print_input RSBRA RPAR;

print_input:
      identifier
      |integer
      |floatnum
      |character;
//=====================================Expressions=========================================
expression_list:
	    expression_list COMMA expression
	    |LPAR expression_list  RPAR
  
	    | expression;


expression:
      atom
      |expression PLUS expression
      |expression MINUS expression
      | expression STAR expression
      |expression SLASH expression;



atom:
      literal
      |identifier;

//===========================================================================================

//========================= Assigment====================================================== 
assigment_stmt:
     type taget_list;

type:
    INTEGER
    |CHAR
    |FLOAT;

taget_list:
      target
      |taget_list EQUAL expression_list
      |taget_list COMMA EQUAL expression_list;

target:
       IDENTIFIER;
//==========================================================================================



// comparison_op: 
//         EQ_OP
//         |NE_OP
//         |GREATER_THAN_OP
//         |LESS_THAN_OP
//         |LE_OP
//         |GE_OP;

// logical_op:
//         AND
//         |OR;

string:
      SHORTSTRING;

literal:
        integer
        | floatnum
        | character;

character:
         CHARACTER ;

floatnum: 
        POINTFLOAT;

integer:
          DECINTEGER;

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
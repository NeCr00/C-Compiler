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
%token RETURN STARTMAIN ENDMAIN WHILE ENDWHILE  TO ENDFOR AND OR SWITCH CASE DEFAULT PRINT BREAK COL
%token COMMA COLON EQUAL LPAR RPAR LSBRA RSBRA LBRA RBRA MINUS PLUS PERCENT  LESS_THAN_OP GREATER_THAN_OP
%token  OR_SIGN  STAR SLASH   LE_OP GE_OP EQ_OP NE_OP APOSTROPHE QUOTATION CHARACTER
%token DECINTEGER POINTFLOAT FLOAT INTPART  SHORTSTRING STEP ENDSWITCH STRUCT ENDSTRUCT TYPEDEF

%left  PLUS MINUS
%left  STAR SLASH 

%%

program:    
           struct_stmt main_section
            {printf("Success! You are awesome. \n");};


main_section:
      STARTMAIN VARS declare_variables statement_list ENDMAIN;

statement_list:
      statement_list statement
      |statement;

statement:
      empty_assigment_stmt
      |print_stmt
      |break_stmt
      |while_stmt
      |for_stmt
      |if_stmt
      |switch_case_stmt
      |return_stmt
      |create_struct;

create_struct:
      STRUCT identifier identifier
      | identifier identifier;

struct_stmt:

      |struct
      |typedef_struct;

struct: 
      STRUCT identifier VARS assigment_stmt ENDSTRUCT;

typedef_struct: 
      TYPEDEF STRUCT identifier VARS assigment_stmt ENDSTRUCT;


return_stmt:
      RETURN
      |RETURN target_return;

target_return:
      literal
      |identifier;

break_stmt:
	BREAK;

switch_case_stmt:
      switch case_list default ENDSWITCH
      |switch case_list  ENDSWITCH;

switch:
      SWITCH LPAR expression RPAR;

case_list:
      case_list case
      |case;

case:
      CASE LPAR expression RPAR COLON statement_list;

default:
      DEFAULT statement_list;

if_stmt:
      if ENDIF
      |if else ENDIF
      |if elseif_list ENDIF
      |if elseif_list else ENDIF;

if:
      IF LPAR expression RPAR THEN statement_list;

elseif_list:
      elseif_list elseif
      |elseif;

elseif: 
      ELSEIF LPAR expression RPAR statement_list;

else:
      ELSE statement_list;

while_stmt:
      WHILE LPAR expression RPAR statement_list ENDWHILE;
     
for_stmt:
      FOR identifier COLON EQUAL target_for TO target_for STEP target_for statement_list ENDFOR  ;

target_for:
      integer
      |floatnum;
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
      |expression STAR expression
      |expression SLASH expression;
      |expression comparison_op expression
      |expression logical_op expression;


atom:
      literal
      |identifier
      |string;
//===========================================================================================

//========================= Assigment====================================================== 

declare_variables:
 // empty declare
 |assigment_stmt
 |declare_variables assigment_stmt;     

empty_assigment_stmt:
      target EQUAL expression_list;

assigment_stmt:
     type taget_list;

type:
    INTEGER
    |CHAR
    |FLOAT;

taget_list:
      target
      |taget_list EQUAL expression_list
      |taget_list COMMA EQUAL expression_list
      |taget_list COMMA target;

target:
       IDENTIFIER;
//==========================================================================================



comparison_op: 
        EQ_OP
        |NE_OP
        |GREATER_THAN_OP
        |LESS_THAN_OP
        |LE_OP
        |GE_OP;

logical_op:
        AND
        |OR;

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
	fprintf(stderr, "Line: %d --> Parser error\n", yylineno);
	exit(1);
}
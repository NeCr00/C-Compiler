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

%code requires {

#include "helper.h"
struct Array variables;
struct Array functions;
}

%union
{
    struct Variable item ;
	
}

%token PROGRAM  IF FOR FUNCTION ELSEIF ELSE NEWLINE THEN ENDIF  CHAR INTEGER VARS ENDFUNCTION
%token RETURN STARTMAIN ENDMAIN WHILE ENDWHILE  TO ENDFOR AND OR SWITCH CASE DEFAULT PRINT BREAK COL
%token COMMA COLON EQUAL LPAR RPAR LSBRA RSBRA LBRA RBRA MINUS PLUS PERCENT  LESS_THAN_OP GREATER_THAN_OP
%token  OR_SIGN  STAR SLASH   LE_OP GE_OP EQ_OP NE_OP APOSTROPHE QUOTATION 
%token   FLOAT INTPART   STEP ENDSWITCH STRUCT ENDSTRUCT TYPEDEF

%left  PLUS MINUS
%left  STAR SLASH 

%token<item> CHARACTER
%token<item> DECINTEGER
%token<item> POINTFLOAT
%token<item> IDENTIFIER
%token<item> SHORTSTRING

%type<item> identifier
%type<item> integer
%type<item> floatnum
%type<item> character
%type<item> literal
%type<item> string
%type<item> atom
%type<item> expression
%type<item> expression_list
%type<item> print_input
%%

 program:    
             PROGRAM IDENTIFIER struct_stmt_list  function  main_section
            {printf("Success! You are awesome. \n");};


main_section:
      STARTMAIN VARS  assignment_stmt_list statement_list ENDMAIN;

statement_list:
      statement_list statement
      |statement;

statement:
      empty_assignment_stmt
      |print_stmt
      |break_stmt
      |while_stmt
      |for_stmt
      |if_stmt
      |switch_case_stmt
      |return_stmt
      |create_struct
      |call_fun;

call_fun:
      identifier LPAR RPAR
      |identifier expression_list;

function:
      
      |FUNCTION identifier LPAR assignment_stmt_list RPAR VARS statement_list ENDFUNCTION;

//============================================Other statements========================================
return_stmt:
      RETURN
      |RETURN target_return;

target_return:
      literal
      |identifier;

break_stmt:
	BREAK;

//======================================Struct=======================================================
create_struct:
      STRUCT identifier identifier
      | identifier identifier;

struct_stmt_list:
      struct_stmt
      |struct_stmt_list struct_stmt;

struct_stmt:

      |struct
      |typedef_struct;

struct: 
      STRUCT identifier VARS assignment_stmt_list ENDSTRUCT;

typedef_struct: 
      TYPEDEF STRUCT identifier VARS assignment_stmt_list ENDSTRUCT;

//============================================ Switch Case =====================================================


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
//=========================================== If =======================================================
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
//=============================== While For ===========================================================
while_stmt:
      WHILE LPAR expression RPAR statement_list ENDWHILE;
     
for_stmt:
      FOR identifier COLON EQUAL target_for TO target_for STEP target_for statement_list ENDFOR  ;

target_for:
      integer
      |floatnum;
//=================================Print===================================================
print_stmt:
      PRINT LPAR  RPAR
      |PRINT LPAR string RPAR
      |PRINT LPAR string LSBRA print_input RSBRA RPAR
      {print($3.string,$5, &variables);}
      ;


print_input:
      identifier
      {$$ = $1;}
      |integer
      {$$ = $1;}
      |floatnum
      {$$ = $1;}
      |character
      {$$ = $1;}
      |string
      {$$ = $1;};

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
      {$$ = $1;}
      |identifier
      {$$ = $1;}
      |string
      {$$ = $1;};


//========================= Assigment====================================================== 


assignment_stmt_list:
      assignment_stmt
      | assignment_stmt_list assignment_stmt;
      
assignment_stmt:
      type target
      |assignment_stmt EQUAL expression_list
      |assignment_stmt COMMA target
      |assignment_stmt COMMA target EQUAL expression_list;



empty_assignment_stmt:
      target
      |empty_assignment_stmt EQUAL expression_list
      |empty_assignment_stmt COMMA target 
      |empty_assignment_stmt COMMA target EQUAL expression_list;
     

type:
    INTEGER
    |CHAR
    |FLOAT;

target:
       IDENTIFIER;
       | IDENTIFIER  LSBRA integer RSBRA


//================================================ etc ========================================

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
      SHORTSTRING
      {$$ = $1; };

literal:
        integer
        {$$ = $1; }
        | floatnum
        {$$ = $1; }
        | character
        {$$ = $1; }
        |MINUS integer
        {$$ = $2; }
        |MINUS floatnum
        {$$ = $2; };

character:
         CHARACTER
         {$$ = $1; };

floatnum: 
        POINTFLOAT
        {$$ = $1; };

integer:
          DECINTEGER
          {$$ = $1; };

identifier:
            IDENTIFIER
            {$$ = $1; };

%%

int main(int argc, char** argv) {

   initArray(&variables, 5);  // initially 5 elements   

   extern int yydebug;
   //yydebug = 1;

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
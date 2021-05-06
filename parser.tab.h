/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 17 "parser.y" /* yacc.c:1909  */


#include "helper.h"
struct Array variables;
struct Array functions;
struct Array structures;

#line 52 "parser.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    IF = 259,
    FOR = 260,
    FUNCTION = 261,
    ELSEIF = 262,
    ELSE = 263,
    NEWLINE = 264,
    THEN = 265,
    ENDIF = 266,
    CHAR = 267,
    INTEGER = 268,
    VARS = 269,
    ENDFUNCTION = 270,
    RETURN = 271,
    STARTMAIN = 272,
    ENDMAIN = 273,
    WHILE = 274,
    ENDWHILE = 275,
    TO = 276,
    ENDFOR = 277,
    AND = 278,
    OR = 279,
    SWITCH = 280,
    CASE = 281,
    DEFAULT = 282,
    PRINT = 283,
    BREAK = 284,
    COL = 285,
    COMMA = 286,
    COLON = 287,
    EQUAL = 288,
    LPAR = 289,
    RPAR = 290,
    LSBRA = 291,
    RSBRA = 292,
    LBRA = 293,
    RBRA = 294,
    MINUS = 295,
    PLUS = 296,
    PERCENT = 297,
    LESS_THAN_OP = 298,
    GREATER_THAN_OP = 299,
    OR_SIGN = 300,
    STAR = 301,
    SLASH = 302,
    LE_OP = 303,
    GE_OP = 304,
    EQ_OP = 305,
    NE_OP = 306,
    APOSTROPHE = 307,
    QUOTATION = 308,
    FLOAT = 309,
    INTPART = 310,
    STEP = 311,
    ENDSWITCH = 312,
    STRUCT = 313,
    ENDSTRUCT = 314,
    TYPEDEF = 315,
    EXP = 316,
    CHARACTER = 317,
    DECINTEGER = 318,
    POINTFLOAT = 319,
    IDENTIFIER = 320,
    SHORTSTRING = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "parser.y" /* yacc.c:1909  */

    struct Variable item ;
	

#line 136 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

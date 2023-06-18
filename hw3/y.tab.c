/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20220114

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"

int yylex();
int lineNo = 1;
int in_if = 0;
extern FILE* f_asm;
int arg_cnt;

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 14 "parser.y"
typedef union YYSTYPE {
    int intVal;
    double doubleVal;
    char* sVal;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 50 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define NUM 257
#define DVALUE 258
#define TYPE 259
#define ID 260
#define IF 261
#define ELSE 262
#define DO 263
#define WHILE 264
#define FOR 265
#define RETURN 266
#define BREAK 267
#define CONTINUE 268
#define LESS_OR_EQUAL_THAN 269
#define GREATER_OR_EQUAL_THAN 270
#define EQUAL 271
#define NOT_EQUAL 272
#define ADD 273
#define MINUS 274
#define MULTIPLY 275
#define DIVIDE 276
#define LESS_THAN 277
#define GREATER_THAN 278
#define AND_OP 279
#define ASSIGN 280
#define SEMICOLON 281
#define COMMA 282
#define L_BRACKET 283
#define R_BRACKET 284
#define L_SQ_BRACKET 285
#define R_SQ_BRACKET 286
#define L_PARENTHESIS 287
#define R_PARENTHESIS 288
#define DIGITALWRITE 289
#define DELAY 290
#define UMINUS 291
#define UMULTI 292
#define UANDOP 293
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    4,    4,    3,    3,   21,    1,    2,    5,    5,
    6,    6,    7,    7,    7,    7,   19,   20,    8,    9,
    9,   10,   10,   11,   11,   12,   12,   12,   13,   13,
   13,   14,   14,   14,   14,   14,   15,   15,   15,   16,
   16,   16,   17,   17,   17,   17,   18,   18,   18,
};
static const YYINT yylen[] = {                            2,
    2,    2,    1,    2,    1,    0,    6,    5,    3,    2,
    2,    1,    1,    2,    1,    1,    7,    5,    3,    1,
    3,    3,    1,    1,    2,    3,    4,    1,    3,    3,
    1,    3,    3,    3,    3,    1,    3,    3,    1,    3,
    3,    1,    2,    2,    2,    1,    1,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    3,    0,    0,    0,    5,    2,    0,    0,
    0,    0,    4,    0,    0,    0,    8,    0,    0,    0,
    6,    0,    7,   48,    0,    0,    0,    0,    0,    0,
   10,    0,    0,    0,   12,   13,    0,    0,    0,    0,
    0,   42,   46,   15,   16,   24,    0,    0,   20,    0,
    0,   47,   43,    0,   45,    0,    0,    0,    0,    9,
   11,   14,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   25,   19,    0,    0,   26,    0,   44,   49,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   40,   41,   21,    0,   27,    0,    0,    0,   18,    0,
   17,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  259,  295,  297,  299,  260,  259,  296,  297,  298,  283,
  260,  259,  296,  284,  283,  260,  281,  284,  283,  316,
  284,  287,  300,  257,  259,  260,  274,  275,  279,  283,
  288,  289,  290,  301,  302,  303,  307,  308,  309,  310,
  311,  312,  313,  314,  315,  260,  275,  304,  305,  306,
  280,  260,  313,  260,  260,  275,  308,  283,  283,  288,
  302,  281,  271,  272,  269,  270,  277,  278,  273,  274,
  275,  276,  260,  281,  282,  280,  307,  280,  260,  284,
  257,  307,  309,  309,  310,  310,  310,  310,  311,  311,
  312,  312,  305,  308,  307,  282,  284,  258,  281,  284,
  281,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          2,
    7,    3,    9,    4,   23,   34,   35,   36,   48,   49,
   50,   37,   38,   39,   40,   41,   42,   43,   44,   45,
   20,
};
static const YYINT yysindex[] = {                      -248,
 -253,    0,    0, -239, -268, -232,    0,    0, -229, -243,
 -240, -213,    0, -218, -228, -209,    0, -218, -219, -198,
    0, -256,    0,    0, -254, -190, -252, -158, -157, -215,
    0, -178, -169, -235,    0,    0, -175, -255,  -38, -238,
 -225,    0,    0,    0,    0,    0, -142, -244,    0, -165,
 -208,    0,    0, -150,    0, -141, -258, -135, -208,    0,
    0,    0, -215, -215, -215, -215, -215, -215, -215, -215,
 -215, -215,    0,    0, -254, -215,    0, -208,    0,    0,
 -151, -149,  -38,  -38, -238, -238, -238, -238, -225, -225,
    0,    0,    0, -255,    0, -124, -143, -138,    0, -134,
    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,  154,    0,
    0,    0,    0,    0,    0,    0,    0, -125,    0,    0,
    0,    0,    0,    0,    0, -193,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -272, -121, -113,
 -161,    0,    0,    0,    0,    0,    0,    0,    0, -224,
    0,    0,    0, -177,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -105,  -89,  -97,  -81,  -65,  -48, -145, -129,
    0,    0,    0, -220,    0,    0,    0,    0,    0,    0,
    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
#endif
static const YYINT yygindex[] = {                         0,
  161,  174,    0,    0,    0,    0,  152,    0,    0,  119,
    0,  -49,  -30,    6,  143,    3,   15,  171,    0,    0,
    0,
};
#define YYTABLESIZE 240
static const YYINT yytable[] = {                         57,
   24,   77,   25,   26,   24,   46,    5,   52,   28,   82,
    1,   28,   63,   64,   10,   63,   64,   27,   28,    6,
   47,   24,   29,   25,   26,   80,   30,   11,   95,   12,
   30,   31,   32,   33,   69,   70,   74,   75,   27,   28,
   14,   24,   15,   29,   52,   94,   16,   30,   24,   71,
   72,   26,   60,   32,   33,   18,   23,   23,   27,   56,
   22,   22,   17,   29,   21,   27,   28,   30,   83,   84,
   29,   89,   90,   19,   30,   47,   47,   47,   47,   47,
   47,   47,   47,   47,   47,   91,   92,   47,   22,   51,
   47,   44,   44,   44,   44,   44,   44,   44,   44,   44,
   44,   54,   55,   44,   58,   62,   44,   39,   39,   39,
   39,   39,   39,   59,   76,   39,   39,   73,   79,   39,
   39,   81,   39,   37,   37,   37,   37,   37,   37,   78,
   96,   37,   37,   98,   97,   37,   37,   99,   37,   38,
   38,   38,   38,   38,   38,  100,  101,   38,   38,   31,
   31,   38,   38,    1,   38,   36,   36,   36,   36,   31,
   31,    6,   31,   36,   36,   29,   29,   36,   36,   13,
   36,   35,   35,   35,   35,   29,   29,    8,   29,   35,
   35,   30,   30,   35,   35,   61,   35,   34,   34,   34,
   34,   30,   30,   93,   30,   34,   34,   53,    0,   34,
   34,    0,   34,   33,   33,   33,   33,   85,   86,   87,
   88,   33,   33,    0,    0,   33,   33,    0,   33,    0,
   32,   32,   32,   32,    0,    0,    0,    0,   32,   32,
   65,   66,   32,   32,    0,   32,    0,    0,   67,   68,
};
static const YYINT yycheck[] = {                         30,
  257,   51,  259,  260,  257,  260,  260,  260,  281,   59,
  259,  284,  271,  272,  283,  271,  272,  274,  275,  259,
  275,  257,  279,  259,  260,  284,  283,  260,   78,  259,
  283,  288,  289,  290,  273,  274,  281,  282,  274,  275,
  284,  257,  283,  279,  260,   76,  260,  283,  257,  275,
  276,  260,  288,  289,  290,  284,  281,  282,  274,  275,
  281,  282,  281,  279,  284,  274,  275,  283,   63,   64,
  279,   69,   70,  283,  283,  269,  270,  271,  272,  273,
  274,  275,  276,  277,  278,   71,   72,  281,  287,  280,
  284,  269,  270,  271,  272,  273,  274,  275,  276,  277,
  278,  260,  260,  281,  283,  281,  284,  269,  270,  271,
  272,  273,  274,  283,  280,  277,  278,  260,  260,  281,
  282,  257,  284,  269,  270,  271,  272,  273,  274,  280,
  282,  277,  278,  258,  284,  281,  282,  281,  284,  269,
  270,  271,  272,  273,  274,  284,  281,  277,  278,  271,
  272,  281,  282,    0,  284,  269,  270,  271,  272,  281,
  282,  287,  284,  277,  278,  271,  272,  281,  282,    9,
  284,  269,  270,  271,  272,  281,  282,    4,  284,  277,
  278,  271,  272,  281,  282,   34,  284,  269,  270,  271,
  272,  281,  282,   75,  284,  277,  278,   27,   -1,  281,
  282,   -1,  284,  269,  270,  271,  272,   65,   66,   67,
   68,  277,  278,   -1,   -1,  281,  282,   -1,  284,   -1,
  269,  270,  271,  272,   -1,   -1,   -1,   -1,  277,  278,
  269,  270,  281,  282,   -1,  284,   -1,   -1,  277,  278,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 293
#define YYUNDFTOKEN 317
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","NUM","DVALUE","TYPE","ID","IF",
"ELSE","DO","WHILE","FOR","RETURN","BREAK","CONTINUE","LESS_OR_EQUAL_THAN",
"GREATER_OR_EQUAL_THAN","EQUAL","NOT_EQUAL","ADD","MINUS","MULTIPLY","DIVIDE",
"LESS_THAN","GREATER_THAN","AND_OP","ASSIGN","SEMICOLON","COMMA","L_BRACKET",
"R_BRACKET","L_SQ_BRACKET","R_SQ_BRACKET","L_PARENTHESIS","R_PARENTHESIS",
"DIGITALWRITE","DELAY","UMINUS","UMULTI","UANDOP","$accept","program",
"function_def","function_decl","function_defs","function_decls","compound_stmt",
"stmts","stmt","scalar","ids","id_decl","id_decl_front","assign_expr",
"equal_not_equal_expr","other_branch_expr","add_minus_expr","term_expr",
"prefix_expr","expr_end","digitalwrite_stmt","delay_stmt","$$1",
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : function_decls function_defs",
"function_decls : function_decls function_decl",
"function_decls : function_decl",
"function_defs : function_defs function_def",
"function_defs : function_def",
"$$1 :",
"function_def : TYPE ID L_BRACKET R_BRACKET $$1 compound_stmt",
"function_decl : TYPE ID L_BRACKET R_BRACKET SEMICOLON",
"compound_stmt : L_PARENTHESIS stmts R_PARENTHESIS",
"compound_stmt : L_PARENTHESIS R_PARENTHESIS",
"stmts : stmts stmt",
"stmts : stmt",
"stmt : scalar",
"stmt : assign_expr SEMICOLON",
"stmt : digitalwrite_stmt",
"stmt : delay_stmt",
"digitalwrite_stmt : DIGITALWRITE L_BRACKET NUM COMMA DVALUE R_BRACKET SEMICOLON",
"delay_stmt : DELAY L_BRACKET assign_expr R_BRACKET SEMICOLON",
"scalar : TYPE ids SEMICOLON",
"ids : id_decl",
"ids : ids COMMA id_decl",
"id_decl : id_decl_front ASSIGN equal_not_equal_expr",
"id_decl : id_decl_front",
"id_decl_front : ID",
"id_decl_front : MULTIPLY ID",
"assign_expr : ID ASSIGN assign_expr",
"assign_expr : MULTIPLY ID ASSIGN assign_expr",
"assign_expr : equal_not_equal_expr",
"equal_not_equal_expr : equal_not_equal_expr EQUAL other_branch_expr",
"equal_not_equal_expr : equal_not_equal_expr NOT_EQUAL other_branch_expr",
"equal_not_equal_expr : other_branch_expr",
"other_branch_expr : other_branch_expr GREATER_THAN add_minus_expr",
"other_branch_expr : other_branch_expr LESS_THAN add_minus_expr",
"other_branch_expr : other_branch_expr GREATER_OR_EQUAL_THAN add_minus_expr",
"other_branch_expr : other_branch_expr LESS_OR_EQUAL_THAN add_minus_expr",
"other_branch_expr : add_minus_expr",
"add_minus_expr : add_minus_expr ADD term_expr",
"add_minus_expr : add_minus_expr MINUS term_expr",
"add_minus_expr : term_expr",
"term_expr : term_expr MULTIPLY prefix_expr",
"term_expr : term_expr DIVIDE prefix_expr",
"term_expr : prefix_expr",
"prefix_expr : MINUS expr_end",
"prefix_expr : MULTIPLY ID",
"prefix_expr : AND_OP ID",
"prefix_expr : expr_end",
"expr_end : ID",
"expr_end : NUM",
"expr_end : L_BRACKET equal_not_equal_expr R_BRACKET",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 282 "parser.y"


int main(void) {
    if ((f_asm = fopen(FILENAME, "w")) == NULL) {
        perror("Error at opening file");
    }
    init();
    yyparse();
    fclose(f_asm);
    return 0;
}

void yyerror(char *msg) {
    fprintf(stderr, "Error at line %d: %s\n", lineNo, msg);
}
#line 526 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 6:
#line 53 "parser.y"
	{
        cur_scope++;
        code_gen_func_header(yystack.l_mark[-2].sVal);
    }
#line 1202 "y.tab.c"
break;
case 7:
#line 57 "parser.y"
	{
        pop_up_symbol(cur_scope);
        cur_scope--;
        code_gen_at_end_of_function_body(yystack.l_mark[-4].sVal);
    }
#line 1211 "y.tab.c"
break;
case 8:
#line 67 "parser.y"
	{
        fprintf(f_asm, ".global %s\n", yystack.l_mark[-3].sVal);
    }
#line 1218 "y.tab.c"
break;
case 17:
#line 90 "parser.y"
	{
        fprintf(f_asm, "  li t0, %d\n", yystack.l_mark[-2].intVal);
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  li t0, %d\n", yystack.l_mark[-4].intVal);
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  lw a0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  lw a1, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  sw ra, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  jal ra, digitalWrite\n");
        fprintf(f_asm, "  lw ra, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  \n");
    }
#line 1240 "y.tab.c"
break;
case 18:
#line 111 "parser.y"
	{
        fprintf(f_asm, "  lw a0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  sw ra, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  jal ra, delay\n");
        fprintf(f_asm, "  lw ra, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  \n");
    }
#line 1254 "y.tab.c"
break;
case 22:
#line 133 "parser.y"
	{
        yyval.sVal = install_symbol(yystack.l_mark[-2].sVal);
    }
#line 1261 "y.tab.c"
break;
case 23:
#line 136 "parser.y"
	{
    }
#line 1267 "y.tab.c"
break;
case 24:
#line 141 "parser.y"
	{
        yyval.sVal = yystack.l_mark[0].sVal;
    }
#line 1274 "y.tab.c"
break;
case 25:
#line 144 "parser.y"
	{
        yyval.sVal = yystack.l_mark[0].sVal;
    }
#line 1281 "y.tab.c"
break;
case 26:
#line 150 "parser.y"
	{
        int index = look_up_symbol(yystack.l_mark[-2].sVal);
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  sw t0, %d(fp)\n", table[index].offset * (-4) - 48);
    }
#line 1290 "y.tab.c"
break;
case 27:
#line 155 "parser.y"
	{
        int index = look_up_symbol(yystack.l_mark[-2].sVal);
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  lw t1, %d(fp)\n", table[index].offset * (-4) - 48);
        fprintf(f_asm, "  add t1, fp, t1\n");
        fprintf(f_asm, "  sw t0, 0(t1)\n");
    }
#line 1301 "y.tab.c"
break;
case 29:
#line 166 "parser.y"
	{
    }
#line 1307 "y.tab.c"
break;
case 30:
#line 168 "parser.y"
	{
    }
#line 1313 "y.tab.c"
break;
case 32:
#line 175 "parser.y"
	{
       
    }
#line 1320 "y.tab.c"
break;
case 33:
#line 178 "parser.y"
	{
       
    }
#line 1327 "y.tab.c"
break;
case 34:
#line 181 "parser.y"
	{
      
    }
#line 1334 "y.tab.c"
break;
case 35:
#line 184 "parser.y"
	{
    
    }
#line 1341 "y.tab.c"
break;
case 37:
#line 191 "parser.y"
	{
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  lw t1, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  add t0, t0, t1\n");
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        yyval.sVal = NULL;
    }
#line 1355 "y.tab.c"
break;
case 38:
#line 201 "parser.y"
	{
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  lw t1, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  sub t0, t1, t0\n");
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        yyval.sVal = NULL;
    }
#line 1369 "y.tab.c"
break;
case 40:
#line 216 "parser.y"
	{
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  lw t1, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  mul t0, t0, t1\n");
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        yyval.sVal = NULL;
    }
#line 1383 "y.tab.c"
break;
case 41:
#line 226 "parser.y"
	{
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  lw t1, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  div t0, t1, t0\n");
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        yyval.sVal = NULL;
    }
#line 1397 "y.tab.c"
break;
case 43:
#line 241 "parser.y"
	{
        fprintf(f_asm, "  lw t0, 0(sp)\n");
        fprintf(f_asm, "  addi sp, sp, 4\n");
        fprintf(f_asm, "  sub t0, zero, t0\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  sw t0, 0(sp)\n");
    }
#line 1408 "y.tab.c"
break;
case 44:
#line 248 "parser.y"
	{
        int index = look_up_symbol(yystack.l_mark[0].sVal);
        fprintf(f_asm, "  lw t0, %d(fp)\n", table[index].offset * (-4) - 48);
        fprintf(f_asm, "  add t0, t0, fp\n");
        fprintf(f_asm, "  lw t1, 0(t0)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  sw t1, 0(sp)\n");
    }
#line 1420 "y.tab.c"
break;
case 45:
#line 256 "parser.y"
	{
        int index = look_up_symbol(yystack.l_mark[0].sVal);
        fprintf(f_asm, "  li t0, %d\n", table[index].offset * (-4) - 48);
        fprintf(f_asm, "  addi sp, sp, -4\n");
        fprintf(f_asm, "  sw t0, 0(sp)\n");
    }
#line 1430 "y.tab.c"
break;
case 47:
#line 267 "parser.y"
	{
        int index = look_up_symbol(yystack.l_mark[0].sVal);
        fprintf(f_asm, "  lw t0, %d(s0)\n", table[index].offset * (-4) - 48);
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        yyval.sVal = yystack.l_mark[0].sVal;
    }
#line 1441 "y.tab.c"
break;
case 48:
#line 274 "parser.y"
	{
        fprintf(f_asm, "  li t0, %d\n", yystack.l_mark[0].intVal);
        fprintf(f_asm, "  sw t0, -4(sp)\n");
        fprintf(f_asm, "  addi sp, sp, -4\n");
        yyval.sVal = NULL;
    }
#line 1451 "y.tab.c"
break;
#line 1453 "y.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}

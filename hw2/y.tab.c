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

int lineNo = 1;

char* int_to_string(int i) {
    int l = 1, tmp = i;
    while (tmp > 9) {
        l++;
        tmp /= 10;
    }
    char *new_str = (char*) malloc(sizeof(char)*(l+1));
    sprintf(new_str, "%d", i);
    return new_str;
}

char* double_to_string(double f) {
    char *new_str = (char*)malloc(sizeof(char)*33);
    sprintf(new_str, "%f", f);
    return new_str;
}

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 27 "parser.y"
typedef union YYSTYPE {
    int intVal;
    double doubleVal;
    char* stringVal;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 62 "y.tab.c"

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
#define DOUBLE 258
#define CHAR 259
#define STRING 260
#define TYPE 261
#define ID 262
#define INC 263
#define DEC 264
#define ADD 265
#define MINUS 266
#define MULTIPLY 267
#define DIVIDE 268
#define PERCENT 269
#define LESS_THAN 270
#define GREATER_THAN 271
#define LOGICAL_NOT 272
#define BITWISE_NOT 273
#define AND_OP 274
#define OR_OP 275
#define XOR_OP 276
#define ASSIGN 277
#define LESS_OR_EQUAL_THAN 278
#define GREATER_OR_EQUAL_THAN 279
#define SHIFT_LEFT 280
#define SHIFT_RIGHT 281
#define EQUAL 282
#define NOT_EQUAL 283
#define AND 284
#define OR 285
#define SEMICOLON 286
#define COMMA 287
#define COLON 288
#define L_BRACKET 289
#define R_BRACKET 290
#define L_SQ_BRACKET 291
#define R_SQ_BRACKET 292
#define L_PARENTHESIS 293
#define R_PARENTHESIS 294
#define IF 295
#define ELSE 296
#define SWITCH 297
#define CASE 298
#define DEFAULT 299
#define DO 300
#define WHILE 301
#define FOR 302
#define RETURN 303
#define BREAK 304
#define CONTINUE 305
#define UMINUS 306
#define UADD 307
#define UMULTI 308
#define UANDOP 309
#define INCPOST 310
#define DECPOST 311
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    3,    4,    4,
    5,    5,    6,    6,    7,    8,    8,    9,    9,   10,
   10,   11,   11,   11,   11,   12,   12,   12,   12,   13,
   13,   14,   14,   15,   15,   15,   15,   16,   16,   17,
   17,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   19,   19,   20,   20,   21,   21,   22,   22,
   22,   22,   23,   23,   24,   25,   25,   26,   26,   27,
   27,   28,   28,   29,   29,   30,   30,   31,   31,   32,
   32,   33,   33,   34,   34,   34,   35,   35,   35,   35,
   35,   36,   36,   36,   37,   37,   37,   38,   38,   38,
   38,   39,   39,   39,   39,   39,   39,   39,   39,   39,
   39,   39,   40,   40,   40,   40,   40,   41,   41,   41,
   41,   41,   41,   41,   42,   42,   43,   43,
};
static const YYINT yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    3,    1,    3,
    3,    1,    1,    2,    3,    3,    1,    2,    6,    4,
    3,    3,    5,    3,    1,    6,    7,    5,    6,    1,
    3,    2,    3,    6,    7,    5,    6,    3,    2,    2,
    1,    1,    1,    2,    1,    1,    1,    1,    1,    2,
    2,    1,    5,    7,    7,    6,    2,    1,    4,    3,
    3,    2,    5,    7,    6,    1,    2,    1,    2,    3,
    2,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    3,    1,    3,    3,    1,    3,    3,    3,    3,
    1,    3,    3,    1,    3,    3,    1,    3,    3,    3,
    1,    2,    2,    4,    5,    2,    2,    2,    2,    2,
    2,    1,    2,    2,    3,    4,    1,    2,    1,    1,
    1,    1,    1,    3,    4,    3,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    3,    4,    5,    6,    7,    0,    0,
    0,    9,    0,    0,   17,    2,    0,    0,    0,    0,
    8,    0,    0,   15,    0,    0,    0,    0,   30,  120,
  121,  123,  122,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  101,  112,    0,    0,    0,    0,
   13,    0,   10,   11,    0,   16,   32,    0,   28,    0,
   36,    0,    0,    0,    0,  102,  103,  106,  107,  110,
  108,  109,  111,    0,    0,   21,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  113,  114,    0,    0,    0,
    0,    0,   14,   33,    0,   39,    0,    0,    0,    0,
    0,    0,    0,    0,   42,   43,   52,    0,   41,   45,
   46,   47,   48,   49,    0,   31,   26,   34,    0,    0,
    0,    0,  124,   72,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   98,
   99,  100,  115,  128,    0,    0,    0,   25,   20,   29,
   37,    0,    0,    0,    0,    0,    0,    0,   71,    0,
   50,   51,   38,   40,   44,  126,    0,    0,  104,    0,
  116,    0,    0,   19,   27,   35,    0,    0,    0,    0,
   66,    0,    0,   70,  125,  105,  127,   22,    0,   24,
    0,    0,    0,    0,    0,   67,    0,    0,    0,    0,
   63,   68,    0,    0,   23,    0,   56,    0,    0,    0,
   58,    0,   65,   69,   54,    0,    0,   55,   57,   64,
    0,    0,    0,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  261,  313,  314,  315,  316,  320,  325,  328,  262,  267,
  317,  318,  319,  321,  322,  315,  289,  291,  323,  262,
  286,  287,  277,  286,  287,  261,  290,  326,  327,  257,
  258,  259,  260,  262,  263,  264,  265,  266,  267,  272,
  273,  274,  289,  341,  342,  343,  344,  345,  346,  347,
  348,  349,  350,  351,  352,  353,  354,  277,  291,  289,
  262,  267,  318,  341,  262,  322,  262,  267,  286,  293,
  329,  287,  290,  291,  355,  352,  352,  352,  352,  352,
  352,  352,  352,  261,  341,  292,  277,  285,  284,  275,
  276,  274,  282,  283,  270,  271,  278,  279,  280,  281,
  265,  266,  267,  268,  269,  263,  264,  289,  293,  341,
  290,  326,  262,  262,  261,  294,  295,  297,  300,  301,
  302,  303,  304,  305,  316,  320,  329,  330,  331,  332,
  333,  336,  337,  340,  341,  327,  286,  329,  341,  291,
  267,  290,  290,  341,  343,  344,  345,  346,  347,  348,
  348,  349,  349,  349,  349,  350,  350,  351,  351,  352,
  352,  352,  290,  341,  356,  293,  324,  341,  292,  286,
  329,  290,  262,  289,  289,  331,  289,  289,  286,  341,
  286,  286,  294,  331,  286,  292,  341,  290,  352,  287,
  290,  324,  287,  294,  286,  329,  341,  341,  301,  341,
  286,  338,  341,  286,  292,  352,  341,  294,  293,  341,
  290,  290,  289,  290,  338,  286,  324,  329,  293,  341,
  331,  290,  339,  341,  294,  296,  294,  298,  299,  334,
  335,  290,  331,  290,  329,  341,  288,  294,  335,  286,
  288,  330,  330,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          2,
    3,    4,  125,   11,   12,   13,  126,   14,   15,   19,
  167,    7,   28,   29,    8,  127,  128,  129,  130,  131,
  230,  231,  132,  133,  202,  223,  134,  135,   45,   46,
   47,   48,   49,   50,   51,   52,   53,   54,   55,   56,
   57,   75,  165,
};
static const YYINT yysindex[] = {                      -255,
 -210,    0, -255,    0,    0,    0,    0,    0, -251, -223,
 -233,    0, -211, -105,    0,    0, -244,  168, -273, -221,
    0,    1,  168,    0, -170,   53, -231,  -65,    0,    0,
    0,    0,    0, -207,  168,  168,  168,  168,  168,  168,
  168,  168,  114, -189, -227, -171, -158, -138, -121,  -59,
 -184,  -40,    5, -247,    0,    0, -240, -128,  168, -242,
    0,  -91,    0,    0, -122,    0,    0,  -79,    0, -230,
    0,  -68, -193,  168,  -92,    0,    0,    0,    0,    0,
    0,    0,    0, -264,  -83,    0,  168,  168,  168,  168,
  168,  168,  168,  168,  168,  168,  168,  168,  168,  168,
  168,  168,  168,  168,  168,    0,    0,   76, -139,  -50,
 -157,    2,    0,    0,   84,    0,  -39,  -29,   21,  -25,
   11,  132,  -24,   31,    0,    0,    0,  -28,    0,    0,
    0,    0,    0,    0,   33,    0,    0,    0,   15,  168,
   41,  168,    0,    0, -171, -158, -138, -121,  -59, -184,
 -184,  -40,  -40,  -40,  -40,    5,    5, -247, -247,    0,
    0,    0,    0,    0,   40, -139, -150,    0,    0,    0,
    0, -135, -122,  168,  168,   28,  168,  150,    0,   51,
    0,    0,    0,    0,    0,    0,   64,  168,    0,  168,
    0, -120,   39,    0,    0,    0,   55,   80,  104,  112,
    0,  150,  125,    0,    0,    0,    0,    0, -139,    0,
  126,  127,  168,   21,   95,    0, -114,  133,  -96,  147,
    0,    0,   21,  148,    0,  126,    0,  168,  155,  -93,
    0,  158,    0,    0,    0,  157,   21,    0,    0,    0,
   21,   21,   21,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,  446,    0,    0,    0,    0,    0, -226,    0,
    0,    0,    4,    0,    0,    0,    0,    0,   22, -198,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  184,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -124,  691, -145,  653,  619, -178,
  557,  436,  361,  276,    0,    0,  246,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  216,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  703,  679,  667,  639,  -98,  578,
  599,  461,  486,  511,  536,  386,  411,  306,  336,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -226,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -46,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -90,    0,    0,    0,
  245,  275,  305,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
    0,  453,  152,    0,  455,    0,  344,    0,  450,    0,
 -164,    0,  428,  417,    0,  -26, -136, -112,    0,    0,
    0,  277,    0,    0,  307,    0,    0,  -18,    0,  430,
  448,  429,  444,  456,  270,  -15,  283,  299,  -27,    0,
    0,    0,    0,
};
#define YYTABLESIZE 997
static const YYINT yytable[] = {                         44,
   71,  192,  141,   58,   64,    1,  176,   76,   77,   78,
   79,   80,   81,   82,   83,  184,   26,   59,   26,  103,
  104,  105,  106,  107,   85,  142,   30,   31,   32,   33,
  115,   34,   35,   36,   37,   38,   39,   17,   20,   18,
  110,   40,   41,   42,  217,   27,  138,  111,  108,   87,
   13,    9,   21,   22,   69,  139,   10,   88,   43,   13,
   13,   70,   70,  116,  117,   23,  118,   60,  144,  119,
  120,  121,  122,  123,  124,  160,  161,  162,   14,  152,
  153,  154,  155,   74,  171,   95,   96,   14,   14,  164,
  168,   65,  137,   97,   98,   83,   83,   83,   83,   70,
  242,  221,   86,  180,  243,   83,   83,   83,   83,   83,
  233,   83,   89,   83,  189,   83,   90,   30,   31,   32,
   33,  187,   34,   35,   36,   37,   38,   39,  170,  184,
  184,   77,   40,   41,   42,   70,  193,   91,   77,   77,
   77,   77,   77,  194,   77,  196,   77,  168,   77,   43,
  195,    5,   92,  166,    5,  197,  198,   70,  200,  203,
  206,   73,   73,   73,  109,   73,  193,   73,   18,   73,
  113,  207,  193,  208,  210,   82,   82,   82,   82,  225,
   24,   25,  114,  203,  218,   82,   82,   82,   82,   82,
  168,   82,   26,   82,  220,   82,  224,  227,  140,  235,
  238,  228,  229,   62,  228,  229,  143,   62,   62,  236,
   53,   53,   53,   53,   53,   53,   53,   53,   53,   53,
   53,   72,   93,   94,   73,   53,   53,   53,   30,   31,
   32,   33,  115,   34,   35,   36,   37,   38,   39,   99,
  100,  169,   53,   40,   41,   42,   53,   53,   53,  174,
   53,   53,   53,   53,   53,   53,   53,   53,   53,  175,
   43,  181,   61,  177,   70,  183,  117,   62,  118,  101,
  102,  119,  120,  121,  122,  123,  124,   30,   31,   32,
   33,  115,   34,   35,   36,   37,   38,   39,   72,   12,
   12,  172,   40,   41,   42,   30,   31,   32,   33,  178,
   34,   35,   36,   37,   38,   39,  186,   18,   18,   43,
   40,   41,   42,   70,   67,  117,  182,  118,  185,   68,
  119,  120,  121,  122,  123,  124,  190,   43,  199,  191,
  188,  209,   30,   31,   32,   33,  204,   34,   35,   36,
   37,   38,   39,    6,  211,  173,    6,   40,   41,   42,
   62,   30,   31,   32,   33,  205,   34,   35,   36,   37,
   38,   39,  150,  151,   43,  163,   40,   41,   42,  212,
   30,   31,   32,   33,   84,   34,   35,   36,   37,   38,
   39,  156,  157,   43,  222,   40,   41,   42,   30,   31,
   32,   33,  213,   34,   35,   36,   37,   38,   39,  158,
  159,  214,   43,   40,   41,   42,   30,   31,   32,   33,
  216,   34,   35,   36,   37,   38,   39,  179,   70,  219,
   43,   40,   41,   42,   30,   31,   32,   33,  226,   34,
   35,   36,   37,   38,   39,  201,  232,  234,   43,   40,
   41,   42,  237,  240,  241,    1,  119,  119,  119,  119,
  119,  119,  119,  119,  119,   16,   43,  119,  119,  119,
  119,  119,  119,  119,  119,  119,  119,  119,  119,  119,
  119,  119,  119,  119,   66,  119,   63,  119,  118,  118,
  118,  118,  118,  118,  118,  118,  118,  112,  136,  118,
  118,  118,  118,  118,  118,  118,  118,  118,  118,  118,
  118,  118,  118,  118,  118,  118,  239,  118,  215,  118,
  117,  117,  117,  117,  117,  117,  117,  145,  147,  117,
  117,  117,  117,  117,  117,  117,  117,  117,  117,  117,
  117,  117,  117,  117,  148,  117,  146,  117,   60,  117,
   97,   97,   60,   60,    0,   97,   97,  149,    0,   97,
   97,   97,   97,   97,   97,   97,   97,   97,   97,   97,
   97,   97,   97,   97,    0,   97,    0,   97,   61,   97,
   95,   95,   61,   61,    0,   95,   95,    0,    0,   95,
   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,
   95,   95,   95,   95,    0,   95,    0,   95,   59,   95,
   96,   96,   59,   59,    0,   96,   96,    0,    0,   96,
   96,   96,   96,   96,   96,   96,   96,   96,   96,   96,
   96,   96,   96,   96,    0,   96,    0,   96,    0,   96,
   94,   94,    0,    0,   94,   94,   94,   94,   94,   94,
   94,   94,   94,   94,   94,   94,   94,   94,   94,    0,
   94,    0,   94,    0,   94,   92,   92,    0,    0,   92,
   92,   92,   92,   92,   92,   92,   92,   92,   92,   92,
   92,   92,   92,   92,    0,   92,    0,   92,    0,   92,
   93,   93,    0,    0,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,   93,   93,   93,   93,    0,
   93,    0,   93,    0,   93,   91,   91,    0,    0,   91,
   91,   91,   91,   91,   91,    0,    0,   91,   91,   91,
   91,   91,   91,   91,    0,   91,    0,   91,    0,   91,
   88,   88,    0,    0,   88,   88,   88,   88,   88,   88,
    0,    0,   88,   88,   88,   88,   88,   88,   88,    0,
   88,    0,   88,    0,   88,   87,   87,    0,    0,   87,
   87,   87,   87,   87,   87,    0,    0,   87,   87,   87,
   87,   87,   87,   87,    0,   87,    0,   87,    0,   87,
   90,   90,    0,    0,   90,   90,   90,   90,   90,   90,
    0,    0,   90,   90,   90,   90,   90,   90,   90,    0,
   90,    0,   90,    0,   90,   89,   89,    0,    0,   89,
   89,   89,   89,   89,   89,    0,    0,   89,   89,   89,
   89,   89,   89,   89,    0,   89,    0,   89,    0,   89,
   86,   86,   86,   86,    0,    0,    0,    0,   86,   86,
   86,   86,   86,   86,   86,    0,   86,    0,   86,    0,
   86,   84,   84,   84,   84,    0,    0,    0,    0,   84,
   84,   84,   84,   84,   84,   84,    0,   84,    0,   84,
    0,   84,   85,   85,   85,   85,    0,    0,    0,    0,
   85,   85,   85,   85,   85,   85,   85,    0,   85,    0,
   85,    0,   85,   81,   81,   81,    0,    0,    0,    0,
    0,    0,   81,   81,   81,   81,   81,    0,   81,    0,
   81,    0,   81,   80,   80,   80,    0,    0,    0,    0,
    0,    0,   80,   80,   80,   80,   80,   79,   80,   79,
   80,    0,   80,    0,    0,    0,   79,   79,   79,   79,
   79,   78,   79,   78,   79,    0,   79,    0,    0,    0,
   78,   78,   78,   78,   78,   76,   78,    0,   78,    0,
   78,    0,   76,   76,   76,   76,   76,   75,   76,    0,
   76,    0,   76,    0,    0,   75,   75,   75,   75,   74,
   75,    0,   75,    0,   75,    0,    0,   74,   74,   74,
   74,    0,   74,    0,   74,    0,   74,
};
static const YYINT yycheck[] = {                         18,
   27,  166,  267,  277,   23,  261,  119,   35,   36,   37,
   38,   39,   40,   41,   42,  128,  261,  291,  261,  267,
  268,  269,  263,  264,   43,  290,  257,  258,  259,  260,
  261,  262,  263,  264,  265,  266,  267,  289,  262,  291,
   59,  272,  273,  274,  209,  290,   73,  290,  289,  277,
  277,  262,  286,  287,  286,   74,  267,  285,  289,  286,
  287,  293,  293,  294,  295,  277,  297,  289,   87,  300,
  301,  302,  303,  304,  305,  103,  104,  105,  277,   95,
   96,   97,   98,  291,  111,  270,  271,  286,  287,  108,
  109,  262,  286,  278,  279,  274,  275,  276,  277,  293,
  237,  214,  292,  122,  241,  284,  285,  286,  287,  288,
  223,  290,  284,  292,  142,  294,  275,  257,  258,  259,
  260,  140,  262,  263,  264,  265,  266,  267,  286,  242,
  243,  277,  272,  273,  274,  293,  287,  276,  284,  285,
  286,  287,  288,  294,  290,  172,  292,  166,  294,  289,
  286,    0,  274,  293,    3,  174,  175,  293,  177,  178,
  188,  286,  287,  288,  293,  290,  287,  292,  291,  294,
  262,  190,  287,  294,  193,  274,  275,  276,  277,  294,
  286,  287,  262,  202,  211,  284,  285,  286,  287,  288,
  209,  290,  261,  292,  213,  294,  215,  294,  291,  226,
  294,  298,  299,  294,  298,  299,  290,  298,  299,  228,
  257,  258,  259,  260,  261,  262,  263,  264,  265,  266,
  267,  287,  282,  283,  290,  272,  273,  274,  257,  258,
  259,  260,  261,  262,  263,  264,  265,  266,  267,  280,
  281,  292,  289,  272,  273,  274,  293,  294,  295,  289,
  297,  298,  299,  300,  301,  302,  303,  304,  305,  289,
  289,  286,  262,  289,  293,  294,  295,  267,  297,  265,
  266,  300,  301,  302,  303,  304,  305,  257,  258,  259,
  260,  261,  262,  263,  264,  265,  266,  267,  287,  286,
  287,  290,  272,  273,  274,  257,  258,  259,  260,  289,
  262,  263,  264,  265,  266,  267,  292,  286,  287,  289,
  272,  273,  274,  293,  262,  295,  286,  297,  286,  267,
  300,  301,  302,  303,  304,  305,  287,  289,  301,  290,
  290,  293,  257,  258,  259,  260,  286,  262,  263,  264,
  265,  266,  267,    0,  290,  262,    3,  272,  273,  274,
  267,  257,  258,  259,  260,  292,  262,  263,  264,  265,
  266,  267,   93,   94,  289,  290,  272,  273,  274,  290,
  257,  258,  259,  260,  261,  262,  263,  264,  265,  266,
  267,   99,  100,  289,  290,  272,  273,  274,  257,  258,
  259,  260,  289,  262,  263,  264,  265,  266,  267,  101,
  102,  290,  289,  272,  273,  274,  257,  258,  259,  260,
  286,  262,  263,  264,  265,  266,  267,  286,  293,  293,
  289,  272,  273,  274,  257,  258,  259,  260,  296,  262,
  263,  264,  265,  266,  267,  286,  290,  290,  289,  272,
  273,  274,  288,  286,  288,    0,  263,  264,  265,  266,
  267,  268,  269,  270,  271,    3,  289,  274,  275,  276,
  277,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  289,  290,   25,  292,   22,  294,  263,  264,
  265,  266,  267,  268,  269,  270,  271,   60,   72,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  230,  292,  202,  294,
  265,  266,  267,  268,  269,  270,  271,   88,   90,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,   91,  290,   89,  292,  294,  294,
  265,  266,  298,  299,   -1,  270,  271,   92,   -1,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,  294,  294,
  265,  266,  298,  299,   -1,  270,  271,   -1,   -1,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,  294,  294,
  265,  266,  298,  299,   -1,  270,  271,   -1,   -1,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,   -1,  294,
  270,  271,   -1,   -1,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
  290,   -1,  292,   -1,  294,  270,  271,   -1,   -1,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,   -1,  294,
  270,  271,   -1,   -1,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
  290,   -1,  292,   -1,  294,  270,  271,   -1,   -1,  274,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,   -1,  294,
  270,  271,   -1,   -1,  274,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,  285,  286,  287,  288,   -1,
  290,   -1,  292,   -1,  294,  270,  271,   -1,   -1,  274,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,   -1,  294,
  270,  271,   -1,   -1,  274,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,  285,  286,  287,  288,   -1,
  290,   -1,  292,   -1,  294,  270,  271,   -1,   -1,  274,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
  285,  286,  287,  288,   -1,  290,   -1,  292,   -1,  294,
  274,  275,  276,  277,   -1,   -1,   -1,   -1,  282,  283,
  284,  285,  286,  287,  288,   -1,  290,   -1,  292,   -1,
  294,  274,  275,  276,  277,   -1,   -1,   -1,   -1,  282,
  283,  284,  285,  286,  287,  288,   -1,  290,   -1,  292,
   -1,  294,  274,  275,  276,  277,   -1,   -1,   -1,   -1,
  282,  283,  284,  285,  286,  287,  288,   -1,  290,   -1,
  292,   -1,  294,  275,  276,  277,   -1,   -1,   -1,   -1,
   -1,   -1,  284,  285,  286,  287,  288,   -1,  290,   -1,
  292,   -1,  294,  275,  276,  277,   -1,   -1,   -1,   -1,
   -1,   -1,  284,  285,  286,  287,  288,  275,  290,  277,
  292,   -1,  294,   -1,   -1,   -1,  284,  285,  286,  287,
  288,  275,  290,  277,  292,   -1,  294,   -1,   -1,   -1,
  284,  285,  286,  287,  288,  277,  290,   -1,  292,   -1,
  294,   -1,  284,  285,  286,  287,  288,  277,  290,   -1,
  292,   -1,  294,   -1,   -1,  285,  286,  287,  288,  277,
  290,   -1,  292,   -1,  294,   -1,   -1,  285,  286,  287,
  288,   -1,  290,   -1,  292,   -1,  294,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 311
#define YYUNDFTOKEN 357
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","NUM","DOUBLE","CHAR","STRING",
"TYPE","ID","INC","DEC","ADD","MINUS","MULTIPLY","DIVIDE","PERCENT","LESS_THAN",
"GREATER_THAN","LOGICAL_NOT","BITWISE_NOT","AND_OP","OR_OP","XOR_OP","ASSIGN",
"LESS_OR_EQUAL_THAN","GREATER_OR_EQUAL_THAN","SHIFT_LEFT","SHIFT_RIGHT","EQUAL",
"NOT_EQUAL","AND","OR","SEMICOLON","COMMA","COLON","L_BRACKET","R_BRACKET",
"L_SQ_BRACKET","R_SQ_BRACKET","L_PARENTHESIS","R_PARENTHESIS","IF","ELSE",
"SWITCH","CASE","DEFAULT","DO","WHILE","FOR","RETURN","BREAK","CONTINUE",
"UMINUS","UADD","UMULTI","UANDOP","INCPOST","DECPOST","$accept","program",
"declarations","option","scalar_decl","ids","id_decl","id_decl_front",
"array_decl","arrays","array_id","array_dimen","array_content","function_decl",
"parameters","parameter","function_def","compound_stmt","stmts","stmt",
"if_else_stmt","switch_stmt","switch_clauses","switch_clause","while_stmt",
"for_stmt","for_cond","for_lastcond","return_stmt","assign_expr","or_expr",
"and_expr","or_op_expr","xor_op_expr","and_op_expr","equal_not_equal_expr",
"other_branch_expr","shift_expr","add_minus_expr","term_expr","prefix_expr",
"postfix_expr","expr_end","array_spec","arguments","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : declarations",
"declarations : declarations option",
"declarations : option",
"option : scalar_decl",
"option : array_decl",
"option : function_decl",
"option : function_def",
"scalar_decl : TYPE ids SEMICOLON",
"ids : id_decl",
"ids : ids COMMA id_decl",
"id_decl : id_decl_front ASSIGN assign_expr",
"id_decl : id_decl_front",
"id_decl_front : ID",
"id_decl_front : MULTIPLY ID",
"array_decl : TYPE arrays SEMICOLON",
"arrays : arrays COMMA array_id",
"arrays : array_id",
"array_id : ID array_dimen",
"array_id : ID array_dimen ASSIGN L_PARENTHESIS array_content R_PARENTHESIS",
"array_dimen : array_dimen L_SQ_BRACKET assign_expr R_SQ_BRACKET",
"array_dimen : L_SQ_BRACKET assign_expr R_SQ_BRACKET",
"array_content : L_PARENTHESIS array_content R_PARENTHESIS",
"array_content : array_content COMMA L_PARENTHESIS array_content R_PARENTHESIS",
"array_content : array_content COMMA assign_expr",
"array_content : assign_expr",
"function_decl : TYPE ID L_BRACKET parameters R_BRACKET SEMICOLON",
"function_decl : TYPE MULTIPLY ID L_BRACKET parameters R_BRACKET SEMICOLON",
"function_decl : TYPE ID L_BRACKET R_BRACKET SEMICOLON",
"function_decl : TYPE MULTIPLY ID L_BRACKET R_BRACKET SEMICOLON",
"parameters : parameter",
"parameters : parameters COMMA parameter",
"parameter : TYPE ID",
"parameter : TYPE MULTIPLY ID",
"function_def : TYPE ID L_BRACKET parameters R_BRACKET compound_stmt",
"function_def : TYPE MULTIPLY ID L_BRACKET parameters R_BRACKET compound_stmt",
"function_def : TYPE ID L_BRACKET R_BRACKET compound_stmt",
"function_def : TYPE MULTIPLY ID L_BRACKET R_BRACKET compound_stmt",
"compound_stmt : L_PARENTHESIS stmts R_PARENTHESIS",
"compound_stmt : L_PARENTHESIS R_PARENTHESIS",
"stmts : stmts stmt",
"stmts : stmt",
"stmt : scalar_decl",
"stmt : array_decl",
"stmt : assign_expr SEMICOLON",
"stmt : if_else_stmt",
"stmt : switch_stmt",
"stmt : while_stmt",
"stmt : for_stmt",
"stmt : return_stmt",
"stmt : BREAK SEMICOLON",
"stmt : CONTINUE SEMICOLON",
"stmt : compound_stmt",
"if_else_stmt : IF L_BRACKET assign_expr R_BRACKET compound_stmt",
"if_else_stmt : IF L_BRACKET assign_expr R_BRACKET compound_stmt ELSE compound_stmt",
"switch_stmt : SWITCH L_BRACKET assign_expr R_BRACKET L_PARENTHESIS switch_clauses R_PARENTHESIS",
"switch_stmt : SWITCH L_BRACKET assign_expr R_BRACKET L_PARENTHESIS R_PARENTHESIS",
"switch_clauses : switch_clauses switch_clause",
"switch_clauses : switch_clause",
"switch_clause : CASE assign_expr COLON stmts",
"switch_clause : CASE assign_expr COLON",
"switch_clause : DEFAULT COLON stmts",
"switch_clause : DEFAULT COLON",
"while_stmt : WHILE L_BRACKET assign_expr R_BRACKET stmt",
"while_stmt : DO stmt WHILE L_BRACKET assign_expr R_BRACKET SEMICOLON",
"for_stmt : FOR L_BRACKET for_cond for_cond for_lastcond stmt",
"for_cond : SEMICOLON",
"for_cond : assign_expr SEMICOLON",
"for_lastcond : R_BRACKET",
"for_lastcond : assign_expr R_BRACKET",
"return_stmt : RETURN assign_expr SEMICOLON",
"return_stmt : RETURN SEMICOLON",
"assign_expr : or_expr ASSIGN assign_expr",
"assign_expr : or_expr",
"or_expr : or_expr OR and_expr",
"or_expr : and_expr",
"and_expr : and_expr AND or_op_expr",
"and_expr : or_op_expr",
"or_op_expr : or_op_expr OR_OP xor_op_expr",
"or_op_expr : xor_op_expr",
"xor_op_expr : xor_op_expr XOR_OP and_op_expr",
"xor_op_expr : and_op_expr",
"and_op_expr : and_op_expr AND_OP equal_not_equal_expr",
"and_op_expr : equal_not_equal_expr",
"equal_not_equal_expr : equal_not_equal_expr EQUAL other_branch_expr",
"equal_not_equal_expr : equal_not_equal_expr NOT_EQUAL other_branch_expr",
"equal_not_equal_expr : other_branch_expr",
"other_branch_expr : other_branch_expr GREATER_THAN shift_expr",
"other_branch_expr : other_branch_expr LESS_THAN shift_expr",
"other_branch_expr : other_branch_expr GREATER_OR_EQUAL_THAN shift_expr",
"other_branch_expr : other_branch_expr LESS_OR_EQUAL_THAN shift_expr",
"other_branch_expr : shift_expr",
"shift_expr : shift_expr SHIFT_LEFT add_minus_expr",
"shift_expr : shift_expr SHIFT_RIGHT add_minus_expr",
"shift_expr : add_minus_expr",
"add_minus_expr : add_minus_expr ADD term_expr",
"add_minus_expr : add_minus_expr MINUS term_expr",
"add_minus_expr : term_expr",
"term_expr : term_expr MULTIPLY prefix_expr",
"term_expr : term_expr DIVIDE prefix_expr",
"term_expr : term_expr PERCENT prefix_expr",
"term_expr : prefix_expr",
"prefix_expr : INC prefix_expr",
"prefix_expr : DEC prefix_expr",
"prefix_expr : L_BRACKET TYPE R_BRACKET prefix_expr",
"prefix_expr : L_BRACKET TYPE MULTIPLY R_BRACKET prefix_expr",
"prefix_expr : ADD prefix_expr",
"prefix_expr : MINUS prefix_expr",
"prefix_expr : LOGICAL_NOT prefix_expr",
"prefix_expr : BITWISE_NOT prefix_expr",
"prefix_expr : MULTIPLY prefix_expr",
"prefix_expr : AND_OP prefix_expr",
"prefix_expr : postfix_expr",
"postfix_expr : expr_end INC",
"postfix_expr : expr_end DEC",
"postfix_expr : expr_end L_BRACKET R_BRACKET",
"postfix_expr : expr_end L_BRACKET arguments R_BRACKET",
"postfix_expr : expr_end",
"expr_end : ID array_spec",
"expr_end : ID",
"expr_end : NUM",
"expr_end : DOUBLE",
"expr_end : STRING",
"expr_end : CHAR",
"expr_end : L_BRACKET assign_expr R_BRACKET",
"array_spec : array_spec L_SQ_BRACKET assign_expr R_SQ_BRACKET",
"array_spec : L_SQ_BRACKET assign_expr R_SQ_BRACKET",
"arguments : arguments COMMA assign_expr",
"arguments : assign_expr",

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
#line 1085 "parser.y"


int main(void) {
    yyparse();
    return 0;
}

void yyerror(char *msg) {
    fprintf(stderr, "Error at line %d: %s\n", lineNo, msg);
}
#line 953 "y.tab.c"

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
case 1:
#line 56 "parser.y"
	{
        printf("%s", yystack.l_mark[0].stringVal);
    }
#line 1628 "y.tab.c"
break;
case 2:
#line 62 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)+1));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1638 "y.tab.c"
break;
case 3:
#line 68 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1645 "y.tab.c"
break;
case 4:
#line 74 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1652 "y.tab.c"
break;
case 5:
#line 77 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1659 "y.tab.c"
break;
case 6:
#line 80 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1666 "y.tab.c"
break;
case 7:
#line 83 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1673 "y.tab.c"
break;
case 8:
#line 91 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[-1].stringVal)+29));
        strcpy(s, "<scalar_decl>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ";");
        strcat(s, "</scalar_decl>");
        yyval.stringVal = s;
    }
#line 1686 "y.tab.c"
break;
case 9:
#line 103 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1693 "y.tab.c"
break;
case 10:
#line 106 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, ",");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1704 "y.tab.c"
break;
case 11:
#line 116 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, "=");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1715 "y.tab.c"
break;
case 12:
#line 123 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1722 "y.tab.c"
break;
case 13:
#line 129 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1729 "y.tab.c"
break;
case 14:
#line 132 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, "*");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1739 "y.tab.c"
break;
case 15:
#line 143 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[-1].stringVal)+27));
        strcpy(s, "<array_decl>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ";");
        strcat(s, "</array_decl>");
        yyval.stringVal = s;
    }
#line 1752 "y.tab.c"
break;
case 16:
#line 155 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, ",");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1763 "y.tab.c"
break;
case 17:
#line 162 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1770 "y.tab.c"
break;
case 18:
#line 168 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)+1));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1780 "y.tab.c"
break;
case 19:
#line 174 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-5].stringVal)+strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-1].stringVal)+4));
        strcpy(s, yystack.l_mark[-5].stringVal);
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, "=");
        strcat(s, "{");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "}");
        yyval.stringVal = s;
    }
#line 1794 "y.tab.c"
break;
case 20:
#line 187 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[-1].stringVal)+3));
        strcpy(s, yystack.l_mark[-3].stringVal);
        strcat(s, "[");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "]");
        yyval.stringVal = s;
    }
#line 1806 "y.tab.c"
break;
case 21:
#line 195 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+3));
        strcat(s, "[");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "]");
        yyval.stringVal = s;
    }
#line 1817 "y.tab.c"
break;
case 22:
#line 204 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+3));
        strcpy(s, "{");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "}");
        yyval.stringVal = s;
    }
#line 1828 "y.tab.c"
break;
case 23:
#line 211 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-1].stringVal)+4));
        strcpy(s, yystack.l_mark[-4].stringVal);
        strcat(s, ",");
        strcat(s, "{");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "}");
        yyval.stringVal = s;
    }
#line 1841 "y.tab.c"
break;
case 24:
#line 220 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, ",");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1852 "y.tab.c"
break;
case 25:
#line 227 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1859 "y.tab.c"
break;
case 26:
#line 234 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-5].stringVal)+strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-2].stringVal)+27));
        strcpy(s, "<func_decl>");
        strcat(s, yystack.l_mark[-5].stringVal);
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, ";");
        strcat(s, "</func_decl>");
        yyval.stringVal = s;
    }
#line 1875 "y.tab.c"
break;
case 27:
#line 246 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-6].stringVal)+strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-2].stringVal)+28));
        strcpy(s, "<func_decl>");
        strcat(s, yystack.l_mark[-6].stringVal);
        strcat(s, "*");
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, ";");
        strcat(s, "</func_decl>");
        yyval.stringVal = s;
    }
#line 1892 "y.tab.c"
break;
case 28:
#line 259 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-3].stringVal)+27));
        strcpy(s, "<func_decl>");
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, "();");
        strcat(s, "</func_decl>");
        yyval.stringVal = s;
    }
#line 1905 "y.tab.c"
break;
case 29:
#line 268 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-5].stringVal)+strlen(yystack.l_mark[-3].stringVal)+28));
        strcpy(s, "<func_decl>");
        strcat(s, yystack.l_mark[-5].stringVal);
        strcat(s, "*");
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, "();");
        strcat(s, "</func_decl>");
        yyval.stringVal = s;
    }
#line 1919 "y.tab.c"
break;
case 30:
#line 281 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 1926 "y.tab.c"
break;
case 31:
#line 284 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, ",");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1937 "y.tab.c"
break;
case 32:
#line 294 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1947 "y.tab.c"
break;
case 33:
#line 300 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, "*");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 1958 "y.tab.c"
break;
case 34:
#line 313 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-5].stringVal)+strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+24));
        strcpy(s, "<func_def>");
        strcat(s, yystack.l_mark[-5].stringVal);
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</func_def>");
        yyval.stringVal = s;
    }
#line 1974 "y.tab.c"
break;
case 35:
#line 325 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-6].stringVal)+strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+25));
        strcpy(s, "<func_def>");
        strcat(s, yystack.l_mark[-6].stringVal);
        strcat(s, "*");
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</func_def>");
        yyval.stringVal = s;
    }
#line 1991 "y.tab.c"
break;
case 36:
#line 338 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[0].stringVal)+24));
        strcpy(s, "<func_def>");
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, "(");
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</func_def>");
        yyval.stringVal = s;
    }
#line 2006 "y.tab.c"
break;
case 37:
#line 349 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-5].stringVal)+strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[0].stringVal)+24));
        strcpy(s, "<func_def>");
        strcat(s, yystack.l_mark[-5].stringVal);
        strcat(s, "*");
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, "(");
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</func_def>");
        yyval.stringVal = s;
    }
#line 2022 "y.tab.c"
break;
case 38:
#line 364 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+3));
        strcpy(s, "{");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "}");
        yyval.stringVal = s;
    }
#line 2033 "y.tab.c"
break;
case 39:
#line 371 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*3);
        strcpy(s, "{}");
        yyval.stringVal = s;
    }
#line 2042 "y.tab.c"
break;
case 40:
#line 379 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)+1));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 2052 "y.tab.c"
break;
case 41:
#line 385 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2059 "y.tab.c"
break;
case 42:
#line 391 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2066 "y.tab.c"
break;
case 43:
#line 394 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2073 "y.tab.c"
break;
case 44:
#line 397 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+15));
        strcpy(s, "<stmt>");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ";");
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2085 "y.tab.c"
break;
case 45:
#line 405 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2092 "y.tab.c"
break;
case 46:
#line 408 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2099 "y.tab.c"
break;
case 47:
#line 411 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2106 "y.tab.c"
break;
case 48:
#line 414 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2113 "y.tab.c"
break;
case 49:
#line 417 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2120 "y.tab.c"
break;
case 50:
#line 420 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*20);
        strcpy(s, "<stmt>break;</stmt>");
        yyval.stringVal = s;
    }
#line 2129 "y.tab.c"
break;
case 51:
#line 425 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*23);
        strcpy(s, "<stmt>continue;</stmt>");
        yyval.stringVal = s;
    }
#line 2138 "y.tab.c"
break;
case 52:
#line 430 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+14));
        strcpy(s, "<stmt>");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2149 "y.tab.c"
break;
case 53:
#line 440 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+18));
        strcpy(s, "<stmt>");
        strcat(s, "if");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2164 "y.tab.c"
break;
case 54:
#line 451 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+22));
        strcpy(s, "<stmt>"); 
        strcat(s, "if");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, ")");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "else");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2181 "y.tab.c"
break;
case 55:
#line 467 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-4].stringVal)+strlen(yystack.l_mark[-1].stringVal)+24));
        strcpy(s, "<stmt>");
        strcat(s, "switch");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-4].stringVal);
        strcat(s, ")");
        strcat(s, "{");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "}");
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2198 "y.tab.c"
break;
case 56:
#line 480 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-3].stringVal)+24));
        strcpy(s, "<stmt>");
        strcat(s, "switch");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, ")");
        strcat(s, "{");
        strcat(s, "}");
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2214 "y.tab.c"
break;
case 57:
#line 495 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)+1));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 2224 "y.tab.c"
break;
case 58:
#line 501 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2231 "y.tab.c"
break;
case 59:
#line 507 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+6));
        strcpy(s, "case");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ":");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 2243 "y.tab.c"
break;
case 60:
#line 515 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+6));
        strcpy(s, "case");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ":");
        yyval.stringVal = s;
    }
#line 2254 "y.tab.c"
break;
case 61:
#line 522 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+9));
        strcpy(s, "default:");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 2264 "y.tab.c"
break;
case 62:
#line 528 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(9));
        strcpy(s, "default:");
        yyval.stringVal = s;
    }
#line 2273 "y.tab.c"
break;
case 63:
#line 536 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+21));
        strcpy(s, "<stmt>");
        strcat(s, "while");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2288 "y.tab.c"
break;
case 64:
#line 547 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-5].stringVal)+strlen(yystack.l_mark[-2].stringVal)+24));
        strcpy(s, "<stmt>");
        strcat(s, "do");
        strcat(s, yystack.l_mark[-5].stringVal);
        strcat(s, "while");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, ";");
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2305 "y.tab.c"
break;
case 65:
#line 563 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)+18));
        strcpy(s, "<stmt>");
        strcat(s, "for");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2321 "y.tab.c"
break;
case 66:
#line 578 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*2);
        strcpy(s, ";");
        yyval.stringVal = s;
    }
#line 2330 "y.tab.c"
break;
case 67:
#line 583 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+2));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, ";");
        yyval.stringVal = s;
    }
#line 2340 "y.tab.c"
break;
case 68:
#line 592 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*2);
        strcpy(s, ")");
        yyval.stringVal = s;
    }
#line 2349 "y.tab.c"
break;
case 69:
#line 597 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+2));
        strcpy(s, yystack.l_mark[-1].stringVal);
        strcat(s, ")");
        yyval.stringVal = s;
    }
#line 2359 "y.tab.c"
break;
case 70:
#line 606 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+21));
        strcpy(s, "<stmt>");
        strcat(s, "return");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ";");
        strcat(s, "</stmt>");
        yyval.stringVal = s;
    }
#line 2372 "y.tab.c"
break;
case 71:
#line 615 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*21);
        strcpy(s, "<stmt>return;</stmt>");
        yyval.stringVal = s;
    }
#line 2381 "y.tab.c"
break;
case 72:
#line 625 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "=");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2394 "y.tab.c"
break;
case 73:
#line 634 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2401 "y.tab.c"
break;
case 74:
#line 640 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "||");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2414 "y.tab.c"
break;
case 75:
#line 649 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal; 
    }
#line 2421 "y.tab.c"
break;
case 76:
#line 655 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "&&");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2434 "y.tab.c"
break;
case 77:
#line 664 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2441 "y.tab.c"
break;
case 78:
#line 670 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "|");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2454 "y.tab.c"
break;
case 79:
#line 679 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2461 "y.tab.c"
break;
case 80:
#line 685 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "^");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2474 "y.tab.c"
break;
case 81:
#line 694 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2481 "y.tab.c"
break;
case 82:
#line 700 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "&");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2494 "y.tab.c"
break;
case 83:
#line 709 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2501 "y.tab.c"
break;
case 84:
#line 715 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "==");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2514 "y.tab.c"
break;
case 85:
#line 724 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "!=");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2527 "y.tab.c"
break;
case 86:
#line 733 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2534 "y.tab.c"
break;
case 87:
#line 740 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ">");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2547 "y.tab.c"
break;
case 88:
#line 749 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "<");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2560 "y.tab.c"
break;
case 89:
#line 758 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ">=");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2573 "y.tab.c"
break;
case 90:
#line 767 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "<=");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2586 "y.tab.c"
break;
case 91:
#line 776 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2593 "y.tab.c"
break;
case 92:
#line 782 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "<<");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2606 "y.tab.c"
break;
case 93:
#line 791 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ">>");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2619 "y.tab.c"
break;
case 94:
#line 800 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2626 "y.tab.c"
break;
case 95:
#line 806 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "+");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2639 "y.tab.c"
break;
case 96:
#line 815 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "-");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2652 "y.tab.c"
break;
case 97:
#line 824 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2659 "y.tab.c"
break;
case 98:
#line 831 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "*");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2672 "y.tab.c"
break;
case 99:
#line 840 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "/");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2685 "y.tab.c"
break;
case 100:
#line 849 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "%");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2698 "y.tab.c"
break;
case 101:
#line 858 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2705 "y.tab.c"
break;
case 102:
#line 865 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, "++");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2717 "y.tab.c"
break;
case 103:
#line 873 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, "--");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2729 "y.tab.c"
break;
case 104:
#line 881 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+30));
        strcpy(s, "<expr>");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, ")");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2743 "y.tab.c"
break;
case 105:
#line 891 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[-1].stringVal)+30));
        strcpy(s, "<expr>");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, "*)");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2757 "y.tab.c"
break;
case 106:
#line 901 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, "+");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2769 "y.tab.c"
break;
case 107:
#line 909 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, "-");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2781 "y.tab.c"
break;
case 108:
#line 917 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, "!");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2793 "y.tab.c"
break;
case 109:
#line 925 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, "~");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2805 "y.tab.c"
break;
case 110:
#line 933 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, "*");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2817 "y.tab.c"
break;
case 111:
#line 941 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+15));
        strcpy(s, "<expr>");
        strcat(s, "&");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2829 "y.tab.c"
break;
case 112:
#line 950 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2836 "y.tab.c"
break;
case 113:
#line 957 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "++");
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2848 "y.tab.c"
break;
case 114:
#line 965 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "--");
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2860 "y.tab.c"
break;
case 115:
#line 973 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-2].stringVal);
        strcat(s, "()");
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2872 "y.tab.c"
break;
case 116:
#line 981 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[-1].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-3].stringVal);
        strcat(s, "(");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ")");
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2886 "y.tab.c"
break;
case 117:
#line 991 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 2893 "y.tab.c"
break;
case 118:
#line 997 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+strlen(yystack.l_mark[0].stringVal)+14));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2905 "y.tab.c"
break;
case 119:
#line 1005 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+14));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2916 "y.tab.c"
break;
case 120:
#line 1012 "parser.y"
	{
        char *tmp = int_to_string(yystack.l_mark[0].intVal);
        char *s = (char*)malloc(sizeof(char)*(strlen(tmp)+14));
        strcpy(s, "<expr>");
        strcat(s, tmp);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2928 "y.tab.c"
break;
case 121:
#line 1020 "parser.y"
	{
        char *tmp = double_to_string(yystack.l_mark[0].doubleVal);
        char *s = (char*)malloc(sizeof(char)*(strlen(tmp)+14));
        strcpy(s, "<expr>");
        strcat(s, tmp);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2940 "y.tab.c"
break;
case 122:
#line 1028 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+14));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2951 "y.tab.c"
break;
case 123:
#line 1035 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[0].stringVal)+14));
        strcpy(s, "<expr>");
        strcat(s, yystack.l_mark[0].stringVal);
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2962 "y.tab.c"
break;
case 124:
#line 1042 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+16));
        strcpy(s, "<expr>");
        strcat(s, "(");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, ")");
        strcat(s, "</expr>");
        yyval.stringVal = s;
    }
#line 2975 "y.tab.c"
break;
case 125:
#line 1054 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-3].stringVal)+strlen(yystack.l_mark[-1].stringVal)+3));
        strcpy(s, yystack.l_mark[-3].stringVal);
        strcat(s, "[");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "]");
        yyval.stringVal = s;
    }
#line 2987 "y.tab.c"
break;
case 126:
#line 1062 "parser.y"
	{ 
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-1].stringVal)+3));
        strcpy(s, "[");
        strcat(s, yystack.l_mark[-1].stringVal);
        strcat(s, "]");
        yyval.stringVal = s;
    }
#line 2998 "y.tab.c"
break;
case 127:
#line 1073 "parser.y"
	{
        char *s = (char*)malloc(sizeof(char)*(strlen(yystack.l_mark[-2].stringVal)+strlen(yystack.l_mark[0].stringVal)+2));
        strcpy(s, yystack.l_mark[-2].stringVal);
        strcat(s, ",");
        strcat(s, yystack.l_mark[0].stringVal);
        yyval.stringVal = s;
    }
#line 3009 "y.tab.c"
break;
case 128:
#line 1080 "parser.y"
	{
        yyval.stringVal = yystack.l_mark[0].stringVal;
    }
#line 3016 "y.tab.c"
break;
#line 3018 "y.tab.c"
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

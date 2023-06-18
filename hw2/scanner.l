%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

void rm_space(char *s) {
    char *new = (char*)malloc(sizeof(char)*strlen(s));
    for (int i = 0, j = 0; i < strlen(s); i++) {
        if (s[i] != ' ') {
            new[j] = s[i];
            j++;
        }
    }
    strcpy(s, new);

}
%}


ID (_|[a-zA-Z])(_|[a-zA-Z]|[0-9])*
INTEGER [0-9]+
FLOAT [+-]?("."[0-9]+|[0-9]+"."|[0-9]+"."[0-9]+)
SPACE " "|"\t"
TYPE (("const"(" ")+)?("signed"(" ")+|"unsigned"(" ")+)?("long long"(" ")+|"long"(" ")+|"short"(" ")+)?"int")|(("const"(" ")+)?("signed"(" ")+|"unsigned"(" ")+)?("long long"|"long"|"short"|"char"))|(("const"(" ")+)?("signed"|"unsigned"|"float"|"double"|"void"))|"const"|"char"|"signed"|"unsigned"|"float"|"double"|"void"
STRING \"(\\.|[^\n"\\])*\" 
CHAR \'(\\.|[^\n'\\])\' 
LINE "\n"

%%

{SPACE} {}
{LINE} {}
{TYPE} {
    rm_space(yytext);
    yylval.stringVal = strdup(yytext);
    return TYPE;
}
"NULL" {
    yylval.stringVal = strdup("0");
    return NUM;
}

"if" { return IF; }
"else" { return ELSE; }
"switch" { return SWITCH; }
"case" { return CASE; }
"default" { return DEFAULT; }
"do" { return DO; }
"while" { return WHILE; }
"for" { return FOR; }
"return" { return RETURN; }
"break" { return BREAK;}
"continue" { return CONTINUE; }






"++" { return INC; }
"--" { return DEC; }
"<=" { return LESS_OR_EQUAL_THAN; }
">=" { return GREATER_OR_EQUAL_THAN; }
"<<" { return SHIFT_LEFT; }
">>" { return SHIFT_RIGHT; }
"==" { return EQUAL; }
"!=" { return NOT_EQUAL; }
"&&" { return AND; }
"||" { return OR; }
"+" { return ADD; }
"-" { return MINUS; }
"*" { return MULTIPLY; }
"/" { return DIVIDE; }
"%" { return PERCENT; }
"!" { return LOGICAL_NOT; }
"~" { return BITWISE_NOT; }
"<" { return LESS_THAN; }
">" { return GREATER_THAN; }
"&" { return AND_OP; }
"|" { return OR_OP; }
"^" { return XOR_OP; }
"=" { return ASSIGN; }

";" { return SEMICOLON; }
"," { return COMMA; }
":" { return COLON; }
"(" { return L_BRACKET; }
")" { return R_BRACKET; }
"[" { return L_SQ_BRACKET; }
"]" { return R_SQ_BRACKET; }
"{" { return L_PARENTHESIS; }
"}" { return R_PARENTHESIS; }

{ID} {
    yylval.stringVal = strdup(yytext);
    return ID;
}

{INTEGER} {
    yylval.intVal = atoi(yytext);
    return NUM;
}

{FLOAT} {
    yylval.doubleVal = atof(yytext);
    return DOUBLE;
}


{STRING} {
    yylval.stringVal = strdup(yytext);
    return STRING;
}

{CHAR} {
    yylval.stringVal = yytext;
    return CHAR;
}

%%

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int lineCount = 1;
    char* source = "";
    char* res;
    int pragma_source = 1;
    int pragma_token = 1;

    void concat(const char* s) {
        res = malloc(strlen(source) + strlen(s) + 1);
        strcpy(res, source);
        strcat(res, s);
        source = res;
    }

    void print_source() {
        if (pragma_source) {
            printf("%d:%s\n", lineCount, source);
        }
        lineCount++;
        source = "";
    }
%}

Keywords    "for"|"do"|"while"|"break"|"continue"|"if"|"else"|"return"|"struct"|"switch"|"case"|"default"|"void"|"int"|"double"|"float"|"char"|"const"|"signed"|"unsigned"|"short"|"long"
Macros      "NULL"|"__COUNTER__"|"__LINE__"|"INT_MAX"|"INT_MIN"|"CHAR_MAX"|"CHAR_MIN"|"MAX"|"MIN"
Operators   "+"|"-"|"*"|"/"|"%"|"++"|"--"|"<"|"<="|">"|">="|"=="|"!="|"="|"&&"|"||"|"!"|"&"|"|"
Punctuation ":"|";"|","|"."|"["|"]"|"("|")"|"{"|"}"
Space       " "|"\t"
Symbols     [#$@^_?~\\`] 

%x          COMMENT

%%

{Space} {concat(yytext);}
\n      {print_source();}
{Keywords} {
    if (pragma_token) {
        printf("#key:%s\n", yytext);
    }
    concat(yytext);
}
{Macros} {
    if (pragma_token) {
        printf("#macro:%s\n", yytext);
    }
    concat(yytext);
}
{Operators} {
    if (pragma_token) {
        printf("#op:%s\n", yytext);
    }
    concat(yytext);
}
{Punctuation} {
    if (pragma_token) {
        printf("#punc:%s\n", yytext);
    }
    concat(yytext);
}
(_|[a-zA-Z])(_|[a-zA-Z]|[0-9])* {
    if (pragma_token) {
        printf("#id:%s\n", yytext);
    }
    concat(yytext);
}
[+-]?[0-9]+  {
    if (pragma_token) {
        printf("#integer:%s\n", yytext);
    }
    concat(yytext);
}
[+-]?("."[0-9]+|[0-9]+"."|[0-9]+"."[0-9]+) {
    if (pragma_token) {
        printf("#float:%s\n", yytext);
    }
    concat(yytext);
}

\'(\\.|[^\n'\\])\'       {if (pragma_token) {printf("#char:%s\n", yytext);} concat(yytext);}
\"(\\.|[^\n"\\])*\"      {if (pragma_token) {printf("#string:%s\n", yytext);} concat(yytext);}


#{Space}*pragma{Space}+source{Space}+on   {pragma_source = 1; concat(yytext);}
#{Space}*pragma{Space}+source{Space}+off  {pragma_source = 0; concat(yytext);}
#{Space}*pragma{Space}+token{Space}+on    {pragma_token = 1; concat(yytext);}
#{Space}*pragma{Space}+token{Space}+off   {pragma_token = 0; concat(yytext);}


"//".*                   {concat(yytext);}
"/*"                     {concat(yytext); BEGIN COMMENT;}
<COMMENT>"*/"            {concat(yytext); BEGIN 0;}
<COMMENT>.               {concat(yytext);}
<COMMENT>\n              {print_source();}

%%

int main() {
    yylex();
    return 0;
}
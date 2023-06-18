#include <stdio.h>
#include <stdlib.h>
#define MAX_TABLE_SIZE 5000
#define FILENAME "codegen.S"
struct symbol_entry {
    char *name;
    int scope;
    int offset;
};

void init();
char *install_symbol(char*);
int look_up_symbol(char*);
void pop_up_symbol(int);
void code_gen_func_header(char*);
void code_gen_at_end_of_function_body(char*);
char *copys(char *s);

extern FILE* f_asm;
extern int cur_scope;
extern int cur_counter;
extern int cur_label;
extern struct symbol_entry table[MAX_TABLE_SIZE];
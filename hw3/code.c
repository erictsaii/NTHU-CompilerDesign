#include "code.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *f_asm;
int cur_scope;
int cur_counter;
int cur_local_var;
int cur_label;
struct symbol_entry table[MAX_TABLE_SIZE];

void init() {
    cur_counter = 0;
    cur_scope = 0;
}

char *install_symbol(char *s) {
    if (cur_counter >= MAX_TABLE_SIZE) {
        perror("Symbol Table Full");
    } else {
        cur_local_var++;
        table[cur_counter].scope = cur_scope;
        table[cur_counter].name = copys(s);
        table[cur_counter].offset = cur_local_var;
        cur_counter++;
    }
    return s;
}

int look_up_symbol(char *s) {
    int i;
    if (cur_counter == 0) return -1;
    for (i = cur_counter - 1; i >= 0; i--) {
        if (strcmp(s, table[i].name) == 0) return i;
    }
    return -1;
}

void pop_up_symbol(int scope) {
    int i;
    if (cur_counter == 0) return;
    for (i = cur_counter - 1; i >= 0; i++) {
        if (table[i].scope != scope)
            break;
        cur_local_var--;
    }
    cur_counter = i + 1;
}

void code_gen_func_header(char *functor) {
    fprintf(f_asm, "%s:\n", functor);
    fprintf(f_asm, "  // BEGIN EPILOGUE\n");
    fprintf(f_asm, "  sw s0, -4(sp) // save frame pointer\n");
    fprintf(f_asm, "  addi sp, sp, -4\n");
    fprintf(f_asm, "  addi s0, sp, 0 // set new frame pointer\n");
    fprintf(f_asm, "  sw sp, -4(s0)\n");
    fprintf(f_asm, "  sw s1, -8(s0)\n");
    fprintf(f_asm, "  sw s2, -12(s0)\n");
    fprintf(f_asm, "  sw s3, -16(s0)\n");
    fprintf(f_asm, "  sw s4, -20(s0)\n");
    fprintf(f_asm, "  sw s5, -24(s0)\n");
    fprintf(f_asm, "  sw s6, -28(s0)\n");
    fprintf(f_asm, "  sw s7, -32(s0)\n");
    fprintf(f_asm, "  sw s8, -36(s0)\n");
    fprintf(f_asm, "  sw s9, -40(s0)\n");
    fprintf(f_asm, "  sw s10, -44(s0)\n");
    fprintf(f_asm, "  sw s11, -48(s0)\n");
    fprintf(f_asm, "  addi sp, s0, -48 // update stack pointer\n");
    fprintf(f_asm, "  // END EPILOGUE\n");
    fprintf(f_asm, "  \n");
}

void code_gen_at_end_of_function_body(char *functor) {
    fprintf(f_asm, "  \n");
    fprintf(f_asm, "  // BEGIN EPILOGUE\n");
    fprintf(f_asm, "  lw s11, -48(s0)\n");
    fprintf(f_asm, "  lw s10, -44(s0)\n");
    fprintf(f_asm, "  lw s9, -40(s0)\n");
    fprintf(f_asm, "  lw s8, -36(s0)\n");
    fprintf(f_asm, "  lw s7, -32(s0)\n");
    fprintf(f_asm, "  lw s6, -28(s0)\n");
    fprintf(f_asm, "  lw s5, -24(s0)\n");
    fprintf(f_asm, "  lw s4, -20(s0)\n");
    fprintf(f_asm, "  lw s3, -16(s0)\n");
    fprintf(f_asm, "  lw s2, -12(s0)\n");
    fprintf(f_asm, "  lw s1, -8(s0)\n");
    fprintf(f_asm, "  lw sp, -4(s0)\n");
    fprintf(f_asm, "  addi sp, sp, 4\n");
    fprintf(f_asm, "  lw s0, -4(sp)\n");
    fprintf(f_asm, "  // END EPILOGUE\n");
    fprintf(f_asm, "  \n");
    fprintf(f_asm, "  jalr zero, 0(ra) // return\n");
}

char *copys(char *s) {
    char *n = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(n, s);
    return n;
}
CC = gcc
SCANNER = scanner.l
PARSER = parser.y
OUT_EXE = codegen

all:
	make clean
	make build

build:
	flex $(SCANNER)
	byacc -vd $(PARSER)
	$(CC) -o $(OUT_EXE) lex.yy.c y.tab.c code.c -lfl

clean:
	rm -f lex.yy.c y.tab.h y.tab.c $(OUT_EXE)
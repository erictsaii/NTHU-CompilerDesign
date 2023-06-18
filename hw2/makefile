make:
	flex scanner.l
	byacc -d parser.y
	gcc -o parser lex.yy.c y.tab.c -lfl
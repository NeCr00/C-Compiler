# C-Compiler
Mini Project --> making a compiler with flex and bison for C like language

commands to run project -->

1. compile scan.l with --> flex scan.l
2. compile parser.y without debug mode --> bison -d parser.y            (warning: in main on parser.y you should comment the command  yydebug = 1;
OR compile parser.y with debug mode --> bison -d parser.y --debug      (warining: in main uncomment the command  yydebug = 1;
3. extract compiler --> gcc parser.tab.c lex.yy.c helper.c -o compiler 
4. compile your file with  the new compiler --> ./compiler <name_of_file>   example: ./compiler test.c

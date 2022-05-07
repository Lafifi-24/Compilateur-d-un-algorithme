bison -d -osyntaxe.c syntaxe.y
flex -olexique.c lexique.l
gcc -o prog lexique.c syntaxe.c
prog < example.txt 
gcc -c createfile.c -o createfile.out -L. -lncurses
gcc -c printcommands.c -o printcommands.out -L -lncurses
gcc -c wordcount.c -o wordcount.out
gcc -c readfile.c -o readfile.out
gcc -c appendfile.c -o appendfile.out
ar rcs lib.a createfile.out printcommands.out wordcount.out readfile.out appendfile.out
gcc -o main.out main.c -L. lib.a -lncurses
./main.out

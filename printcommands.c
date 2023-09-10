#include<stdio.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
void printCommands()
{
    char commands[10][2][30]={{"command","function"},
     {"cn","create a new file"},
    {"cw" , "count no of words"},
    {"r","read file"},
    {"show","show all commands"}};
    for (int i = 0; i < 5; i++)
    {
        int n = strlen(commands[i][0]);
        printf("%s", commands[i][0]);
        for (int j = 0; j < 20 - n; j++)
        {
            printf(" ");
        }
        printf("%s\n", commands[i][1]);
    }
}



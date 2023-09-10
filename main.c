#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "functions.h"  
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
#pragma GCC diagnostic ignored "-Wformat"
int main()
{
    printCommands();
    while (1)
    {
        char command[10];
        scanf("%s", &command);
        if (!strcmp(command, "cn"))
        {
            char filename[50];
            printf("\nenter file name:");
            scanf("%s", &filename);
            printf("%s",createFile(filename));
        }
        else if (!strcmp(command, "r"))
        {
            char filename[50];
            printf("\n enter file name:");
            scanf("%s", &filename);
            show(filename);
        }
        else if (!strcmp(command, "cw"))
        {
            char filename[50];
            printf("\n enter file name:");
            scanf("%s", &filename);
            wordcount(filename);
        }
        else if (!strcmp(command, "show"))
        {
            printCommands();
        }
        else if (!strcmp(command, "0"))
        {
            break;
        }
    }
    // printf("%s", createFile("hello.txt"));
}

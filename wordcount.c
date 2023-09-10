#include <stdio.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
#pragma GCC diagnostic ignored "-Wstringop-overflow"
void wordcount(char *filename)
{
    FILE *fptr;
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("The file does not exist");
        return;
    }
    int words = 0;
    int  c;
    int flag=1;
    while ((c = fgetc(fptr)) != EOF)
    {

        // Print the dataToBeRead
            if (c!= ' ' && c!= '\n')
                {if(flag==1) {words++;flag=0;}}
            else flag=1;
     }
    printf("%d", words);
}

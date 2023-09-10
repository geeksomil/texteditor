#include<stdio.h>
#pragma GCC diagnostic ignored "-Wstringop-overflow="
void show(char *filename)
{
    FILE *fptr;

    // opening the file in read mode
    fptr = fopen(filename, "r");

    // checking if the file is opened successfully
    if (fptr == NULL)
    {
        printf("The file does not exist");
    }
    char content[50];
    while (fgets(content, 100, fptr) != NULL)
    {

        // Print the dataToBeRead
        printf("%s", content);
    }

    fclose(fptr);
}

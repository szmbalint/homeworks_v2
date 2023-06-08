#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Hiba!\n");
        exit(1);
    }
    else
    {
        int legrovidebb = strlen(argv[1]);
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[i]) < legrovidebb)
            {
                legrovidebb = strlen(argv[i]);
            }
        }
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[i]) == legrovidebb)
            {
                printf("%s\n",argv[i]);
            }
            
        }
        
    }
    



    return 0;
}
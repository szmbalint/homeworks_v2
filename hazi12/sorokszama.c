#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        fprintf(stderr,"Hiba! adja meg a fajlnevet!");
        exit(1);
    }
    else
    {
        string fajlnev = argv[1];
        FILE *fp = fopen(fajlnev, "r");
        if (fp == NULL)
        {
            fprintf(stderr,"HIBA A MEGNYITASKOR!");
            exit(1);
        }
        
        char sorok[1000];
        int sorokszama = 0;
        while (fgets(sorok, 1000, fp) != NULL)
        {
            sorokszama++;
        }
        printf("\n%d",sorokszama);
    }
    


    return 0;
}
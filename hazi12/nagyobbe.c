#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main()
{
    string fajlnev = "in.txt";
    FILE *fp = fopen(fajlnev, "r");
    FILE *out = fopen("output.txt","w");
    int mennyiseg = 0;
    if (fp == NULL)
    {
        printf("HIBA!");
        exit(1);
    }
    printf("\nMegnyitva!");
    char sorok[1000];
    printf("\nSzamok keresese");
    float nullaot = 0.5;
    while (fgets(sorok, 1000, fp) != NULL)
    {
        if (atof(sorok) > nullaot)
        {
            fprintf(out,"%s", sorok);
            mennyiseg++;
        }
        
    }
    printf("\nSzures vege");

    fclose(fp);
    fclose(out);
    printf("\nout txt bezarva");
    printf("\nA kiirt szamok mennyisege: %d",mennyiseg);
    


    return 0;
}
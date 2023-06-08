#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

#define MAX 1000

int main()
{

    string fajlnev = "millions.txt";

    FILE *fp = fopen(fajlnev, "r");
    char sorok[MAX];
    int darab = 0;
    while (fgets(sorok, MAX, fp) != NULL)
    {
        darab++;
    }   
    fclose(fp);

    FILE *fp2 = fopen(fajlnev, "r");
    int *p = malloc(darab*(sizeof(int)));
    printf("\nlefoglalva\n");
    int k = 0;
    char sorok2[MAX];
    while (fgets(sorok2, MAX, fp2) != NULL)
    {
        
        p[k] = atoi(sorok2);
        k++;
        
    }
     

    
    string eredmeny = "rendezve.txt";
    FILE *iras = fopen(eredmeny, "w");
    if (iras == NULL)
    {
        printf("HIBA!");
        exit(1);
    }
    for(int j = 0; j < darab; j++)
    {
        int legkisebb = p[j];
        for (int i = 0; i < darab; i++)
        {
            if (p[i] <= legkisebb && p[i] != 0)
            {
                legkisebb = p[i];
            }
            
        }
        fprintf(iras,"%d\n",legkisebb);
        p[j] = 0;
    }
    
    

    fclose(fp2);
    free(p);



    return 0;

}
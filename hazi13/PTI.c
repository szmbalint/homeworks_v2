#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

#define SIZE 100


int strcmpi(const char* s1, const char* s2)
{
    int ertek;
    int jo = 0;
    if (strlen(s1) == strlen(s2))
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] == s2[i] || ((s1[i] + 32) == s2[i]) || (((s1[i] - 32) == s2[i])) || ((s2[i] + 32) == s1[i]) || ((s2[i] - 32) == s1[i]))
            {
                jo++;
            }
            
        }
        if (jo == strlen(s1) )
        {
            return 1;
        }
        
    }
    else
    {
        return 0;
    }
    
}


int main()
{
    char sor[SIZE];
    int szamlalo = 0;
    char *token;
    char *nevek[SIZE];
    char *szakok[SIZE];
    FILE *fp = fopen("hallgatok.csv","r");
    while (fgets(sor, SIZE, fp) != NULL)
    {
        char *szak;
        char *nev;
        sor[strlen(sor) - 1] = '\0';
        token = strtok(sor,",");
        nev = token;
        token = strtok(NULL,",");
        token = strtok(NULL,",");
        szak = token;
        nev[0] = nev[0] - 32;
        nevek[szamlalo] = strdup(nev);
        nevek[szamlalo][strlen(nev)] = '\0';
        szakok[szamlalo] = strdup(szak);
        szakok[szamlalo][strlen(szak)] = '\0';
        szamlalo++;
        
        
    }
       

    printf("\nRendezes elott: ");
    for (int i = 0; i < szamlalo; i++)
    {
        printf("\n %s",nevek[i]);
    }
    
    printf("\nRendezes utan (csak pti-s hallgatok): ");
   
    
    for (int u = 5; u > 0; u--)
    {
        for (int p = 0; p < u; p++)
        {
            if (strcmp(nevek[p], nevek[p + 1]) > 0)
            {
                char *temp = nevek[p+1];
                nevek[p+1] = nevek[p];
                nevek[p] = temp;
            }
            
        }
        
    }

    char *pti = "pti";

    for (int i = 0; i < szamlalo; i++)
    {
        if (strcmpi(szakok[i], "PTI"))  
        {
            printf("\n%s",nevek[i]);
        }
        
        
    }
    
    
    fclose(fp);

    return 0;
}
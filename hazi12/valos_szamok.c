#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main()
{
    string fajlnev = "valos_szamok.txt";
    FILE *fp = fopen(fajlnev, "r");
    double osszeg = 0;
    char sorok[1000];
    while (fgets(sorok, 1000, fp) != NULL)
    {
        sorok[1] = '.';
        osszeg += atof(sorok);
    }
    

    printf("\nAz osszeg: %.20lf",osszeg);



    return 0;
}
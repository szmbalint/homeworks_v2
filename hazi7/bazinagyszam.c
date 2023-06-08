#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main()
{
    string szam = "13407807929942597099574024998205846127479365820592393377723561443721764030073546976801874298166903427690031858186486050853753882811946569946433649006084096";
    int hossz = strlen(szam);
    int osszeg = 0;
    
    for (int i = 0; i < hossz; i++)
    {
        osszeg += szam[i]-48;
    }
    printf("Az osszeg: %d",osszeg);
    return 0;
}
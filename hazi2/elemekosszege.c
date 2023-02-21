#include <stdio.h>

int main()
{
    int szam = 0;
    int szam1;
    while (szam1 != 0)
    {
        printf("Adj meg egy szamot: ");
        scanf("%d",&szam1);
        szam = szam + szam1;
    }
    
    printf("Osszeg: %d",szam);



    return 0;
}
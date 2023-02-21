#include <stdio.h>

int main()
{
    int poz = 0;
    int neg = 0;
    int szam1;
    while (szam1 != 0)
    {
        printf("Adj meg egy szamot: ");
        scanf("%d",&szam1);
        if(szam1 > 0)
        {
            poz++;
        }
        if(szam1 < 0)
        {
            neg++;
        }
    }
    printf("Poz. elemek szama: %d\n",poz);
    printf("Neg. elemek szama: %d\n",neg);

    return 0;
}
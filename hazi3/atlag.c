#include <stdio.h>

int main()
{
    int szam;
    double osszeg = 0;
    double atlag = 0;
    int darab = 0;
    while(1)
    {
        szam = 0;
        printf("egesz szam (0 vegjel): ");
        scanf("%d",&szam);
        if (szam == 0)
        {
            break;
        }
        else
        {
            osszeg = osszeg + szam;
            darab++;
        }
        
        
    }
    atlag = osszeg / darab;
    printf("atlag: %.2lf \n",atlag);

    return 0;

}
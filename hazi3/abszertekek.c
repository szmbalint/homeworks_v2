#include <stdio.h>

int main()
{
    int szam;
    int osszeg = 0;
    while(1)
    {
        szam = 0;
        printf("egesz szam (0 vegjel): ");
        scanf("%d",&szam);
        if (szam == 0)
        {
            break;
        }
        else if (szam < 0)
        {
            szam = szam * -1;
            osszeg += szam;
        }
        else if(szam > 0)
        {
            osszeg += szam;
        }
        
        
    }
    printf("osszeg: %d",osszeg);

    return 0;

}
#include <stdio.h>

int main()
{
    int szam = 0;
    for (int i = 0; i <= 100; i++)
    {
        szam = szam + i;
    }
    printf("Osszeg: %d",szam);

    return 0;
}
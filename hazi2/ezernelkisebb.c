#include <stdio.h>

int main()
{
    int szam = 0;
    for (int i = 0; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            szam = szam + i;
        }
    }
    printf("Megoldas: %d",szam);

    return 0;
}
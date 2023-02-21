#include <stdio.h>

int main()
{
    int a, b, terulet, kerulet;
    printf("Kerem az A oldalt: ");
    scanf("%d",&a);
    printf("Kerem a B oldalt: ");
    scanf("%d",&b);
    terulet = a*b;
    kerulet = 2*(a+b);
    printf("A teglalap kerulete: %d\n",kerulet);
    printf("A teglalap kerulete: %d\n",terulet);

    return 0;


}

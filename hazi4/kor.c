#include <stdio.h> 

double terulet(int r, double pi)
{
    return pi*(r*r);
}
double kerulet(int r, double pi)
{
    return 2*pi*r;
}


int main()
{
    int r;
    double pi = 3.14;
    
    printf("Add meg 'r': ");
    scanf("%d",&r);
    printf("\nA terulet: %.2lf",terulet(r,pi));
    printf("\nA kerulet: %.2lf",kerulet(r,pi));
  return 0;
}
#include <stdio.h> 

int terulet(int a, int b)
{
    return a * b;
}
int kerulet(int a, int b)
{
    return 2*(a+b);
}


int main()
{
    int a;
    int b;
    
    printf("Add meg 'a': ");
    scanf("%d",&a);
    printf("Add meg 'b': ");
    scanf("%d",&b);
    printf("\nA terulet: %d",terulet(a,b));
    printf("\nA kerulet: %d",kerulet(a,b));

  return 0;
}
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("n1: ");
    scanf("%d",&n1);
    printf("n2: ");
    scanf("%d",&n2);
    if(n1 > n2)
    {
        printf(">");
    }
    else if(n1 < n2)
    {
        printf("<");
    }
    else if(n1 = n2)
    {
        printf("=");
    }


    return 0;
}
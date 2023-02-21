#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        if(i % 2 == 1)
        {
            printf("%d\n",i);
        }
    }
    

    return 0;
}
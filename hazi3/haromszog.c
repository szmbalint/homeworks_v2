#include <stdio.h>

int main()
{
    int magassag = 0;
    while(1)
    {
        printf("magassag: ");
        scanf("%d",&magassag);
        if (magassag > 0)
        {
            break;
        }   
    
    }
    int l = 0;
    for (int i = 1; i <= magassag; i++)
    {
            printf("\n");
            for (int j = 1; j <= magassag-i; j++)            
            {
                printf(" ");
            }
            for (int k = 1; k <= i+l; k++)
            {
                printf("#");
            }
            l++;
            
    }


    return 0;
}
#include <stdio.h> 

int legkisebb(int tomb[],int darab)
{
    int min = tomb[0];
    for(int i = 1; i <= darab; i++)
    {
        if (tomb[i] <= min)
        {
            min = tomb[i];
        }
        
    }


    return min;
}

int main()
{
    int tomb[10];
    int darab=0;
    printf("\nA szamok: \n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d. szam: ",i);
        scanf("%d",&tomb[i]);
        darab++;
    }

    printf("\nA tomb legkisebb eleme: %d",legkisebb(tomb,darab));


   return 0;
}
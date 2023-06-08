#include <stdio.h> 
#include <string.h> 

float calc(float szam1, float szam2, char jel)
{

    switch (jel)
    {
    case '+':
        return szam1+szam2;
        break;
        case '/':
        return szam1/szam2;
        break;
        case '-':
        return szam1-szam2;
        break;
        case '*':
        return szam1*szam2;
        break;
    
    default:
        return 404;
        break;
    }


}

int main()
{
    float szam1;
    float szam2;
    char jel;
    printf("\nA muveleti jel: ");
    scanf("%c",&jel);
    
    printf("\nA szam1: ");
    scanf("%f",&szam1);
    printf("\nA szam2: ");
    scanf("%f",&szam2);
    
    float result = calc(szam1, szam2, jel);
    printf("\nAz eredmeny: %.2f",result);

    return 0;
}
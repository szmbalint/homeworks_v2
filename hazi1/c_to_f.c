#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Kerem a celsiust: ");
    scanf("%f",&celsius);
    fahrenheit = (celsius*0.2)*9+32;
    printf("Ez a fok fahrenheit-ben: %f",fahrenheit);
    
    return 0;

}
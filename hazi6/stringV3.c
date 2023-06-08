#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int convert_to_int(char* str) 
{
    int num = 0;
    int sign = 1;
    char* p = str;
    
    // spacek elhagyasa
    while (isspace(*p)) 
    {
        p++;
    }
    
    // ha negativ
    if (*p == '-') 
    {
        sign = -1;
        p++;
    }
    
    // konv
    while (*p != '\0') 
    {
        if (!isdigit(*p)) 
        {
            // ha nem szam 
            return 0;
            exit(1);
        }
        num = num * 10 + (*p - '0');
        p++;
    }
    
    return num * sign;
}

int main() {
    char str[20];
    int num;

    printf("Egesz szam: ");
    scanf("%s", str);

    num = convert_to_int(str);

    printf("Az erteke: %d\n", num);

    return 0;
}
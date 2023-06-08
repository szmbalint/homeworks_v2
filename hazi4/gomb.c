#include <stdio.h>
#include <math.h>


double get_double()
{
    double szam;
    while(1)
    {
        printf("Adjon meg egy poz egesz szamot: ");
        scanf("%lf", &szam);
        if (szam>0)
        {
            break;
        }
        
    }
    return szam;
}
double terfogat(double szam)
{
	double resz = (4*(szam*szam*szam)*3.14);
    return resz/3;
	
}
double felszin(double szam)
{
    return (4*(szam*szam))*3.14;
}
int main(){

    double sugar = get_double(); 
    printf("\n");
    printf("terfogata: %.3lf cm3\n",terfogat(sugar));
    printf("felszine: %.3lf cm2\n",felszin(sugar));
return 0;

}
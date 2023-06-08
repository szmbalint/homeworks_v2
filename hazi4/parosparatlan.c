#include <stdio.h> 

int is_even(int n)
{
  if(n % 2 == 0)
  {
    return 1; 
  }
  else
  {
    return 0;
  }
}

int main()
{
  int szam;
  printf("\nPos.int.: ");
  scanf("%d",&szam);
  (is_even(szam)==1) ? (printf("True")) : (printf("False"));   



  return 0;
}
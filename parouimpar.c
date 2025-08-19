#include <stdio.h>


int main()
{
  int a;
  printf("Digite o número: ");
  scanf("%d" , &a);


  if( a % 2 == 0)
  {
    printf("ESTE NÚMERO É PAR\n");
  }

  else
  {
    printf("Ele é um número ímpar\n");
  }

  printf("FIM\n");

  return 0;
}
  

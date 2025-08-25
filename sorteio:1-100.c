#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int intervalo;
  int palpite;

  srand(time(NULL));

  intervalo = 1 + rand()%100;
  printf("Número escolhido, tnte advinhar o número...\n");

  do{
      do{
  
            printf("Seu palpite: ");
            scanf("%d", &palpite);

            if ( palpite < 1 || palpite > 100){
            printf("Valor inválido, digite novamente!\n");
            }

      }while (palpite < 1 || palpite > 100);

  
      if (palpite == intervalo) {
      printf("Parabéns!!! Você acertou");
      }
            
      else if ( palpite < intervalo) {
        printf("Você chutou muito baixo! Tente novamente.\n");
      }

     else {
        printf("Você chutou muito alto! Tente novamente.\n");
      }


   }while (palpite != intervalo);
   
   return 0;
  


  
  

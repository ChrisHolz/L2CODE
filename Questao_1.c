#include <stdio.h>
#include <stdlib.h>

int salvarposi = 1;
int x = 0, y = 0;
char direcao[5] = "ONLS";

void resultado(){
         printf("\n\n========================================================");
         printf("\no robo esta olhando para o %c", direcao[salvarposi]); 
         printf("\nNa posicao: X = %d, Y = %d", x, y);
         exit(0);
      }

 int main ()
 {
   int contador = 0, comprimentoy, largurax;
 //  int x = 0, y = 0;
 //   char direcao[5] = "ONLS";
    char direita[2] = "D";
    char esquerda[2] = "E";
    char frente[2] = "F";
    char atras[2] = "T";
    int vetor[4];

    vetor[0] = 0;
    vetor[1] = 1;
    vetor[2] = 2;
    vetor[3] = 3;

  // int salvarposi = 1;
   printf("digite o comprimento da sala: ");
   scanf("%d", &comprimentoy);
   printf("digite a largura da sala: ");
   scanf("%d", &largurax);
   getchar();


     char string[2000];
      printf ("Digite uma string: ");
      //gets (string);
      fgets(string, 2000, stdin); 
      
      do{
      int i = 1;
      printf ("[%d] - Caractere: %c: ",contador, string[contador]);

      if(string[contador] == direita[0]){
         printf("virou para DIREITA\n");
         vetor[i] = vetor[i] + 1;
            if(vetor[i] == -1){
               vetor[i] = vetor[3];
            }
            if(vetor[i] == 4){
               vetor[i] = vetor[0];
            }
         salvarposi = vetor[i];
      }

      if(string[contador] == esquerda[0]){
         printf("virou para ESQUERDA\n");
         vetor[i] = vetor[i] -1;
         if(vetor[i] == -1){
            vetor[i] = vetor[3];
         }
         if(vetor[i] == 4){
            vetor[i] = vetor[0];
         }
         salvarposi = vetor[i];
      }

      if(string[contador] == frente[0]){
         printf("andou para FRENTE\n");
         if(salvarposi == 1){
            if(comprimentoy > y){
            y++;
            }
         }

         if(salvarposi == 0){
            if(x != 0){
            x--;
            }
         }

         if(salvarposi == 2){
            if(largurax > x){
            x++;
            }
         }

         if(salvarposi == 3){
            if(x != 0){
            y--;
            }
         }
         
      }

      if(string[contador] == atras[0]){
         printf("andou para ATRAS\n");
         if(salvarposi == 1){
            if(y != 0){
            y--;
            }
         }

         if(salvarposi == 0){
            if(largurax > x){
            x++;
            }
         }

         if(salvarposi == 2){
            if(x != 0 ){
            x--;
            }
         }

         if(salvarposi == 3){
            if(comprimentoy > y){
            y++;
            }
         }
      }
            

            contador = contador + 1;
            }while(string[contador] != '\0'); 

         resultado();
        
      }

      
   //  void resultado(void){
   //      printf("\n\n========================================================");
    //     printf("\no robo esta olhando para o %c", direcao[salvarposi]); 
   //      printf("\nNa posicao: X = %d, Y = %d", x, y);
   //   }


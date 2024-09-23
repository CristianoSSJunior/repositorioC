#include <stdio.h>

int main() {
 int candidato, resto, cont = 0;

  
     printf("Qual número você quer testar? \n");
     scanf("%d", &candidato);
 
     for(int x = 1; x <= candidato; x++){
        resto = candidato % x;
     if(resto == 0){
        cont = cont + 1;
        }
     }
     
     if(cont == 2){
        printf("É primo!\n");
     }
    else{
        printf("Não é primo\n");
    }

    return 0;
}
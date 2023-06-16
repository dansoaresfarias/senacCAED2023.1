#include<stdio.h>

int main(){
  int n, i;
  // Entra de Dados
  printf("Informe um numero de 1 a 9: ");
  scanf("%d", &n);

  // Processando e Exibindo os dados
  for(i = 1 ; i <= 10 ; i++){
    printf("\t %d X %2d = %2d\n", n, i, i*n);
  } 
   
  return 0;
}

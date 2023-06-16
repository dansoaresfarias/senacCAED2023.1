#include<stdio.h>

int main(){
  float notaTemp, media;
  int i;
  media = 0.0;

  for(i=1 ; i<=3  ; i++){
  		printf("\nInforme a %dº nota: ", i);
  		scanf("%f", &notaTemp);
  		media += notaTemp;
  }
  
  media /= 3.0;
  printf("\nMedia = %.2f\n", media);

  if(media >= 0.0 && media < 5.0){
    printf("\nSeu conceito: Insuficiente!");
  } else if (media >= 5.0 && media < 7.0){
    printf("\nSeu conceito: ANS!");
  } else if (media >= 7.0 && media < 8.5){
    printf("\nSeu conceito: Bom!");
  } else if (media >= 8.5 && media < 9.5){
    printf("\nSeu conceito: Ótimo!");
  } else {
    printf("\nSeu conceito: Excelente!");
  }
	
   
  return 0;
}

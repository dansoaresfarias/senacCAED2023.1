#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  float notaTemp, media = 0.0;
  int i = 0;
  char resp = 'S';
  
  while( resp == 'S' ){
  	i++;
  	printf("\nInforme a %dº nota: ", i);
  	scanf("%f", &notaTemp);
  	media += notaTemp;
  	printf("\nDeseja informa mais alguma nota? (S-Sim | N-Nao): ");
  	resp = getche();
  } 		
  
  media /= i;
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

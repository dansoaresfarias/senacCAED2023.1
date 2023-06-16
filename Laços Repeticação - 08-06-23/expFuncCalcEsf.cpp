#include <stdio.h>
#include <locale>
#include "esfera.h"

int main(){
  setlocale(LC_ALL, "portuguese");
  float raio;

  printf("Informe o valor do raio esfera: ");
  scanf("%f", &raio);

  printf("\n¡rea = %.2f | Volume = %.2f\n", areaEsf(raio), volumeEsf(raio));
  
  return 0;
}

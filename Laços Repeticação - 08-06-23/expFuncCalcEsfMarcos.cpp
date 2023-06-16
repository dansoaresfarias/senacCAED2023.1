#include <stdio.h>
#include <locale>

#define PI 3.14159
#define SQR(num) ((num)*(num))
#define CUB(num) ((num)*(num)*(num))
#define AREAESF(raio) (4*PI*SQR(raio))
#define VOLUMEESF(raio) ((4/3)*PI*CUB(raio))

int main(){
  setlocale(LC_ALL, "portuguese");
  float raio;

  printf("Informe o valor do raio esfera: ");
  scanf("%f", &raio);

  printf("\n¡rea = %.2f | Volume = %.2f\n", AREAESF(raio), VOLUMEESF(raio));
  
  return 0;
}

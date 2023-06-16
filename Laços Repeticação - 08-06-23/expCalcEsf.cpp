#include <stdio.h>

int main(){
  float raio;
  float areaEsf, volumeEsf;
  const float PI = 3.14159265358979323846;

  printf("Informe o valor do raio esfera: ");
  scanf("%f", &raio);

  areaEsf = 4 * PI * raio * raio;
  volumeEsf = (4/3) * PI * raio * raio * raio;

  printf("\n¡rea = %.2f | Volume = %.2f\n", areaEsf, volumeEsf);
  
  return 0;
}

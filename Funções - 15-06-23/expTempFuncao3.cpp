#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
// #include"temperatura.h"
#include"temperaturaOtim.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	float tempC, tempF, tempK;
	char resp;
	
	do{
		system("CLS");
		//Entrada de dados
		printf("\nInforme a temperatura em °C: ");
		scanf("%f", &tempC);
		//Processamento de dados
		tempF = CelsToFahre(tempC);
		tempK = CelsToKelv(tempC);
		//Saída de dados
		printf("%.2f°C | %.2f°F | %.2fK", tempC, tempF, tempK);
		//Continuação do programa
		printf("\nDeseja repetir o programa? (S-Sim | N-Não): ");
  		resp = getche();
	}while(resp == 'S');
	return 0;
}

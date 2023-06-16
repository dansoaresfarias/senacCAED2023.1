#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

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
		tempF = (tempC * (9.0/5.0)) + 32.0;
		tempK = tempC + 273.0;
		//Saída de dados
		printf("%.2f°C | %.2f°F | %.2fK", tempC, tempF, tempK);
		//Continuação do programa
		printf("\nDeseja repetir o programa? (S-Sim | N-Não): ");
  		resp = getche();
	}while(resp == 'S');
	return 0;
}

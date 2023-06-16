#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

//Definir minhas fun��es
float CelsToFahre(float tc){
	float tf;
	tf = (tc * (9.0/5.0)) + 32.0;
	return tf;
}

float CelsToKelv(float tc){
	float tk;
	tk = tc + 273.0;
	return tk;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	float tempC, tempF, tempK;
	char resp;
	
	do{
		system("CLS");
		//Entrada de dados
		printf("\nInforme a temperatura em �C: ");
		scanf("%f", &tempC);
		//Processamento de dados
		tempF = CelsToFahre(tempC);
		tempK = CelsToKelv(tempC);
		//Sa�da de dados
		printf("%.2f�C | %.2f�F | %.2fK", tempC, tempF, tempK);
		//Continua��o do programa
		printf("\nDeseja repetir o programa? (S-Sim | N-N�o): ");
  		resp = getche();
	}while(resp == 'S');
	return 0;
}

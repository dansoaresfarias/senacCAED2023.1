#include<stdio.h>
#include"fatorialRec.h"

int main(){
	int num;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &num);
		
	printf("\n%d! = %d", num, fatorial(num));
	return 0;
}

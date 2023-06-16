#include<stdio.h>

int main(){
	int n, i, fat = 1;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &n);
	
	for(i = n ; i >= 1 ; i--){
		fat = fat * i;
	}
	
	printf("\n%d! = %d", n, fat);
	return 0;
}

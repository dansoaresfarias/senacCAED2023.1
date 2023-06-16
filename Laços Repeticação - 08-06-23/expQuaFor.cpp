#include<stdio.h>

int main(){
	int n, i, qua = 0;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &n);
	
	for(i = 0 ; i < n ; i++){
		qua = qua + (2*i + 1);
	}
	
	printf("\n%d x %d = %d", n, n, qua);
	return 0;
}

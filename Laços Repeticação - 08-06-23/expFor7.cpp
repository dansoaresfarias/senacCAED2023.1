#include<stdio.h>

int main(){
  int j, i;

  for(j = 1 ; j <= 10 ; j++){
  	for(i = 1 ; i <= 10 ; i++){
    	printf("\t %d X %2d = %2d\n", j, i, i*j);
  	} 
  	printf("\n\n");
  }  
   
  return 0;
}

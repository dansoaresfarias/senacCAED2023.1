int fatorial(int num){
	if(num == 1){
		return 1; //Critério de parada
	}else {
		return num * fatorial(num-1);
	}	
}
/*
	5! = 5*4*3*2*1 = 5*4!
	4! = 4*3*2*1
	1! = 1
	
	fatorial(5) = 5 * fatorial(4)
	fatorial(4) = 4 * fatorial(3)
	fatorial(3) = 3 * fatorial(2)
	fatorial(2) = 2 * fatorial(1)
	fatorial(1) = 1;
	
	fatorial(n) = n * fatorial(n-1)
*/

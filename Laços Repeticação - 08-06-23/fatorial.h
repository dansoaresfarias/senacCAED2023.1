int fatorial(int num){
	int i, resultado = 1;
	for(i = num ; i >= 1 ; i--){
		resultado = resultado * i;
	}
	return resultado;
}

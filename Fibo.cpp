#include <stdio.h>

int main()
{
	int x,n,resultado,aux;
	resultado = 0;
	n = 0;
	aux = 1;
	
	printf("Digite um numero:\n");
	scanf("%d", & x);
	
	for(int i = 0; i < x; i++){
		resultado = n + aux;
		n = aux;
		aux = resultado;
	}
	printf("O fibo do numero %d eh = %d", x,resultado);
}
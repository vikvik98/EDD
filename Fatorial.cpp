#include <stdio.h>

int main()
{
	int n,aux,resultado;
	aux = 1;
	printf("Digite o numero desejado:\n");
	scanf("%d",& n);
	for(int i=1; i <= n; i++){
		resultado = aux * i;
		aux = resultado;
	}
	printf("O fatorial de %d eh = %d", n, resultado);
	return 0;
}
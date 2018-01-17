#include <stdio.h>

int main()
{
	char s[30];
	int cont = 0 ,cont2 = 0;
	
	printf("Digite uma palavra ou frase:\n");
	gets(s);
	printf("Digite a letra que deseja procurar dentro da frase:\n");
	char c = getchar();
	
	while(true)
	{
		if(s[cont] == '\0')
			break;
		if(s[cont] == c)
			cont2++;
		cont++;
		
	}
	printf("Exite %d %c na frase %s", cont2,c,s);
	return 0;
}
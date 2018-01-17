#include <stdio.h>

char vetor[30];

void inverter(char vetor[30]){
	for(int i = 30; i >= 0; i--){
		if(vetor[i] != NULL){
			printf("%c", vetor[i]);			
		}
	}
}
int main(){
	printf("Digite uma palavra:\n");
	scanf("%s", vetor);
	inverter(vetor);
	return 0;
}

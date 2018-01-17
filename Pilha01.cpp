#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char nome;
		No *prox;
		No(char n){
			nome = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		No *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
			No *novo = new No(n);
			if(topo == NULL){
				topo = novo;
			}else{
				novo->prox = topo;
				topo = novo;
			}
		}
		
		char pop(){
			No *temp;
			char popped;
			if(topo != NULL){
				temp = topo;
				popped = temp->nome;
				topo = topo->prox;
				free(temp);
			}
			return popped;
		}
		
		int isEmpty(){
			return (topo == NULL);
		}
	
	// Nao aconselhavel para PILHAS	
	//	void showAll(){
	//		No *atual = topo;
	//		while(atual != NULL){
	//			cout << "End: " << &atual << " // Valor: " << atual->nome << " // Prox: " << atual->prox << endl;
	//			atual = atual->prox;
	//		}
	//	}
};

int main(){
	Pilha *p=new Pilha();
	p->push('A');
	p->push('B');
	p->push('C');
//	p->showAll();
	

	
}

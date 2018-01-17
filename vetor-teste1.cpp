#include <iostream>
#include <stdio.h>

using namespace std;


int vetor[30];
int ultimo=0;

// adiciona um elemento no final do vetor
void append(int e){
	vetor[ultimo] = e;
	ultimo++;
}

// remove a ultima posição do vetor e a retorna;
int pop(){
	ultimo--;
	return vetor[ultimo+1];	
}

// percorre e imprime os valores de um vetor
void percorre(){
	for(int i = 0; i < ultimo ; i++)
	{
		  cout << vetor[i] << endl;	   	
	}
}

// insere um valor em determinada posição
void inserir(int p, int valor ){
	for(int i = ultimo; i >= p ; i--)
	{
		vetor[i+1] =  vetor[i];
	}
	vetor[p] = valor;
	ultimo++;
}

// retorna o tamanho do vetor;
int len(){
	return ultimo + 1;
}

//conta quantas vezes acontece uma orcorrencia de um valor;
int count(int valor){
	int cont = 0;
	for(int i = 0; i < len()-1 ; i++)
	{
		if(vetor[i]==valor){
			cont++;
		}
	}
	
	return cont;

	
}

//retorna o indice do valor passado como parametro;
int index(int valor){
   for(int i = 0; i < len()-1 ; i++)
	{
		if(vetor[i]==valor){
			return i;
		}
	}
	return -1;
}

//remove um item do vetor;
void remove(int valor){
	int pos = index(valor);
	for(int i = pos; i < ultimo; i++)
	{
		vetor[i] =  vetor[i+1];
	}
	ultimo--;
}


int main(){ 
 
  append(20);
  append(30); 
  
  inserir(1,35); 
  percorre();
  
  remove(20); 
  percorre();

 
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class No
{
	public:
		int mat;
		No *anterior;
		No(int m)
		{
			mat = m;
			anterior = NULL;
		}
};

class Pilha
{
	public:
		No *topo;
		Pilha()
		{
			topo = NULL;
		}
		
		void push(int n)
		{
			No *novo = new No(n);
			if(topo == NULL)
			{
				topo = novo;
			}else
			{
				novo->anterior = topo;
				topo = novo;
			}
		}
		
		void mostar()
		{
			No *atual = topo;
			while(atual != NULL)
			{				
				cout << atual << endl;
				atual = topo->anterior;
			}
		}
		
		void pop()
		{
			topo = topo->anterior;
			
		}
};

int main(int argc, char** argv)
{
	Pilha *p1 = new Pilha();
	p1->push(1);
	p1->push(2);
	p1->pop();
	p1->mostar();
	return 0;
}
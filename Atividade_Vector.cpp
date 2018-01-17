
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

class TAluno
{
    private:
            int matricula;
            string nome;
            int idade;
    public:
            TAluno(int m, string n, int i){
                matricula = m;
                nome = n;
                idade = i;
            }
            
            int getMatricula(){
                return matricula;
            }
            
            string getNome(){
                return nome;
            }
            
            int getIdade(){
                return idade;
            }
};


class TLista
{
    private:
            vector <TAluno> alunos;
    public:
            void inserir(int mat, string nome, int idade){
                TAluno a1(mat,nome,idade);
                alunos.push_back(a1);
               
            }
            
            void inserirOrdenado(int mat, string nome, int idade){
                inserir(mat, nome, idade);
                TAluno *aux;
                for(int i = 0; i < (alunos.size() - 1); i++){
                    for(int j = i+1; j < alunos.size(); j++){
                        if(alunos.at(i).getMatricula() > alunos.at(j).getMatricula()){
                            aux = alunos.at(j);
                            alunos[j] = alunos[i];
                            alunos[i] = aux;
                            alunos.so
                        }
                    }
                }
            }
};

int main()
{
    cout<<"Hello World";

    return 0;
}




#include<iostream>
using namespace std;

struct Aluno {
 string nome;
 int matricula;
 float n1, n2, n3;
};

int main(){
    int num = 3;
    Aluno lista[num];
    for(int i = 0; i < num; i++){
    cout << "Insira o nome do aluno N"<< i+1 << ":" << endl;
    cin >> lista[i].nome;
    cout << "Insira a matricula do aluno N"<< i+1 << ":" << endl;
    cin >> lista[i].matricula;
    cout << "Insira as 3 notas do aluno N"<< i+1 << ":" << endl;
    cin >> lista[i].n1 >> lista[i].n2 >> lista[i].n3;
    }
    float media;
    for(int i = 0; i < num; i++){
        media = (lista[i].n1+lista[i].n2+lista[i].n3)/3;
        cout << endl << "Aluno: "<< lista[i].nome << endl << endl << "Matricula: " << lista[i].matricula << endl << endl << "Media: " << media << endl;
    }
}

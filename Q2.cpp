#include<iostream>
#include<math.h>
#include<limits>
using namespace std;

struct Ponto{
    float X;
    float Y;
};

float distancia(Ponto, Ponto);

int main(){
    int numeroPontos = 5;
    Ponto o;
    o.X = 0;
    o.Y = 0;
    Ponto ponto[5];
    int menorDistP;
    float menorDistV = INT_MAX;
    float aux;
    for(int i = 0; i < numeroPontos; i++){
        cout << "Insira as coordenadas do ponto N" << i+1 << " :" << endl;
        cin >> ponto[i].X >> ponto[i].Y;
    }
    for(int i = 0; i < numeroPontos; i++){
        aux = distancia( o, ponto[i]);
        if(aux<menorDistV){
            menorDistP = i+1;
            menorDistV = aux;
        }
    }
    cout << "A distancia de um ponto ateh a origem eh de " << menorDistV << " e o seu ponto eh o N" << menorDistP << endl;
}
float distancia(Ponto p1, Ponto p2){
    return sqrt(pow(p1.X-p2.X,2)+pow(p1.Y-p2.Y,2));
}

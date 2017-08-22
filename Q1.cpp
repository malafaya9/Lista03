#include<iostream>
#include<math.h>
using namespace std;

struct Ponto{
    float X;
    float Y;
};

float distancia(Ponto, Ponto);

int main(){
    Ponto p1, p2;
    cout << "Insira as coordenadas do primeiro ponto:" << endl;
    cin >> p1.X >> p1.Y;
    cout << "Insira as coordenadas do segundo ponto:" << endl;
    cin >> p2.X >> p2.Y;
    cout << "A distancia entre os pontos eh de " << distancia(p1, p2) << endl;
}
float distancia(Ponto p1, Ponto p2){
    return sqrt(pow(p1.X-p2.X,2)+pow(p1.Y-p2.Y,2));
}

#include<iostream>
using namespace std;

struct Cliente{
    string nome;
    string cpf;
};

struct Conta {
    Cliente titular;
    float saldo;
    int numeroConta;
};

Cliente gerarCliente(string nome, string cpf){
    Cliente c;
    c.nome = nome;
    c.cpf = cpf;
    return c;
}

Conta gerarConta(Cliente cliente, int numero){
    Conta c;
    c.numeroConta = numero;
    c.saldo = 0;
    c.titular = cliente;
    return c;
}

void saque(Conta* conta, float Valor){
    if(Valor>0&&Valor<=(*conta).saldo){
        (*conta).saldo -= Valor;
    }
}

void deposito(Conta* conta, float Valor){
    if(Valor>0){
        (*conta).saldo += Valor;
    }
}

int main(){
    int tamanho = 3;
    Conta db[3];
    db[0] = gerarConta(gerarCliente("Antonio Paz", "042.348.618-90"),1);
    db[1] = gerarConta(gerarCliente("Antony Peace", "023.345.978-25"),2);
    db[2] = gerarConta(gerarCliente("Anton Van", "052.375.678-43"),3);
    int selectedIndex, op;
    float valor;
    do{
        cout << "Insira o numero da conta(0 - Para sair.):";
        cin >> selectedIndex;
        if(selectedIndex!=0){
            selectedIndex--;
            cout << "Numero da conta: " << db[selectedIndex].numeroConta << endl
             << "Nome: " << db[selectedIndex].titular.nome << endl
              << "CPF: " << db[selectedIndex].titular.cpf << endl;
            do{
                cout << "\t0 - Sair" << endl << "\t1 - Saldo" << endl << "\t2 - Saque" << endl << "\t3 - Deposito" << endl << "Selecione um: ";
                cin >> op;
                if(op!=0){
                    if(op==1){
                        cout << "Saldo: " << db[selectedIndex].saldo << endl;
                    }else if(op==2){
                        cout << "Insira um valor:";
                        cin >> valor;
                        saque(&db[selectedIndex], valor);
                    }else if(op==3){
                        cout << "Insira um valor:";
                        cin >> valor;
                        deposito(&db[selectedIndex], valor);
                    }
                }
            }while(op!=0);
        selectedIndex++;
        }
    }while(selectedIndex!=0);
    return 0;
}

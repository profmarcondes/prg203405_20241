#include <iostream>

using namespace std;


class Carro {
    private:
        float capacidade_tanque;
        float consumo;
        float distancia;
        float quantidade_combustivel;

    public:
        Carro(float litros, float km_litros);

        void abastecer(float litros);
        void percorrer(float km);

        float combustivel() { return quantidade_combustivel; }
        float distancia_percorrida() { return distancia; }

        void print();
};

Carro::Carro(float litros, float km_litros){
    distancia = 0;
    quantidade_combustivel = 0;
    capacidade_tanque = litros;
    consumo = km_litros;
}

void Carro::abastecer(float litros){
    float tmp = quantidade_combustivel + litros;

    if ( litros >= 0 ) {
        if ( tmp <= capacidade_tanque ) {
            quantidade_combustivel = tmp;    
        } else {
            quantidade_combustivel = capacidade_tanque;
            cout << "Você jogou fora " << (capacidade_tanque - tmp);
            cout << " litros de combustível" << endl;
        }
    } else {
        cout << "Erro, você não pode tirar combustível do veículo!" << endl;
    }
}

void Carro::percorrer(float km){

    float combustivel_gasto = km / consumo;

    if ( km >= 0 ){
        if( combustivel_gasto <= quantidade_combustivel ){
            distancia += km;
            quantidade_combustivel -= combustivel_gasto;
        } else {
            cout << "Você ficou sem combustível e percorreu apenas ";
            cout << quantidade_combustivel * consumo << " km" << endl;
            distancia += quantidade_combustivel * consumo;
            quantidade_combustivel = 0;
        }
    } else {
        cout << "Não pode decrementar distancia percorrida!" << endl;
    }
}

void Carro::print(){
    cout << "Distancia percorrida = " << distancia << " km" << endl;
    cout << "Quantidade combustível = " << quantidade_combustivel << " litros" << endl;
    cout << "Capacidade do tanque = " << capacidade_tanque << " litros" << endl;
    cout << "Consumo médio = " << consumo << " km/l" << endl;
}

int main(){
    cout << "Exercício 3" << endl;

    Carro obj1(45.0, 14);
    Carro obj2(60.0, 10.0);

    obj1.abastecer(20);
    obj2.abastecer(30);

    obj1.percorrer(200);
    obj2.percorrer(350);

    obj1.print();
    obj2.print();

    return 0;
}
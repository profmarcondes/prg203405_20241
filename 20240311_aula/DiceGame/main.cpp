#include <iostream>
#include <cstdlib>

using namespace std;

class Dado {
    int valorFace;

public:
    Dado(){
        srand(time(NULL));
        lanca();
    }
    int getValorFace() { return valorFace; }
    void lanca() { valorFace = rand() % 6 + 1; };
};

class JogoDeDado {
    Dado d1;
    Dado d2;

public:
    bool play();
};

bool JogoDeDado::play(){
    d1.lanca();
    d2.lanca();

    int fv1 = d1.getValorFace();
    int fv2 = d2.getValorFace();

    cout << "D1- " << fv1 << " D2- " << fv2 << endl;
    cout << "Resultado = " << fv1 + fv2 << endl;

    return ((fv1 + fv2) == 7);
}


int main()
{
    cout << "Jogo de Dados" << endl;

    JogoDeDado game;

    int wins = 0;

    for(int i = 1; i < 1001; i++) {
        cout << "Jogada " << i << endl;
        if(game.play()){
            wins++;
            cout << "Ganhou !" << endl;
        } else {
            cout << "Perdeu !" << endl;
        }
    }

    cout << "Porcentagem de vitórias " << wins/1000.0 << endl;

    return 0;
}

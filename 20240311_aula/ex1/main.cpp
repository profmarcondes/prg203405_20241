#include <iostream>

using namespace std;

class Pessoa {
private:
    string nome;
    int    idade;
    float  altura;

public:
    void setNome(string p1) { nome = p1; }

    string getNome() { return nome; }

    void setIdade(int p1) { 
        if (p1 > idade){
            idade = p1;
        }    
    }
    int getIdade() { return idade; }


    void setAltura(float p1) { altura = p1; }
    float getAltura() { return altura; }

    void print(){
        cout << nome << " tem " << idade << " anos e ";
        cout << altura << " metros de altura." << endl;
    }
};

int main(){
    cout << "Exercício 01" << endl;

    Pessoa hugo;

    hugo.setNome("Hugo Marcondes");
    hugo.setIdade(44);
    hugo.setAltura(1.91);

    hugo.print();

}

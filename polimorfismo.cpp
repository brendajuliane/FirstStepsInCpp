#include <iostream>
using namespace std;

class Disciplina {
    public:
        void printName() {
            cout << "Disciplina geral" << endl;
        }
};
class POO: public Disciplina {
    public:
        void printName() {
            cout << "Disciplina de Programação Orientada a Objetos" << endl;
        }
};
class BD: public Disciplina {
    public:
        void printName() {
            cout << "Disciplina de Banco de Dados" << endl;
        }   
};
int main() {
    Disciplina disciplina;
    POO poo;
    BD bd; 

    disciplina.printName();
    poo.printName();
    bd.printName();
}
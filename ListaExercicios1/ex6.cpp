#include <iostream>
using namespace std;

void menu();

class Tabuada1 {
    private:
        int n;
    public:
        Tabuada1(int n): n(n) {
        }
        Tabuada1() {
            Tabuada1(1);
        }
        int getN() {
        	return this->n;
        }
        void setN(int n) {
        	this->n = n;
        }
        void add() {
            int i=0, j=1;   
            for(i=0; i<10; i++) {
                cout << j << " + " << this->n << " = " << j+this->n << endl;
                j++;
            }
        }
        void sub() {
            int i=0, j=1;   
            for(i=0; i<10; i++) {
                cout << j << " - " << this->n << " = " << j-this->n << endl;
                j++;
            }
        }
        void mult() {
            int i=0, j=1;   
            for(i=0; i<10; i++) {
                cout << j << " x " << this->n << " = " << j*this->n << endl;
                j++;
            }
        }
        void div() {
            int i=0, j=1;   
            if(this->n != 0) { 
                for(i=0; i<10; i++) {
                    cout << j << " / " << this->n << " = " << j/this->n << endl;
                    j++;
                }
            } else {
                cout << "Erro na operação de divisão (divisor é igual a 0)" << endl;
            }
        }
};
int main() {
    Tabuada1 * tabuada = new Tabuada1();
    int i=0, n;

    cout << "Digite o número correspondente à tabuada que você quer: " << endl;
    cin >> n;
    tabuada->setN(n);

    menu();
    cout << "Escolha a opção desejada" << endl;
    cin >> i;
    switch(i) {
        case 1: 
            tabuada->add();
            break;
        case 2:
            tabuada->sub();
            break;
        case 3: 
            tabuada->mult();
            break;
        case 4: 
            tabuada->div();
            break;
        case 5: 
            tabuada->add();
            cout << "\n";
            tabuada->sub();
            cout << "\n";
            tabuada->mult();
            cout << "\n";
            tabuada->div();
            cout << "\n";
            break;
        default:
            cout << "Opção inválida! {" << i << "} Não é uma entrada válida"<< endl;
    }
    delete(tabuada);
};
void menu() {
    cout << "---------- Tabuadas ----------" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtração" << endl;
    cout << "3 - Multiplicação" << endl;
    cout << "4 - Divisão" << endl;
    cout << "5 - Todas\n" << endl;
};
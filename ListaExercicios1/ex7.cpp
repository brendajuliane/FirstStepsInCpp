#include <iostream>
using namespace std;

void menu();

enum OPERACAO {SOMA, SUB, MULT, DIV};

class Tabuada2 {
    private:
        int n;
        OPERACAO op;
    public:
        Tabuada2(int n, OPERACAO op): n(n), op(op) {
        }
        Tabuada2() {
            this->n = 1;
            this->op = SOMA;
        }
        int getN() {
        	return this->n;
        }
        void setN(int n) {
        	this->n = n;
        }
        OPERACAO getOp() {
        	return this->op;
        }
        void setOp(OPERACAO op) {
        	this->op = op;
        }
        void printTabuada() {
            cout << "\n";
            switch(this->op) {
                case SOMA:
                    add();
                    break;
                case SUB:
                    sub();
                    break;
                case DIV:
                    div();
                    break;
                case MULT:
                    mult();
                    break;
            }
        }
    private:
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
    Tabuada2 * tabuada = new Tabuada2();
    int n;

    cout << "Digite o número correspondente à tabuada que você quer: " << endl;
    cin >> n;
    tabuada->setN(n);

    cout << "Insira o número correspondente à operação que você quer: \n" << endl;
    menu();
    cin >> n;

    switch (n) {
        case 0:
            tabuada->setOp(SOMA); 
            break;
        case 1:
            tabuada->setOp(SUB); 
            break;
        case 2:
            tabuada->setOp(MULT); 
            break;
        case 3:
            tabuada->setOp(DIV); 
            break;
        default:
            cout << "Opção para operação inválida\n\n";  
            break;
    }
    tabuada->printTabuada();
    delete(tabuada);
};
void menu() {
    cout << "---------- Tabuadas ----------" << endl;
    cout << "0 - Soma" << endl;
    cout << "1 - Subtração" << endl;
    cout << "2 - Multiplicação" << endl;
    cout << "3 - Divisão" << endl;
};
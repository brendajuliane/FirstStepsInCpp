#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        string CPF;
    
    public:
        Person(string name, string CPF): //Construtor = método com o mesmo nome da classe sem parâmetros que roda quando o compilador cria o objeto
        name(name), CPF(CPF) {           //Esse em específico me impede de criar um objeto sem os parâmetros definidos           
        }                                
        string getName() {
        	return this->name;
        }
        void setName(string name) {
        	this->name = name;
        }
        string getCPF() {
        	return this->CPF;
        }
        void setCPF(string CPF) {
        	this->CPF = CPF;
        }
};

int main() {
    Person person("nome", "numero"); //apenas para inicializar
    string name, number;

    cout << "Digite seu nome: " << endl;
    cin >> name;
    person.setName(name);

    cout << "Digite seu CPF: " << endl;
    cin >> number;
    person.setCPF(number);

    cout << "Obrigado, " << person.getName() << "! Seu CPF (" << person.getCPF() <<") foi registrado com sucesso!" << endl;
}
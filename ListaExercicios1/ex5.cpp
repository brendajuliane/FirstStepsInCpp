#include <iostream>
using namespace std;

class Book {
    private:
        string title;
    public:
        Book(string title): title(title) { //construtor parametrizado
        }
        Book() { //construtor padrão
            this->title = "Unicamp";
        }
        string getTitle() {
        	return this->title;
        }
        void setTitle(string title) {
        	this->title = title;
        }
};
int main() {
    Book * p = new Book;
    string title;

    cout << "Digite o título de um livro a ser cadastrado: ";
    getline(cin, title);
    
    p->setTitle(title);
    cout << "O livro foi cadastrado com o título \"" << p->getTitle() << "\"." << endl;
}
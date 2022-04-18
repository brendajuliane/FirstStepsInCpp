#include <iostream>
using namespace std;

class Book {
    private:
        int pages;
    public:
        int getPages() {
        	return this->pages;
        }
        void setPages(int pages) {
        	this->pages = pages;
        }
};

int main() {
    Book book;
    int n;

    cout << "Digite o número de páginas de um livro a ser cadastrado: ";
    cin >> n;
    
    book.setPages(n);
    cout << "O livro foi cadastrado com " << book.getPages() << " páginas." << endl;
}
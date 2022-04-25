#include <iostream>
using namespace std;

template <typename T> void print(T variavel) {
    cout << variavel << endl;
}

int main() {
    print<int>(10); //parâmetro do tipo int
    print<float>(74.3); //parâmetro do tipo float
    print<string>("Programação Genérica"); //parâmetro do tipo string
    return 0;
}
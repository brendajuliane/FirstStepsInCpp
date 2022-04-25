#include <iostream>
#include <vector> 
#include <iterator>
using namespace std;

int main () {
    vector<int> containerVector; //declaração do vetor
    int number;

    cout << "Insira alguns números (insira 0 para terminar):\n"; // Fluxo (Stream) de saída

    do {
        cin >> number;
        containerVector.push_back(number); //push_back = adiciona um novo elemento ao final do vetor
    } while(number);

    cout << "\nO vetor guardou " << int(containerVector.size()) << " números.\n";
    cout << "No vetor estão contidos os números: ";
    for (auto it = containerVector.begin(); it != containerVector.end(); it++) { //uso de iterators 
        cout << *it << " ";
    }
    cout << "\n\n";
}
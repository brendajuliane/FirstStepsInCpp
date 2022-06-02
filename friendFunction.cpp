#include <iostream>
using namespace std;

class Car {
    private:
        int velocity = 0;
    public:
        int getVelocity() {
	        return this->velocity;
        }
        void setVelocity(int velocity) {
	        this->velocity = velocity;
        }
    friend void changeVelocity(int n, Car &); //declaração da função amiga
};

int main() {
    Car car;
    
    changeVelocity(10, car); //chamada da função
    cout << car.getVelocity() << endl;
}

void changeVelocity(int n, Car& car) {
    car.velocity = n; //alteração direta do atributo "velocity"
}


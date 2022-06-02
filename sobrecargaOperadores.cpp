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
    friend Car operator+ (Car&, Car&); //prototipaçaõ da função amiga
};
int main() {
    Car car1;
    Car car2;
    Car car3;

    car1.setVelocity(10);
    car2.setVelocity(29);
    car3 = car1 + car2;

    cout << car3.getVelocity() << endl;
}
//definição função para sobrecarga de operadores
Car operator+ (Car& car1, Car& car2){ 
    Car car3;
    car3.velocity = car1.velocity + car2.velocity;
    return car3;
}

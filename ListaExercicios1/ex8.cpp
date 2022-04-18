#include <iostream>
using namespace std;

void tipoForno();

class Forno {
    private:
        float temperatura;
    public:
        Forno(float t): temperatura(t) {
        }
        Forno() {
            this->temperatura = 0.0;
        }
        float getTemperatura() {
        	return this->temperatura;
        }
        void setTemperatura(float temperatura) {
        	if((temperatura >= 0.0) && (temperatura <= 280)) {
                this->temperatura = temperatura;
            } else {
                cout << "Erro ao setar temperatura! O número não pode ser negativo nem maior que 280" << endl;
            }
        }   
        void getStatus() {
            cout << "Forno cozinhando a " << this->temperatura << " graus\n" << endl;
        }
};
class FornoEletrico : public Forno{
    private:
        int voltagem;
    public:
        FornoEletrico(float t, int v): voltagem(v) {
            this->setTemperatura(t);
        }
        FornoEletrico() {
            FornoEletrico(0.0, 110);
        }
        float getVoltagem() {
        	return this->voltagem;
        }
        void setVoltagem(int voltagem) {
            this->voltagem = voltagem;
        }   
        void getStatus() {
            cout << "Forno elétrico cozinhando a " << this->getTemperatura() << " graus\n" << endl;
        }
};
class FornoGas : public Forno{
    private:
        int volume;
    public:
        FornoGas(float t, int v): volume(v) {
            this->setTemperatura(t);
        }
        FornoGas() {
            FornoGas(0.0, 0);
        }
        float getVolume() {
        	return this->volume;
        }
        void setVolume(int volume) {
            this->volume = volume;
        }   
        void getStatus() {
            cout << "Forno a gás cozinhando a " << this->getTemperatura() << " graus\n" << endl;
        }
};
class FornoLenha : public Forno{
    private:
        int qntLenha;
    public:
        FornoLenha(float t, int l): qntLenha(l) {
            this->setTemperatura(t);
        }
        FornoLenha() {
            FornoLenha(0.0, 0);
        }
        float getQntLenha() {
        	return this->qntLenha;
        }
        void setQntLenha(int qntLenha) {
            this->qntLenha = qntLenha;
        }   
        void getStatus() {
            cout << "Forno a lenha cozinhando a " << this->getTemperatura() << " graus\n" << endl;
        }
};
int main() {
    FornoGas * fornoG = new FornoGas();
    FornoEletrico * fornoE = new FornoEletrico();
    FornoLenha * fornoL = new FornoLenha();
    int n;
    float temperatura;

    cout << "Selecione o seu tipo de forno\n" << endl;
    tipoForno();
    cin >> n;

    switch(n) {
        case 1:
            cout << "A que temperatura seu forno está operando?" << endl;
            cin >> temperatura;
            fornoE->setTemperatura(temperatura);
            fornoE->getStatus();
            break;
        case 2:
            cout << "A que temperatura seu forno está operando?" << endl;
            cin >> temperatura;
            fornoG->setTemperatura(temperatura);
            fornoG->getStatus();
            break;
        case 3:
            cout << "A que temperatura seu forno está operando?" << endl;
            cin >> temperatura;
            fornoG->setTemperatura(temperatura);
            fornoG->getStatus();
            break;
    }
    delete(fornoE);
    delete(fornoG);
    delete(fornoL);
};
void tipoForno() {
    cout << "---------Tipos de Forno---------" << endl;
    cout << "1 - Elétrico" << endl;
    cout << "2 - A gás" << endl;
    cout << "3 - A lenha" << endl;
}
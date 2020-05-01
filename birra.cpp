#include <iostream>
using namespace std;

int main() {
    int averias;
    int Jornada:
    cout <<"cuantas averias llevas:";
    cin >> averias;
    if (averias < 5) {
        cout << "Aun no." << endl;
        cout << "Sigue currando" << endl;
    }
    else {
        cout << "Felicidades!" << endl;
        cout << "Antes de tomarte una birra, Has terminado tu jornada??" << endl;
    }
    	cout << "Que hora es:";
    	cin >> Jornada;
    if (Jornada < 1700) {
    	cout << "Aun no has terminado tu Jornada" endl;
    	cout << "Llama y pide Faena" endl;
    else {
	cout << "Genial, ya terminaste tu Jornada" endl;
	cout << "A POR LA BIRRA" endl;
    }
 return 0;
}

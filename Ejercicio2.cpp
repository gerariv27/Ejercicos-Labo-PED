#include <iostream>

using namespace std;

void divide(int a, int b, int *cociente, int *residuo){
    cout << a << "/" << b << endl;

    *cociente = a / b;
    *residuo = a % b;



}


int main(){
    int a, b, cociente, residuo;

    cout << "Ingrese a: ";
    cin >> a;

    cout << "Ingrese b: ";
    cin >> b;

    cout << "Resultado" << endl;
    divide(a, b, &cociente, &residuo);
    cout << "Cociente: " << cociente << endl;
    cout << "Residuo: " << residuo << endl;


    return 0;
}
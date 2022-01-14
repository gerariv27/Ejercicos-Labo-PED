#include <iostream>

using namespace std;

struct Complex {
    int real, imaginary;

};

Complex addNumbers(Complex c1, Complex c2){
    Complex result;

    result.real= c1.real  + c2.real;
    result.imaginary= c1.imaginary  + c2.imaginary;

    return result;
}

int main(){
    Complex c1, c2, result;

    cout << "Ingrese Numero complejo: " << endl << "Real: ";
    cin >> c1.real;
    cout << "Imaginario: ";
    cin >> c1.imaginary;

    cout << "Ingrese el segundo complejo: " << endl << "Real: ";
    cin >> c2.real;
    cout << "Imaginario: ";
    cin >> c2.imaginary;

    result = addNumbers (c1, c2);

    cout << "Resultado: " << result.real << "+" << result.imaginary << "i" << endl;

    return 0;
}

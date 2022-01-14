#include <iostream>

using namespace std;

int main() {
    int lettersQnt = 5;
    char letters[]= {'a', 'b','c', 'd', 'e'};
    char *pointer;

    pointer = letters;

cout << "NORMAL" << endl;
for (int i = 0; i < lettersQnt; i++){
    cout<< "Elemento" << i+1 << ": " << *(pointer + i)<< endl;
}

cout << "REVERSA" << endl;
for (int i = lettersQnt; i <= 0; i++){
    cout<< "Elemento" << i+1 << ": " << *(pointer + i)<< endl;
}

    return 0;

}
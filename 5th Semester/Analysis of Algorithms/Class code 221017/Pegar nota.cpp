#include <iostream>

using namespace std;

int main() {
    double np1, np2, media;
    cout << "Digite a nota da NP1: " << ends;
    cin >> np1;
    cout << "Digite a nota da NP2: " << ends;
    cin >> np2;
    media = (np1 + np2) / 2;
    if (media >= 5) {
        cout << "Aprovado, parabéns" << endl;
    } else {
        cout << "Reprovou, estude mais." << endl;
    }
    return 0;
}
// My first C++ program
#include <iostream>

using namespace std;

class MinhaClasse {
    public: 
    MinhaClasse();
    ~MinhaClasse();
};

MinhaClasse::MinhaClasse() {
    cout << endl << "Executando o construtor." << endl;
}

MinhaClasse::~MinhaClasse() {
    cout << endl << "Executando o destruidor." << endl;
}

int main() {
    MinhaClasse *objeto;
    objeto = new MinhaClasse();
    delete objeto;
    return 0;
}
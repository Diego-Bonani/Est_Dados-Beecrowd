#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> separarStringPorEspaco(const string& str) {
    vector<string> partes;
    stringstream ss(str);
    string palavra;

    while (ss >> palavra) {
        partes.push_back(palavra);
    }

    return partes;
}

void selectionSortDecrescente(vector<string>& partes) {
    int n = partes.size();
    for (int i = 0; i < n - 1; i++) {
        int maiorIndice = i;
        for (int j = i + 1; j < n; j++) {
            if (partes[j].size() > partes[maiorIndice].size()) { // Compara pelo tamanho em ordem decrescente
                maiorIndice = j;
            }
        }
        if (maiorIndice != i) {
            swap(partes[i], partes[maiorIndice]);
        }
    }
}

int main() {
    string input;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, input);
        vector<string> resultado = separarStringPorEspaco(input);
    
        // Ordenar as partes pelo tamanho em ordem decrescente usando Selection Sort
        selectionSortDecrescente(resultado);
    
        for (const string& parte : resultado) {
            cout << parte << " ";
        }
        cout << endl;
    }

    return 0;
}

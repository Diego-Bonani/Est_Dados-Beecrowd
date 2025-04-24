#include <iostream>

using namespace std;

void bubbleSortCrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}
 
int main() {
 
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int contador_par = 0;
    int contador_impar = 0;
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            contador_par += 1; 
        }
        else{
            contador_impar += 1;
        }
    }
    int par[contador_par];
    int impar[contador_impar];
    int k, j = 0;
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            par[j] = array[i];
            j++
        }
        else{
            impar[k] = array[i];
            k++;
        }
    }
    bubbleSortCrescente(par, contador_par);
    bubbleSortDecrescente(impar, contador_impar);
    
    for(int i = 0; i < contador_par; i++){
        cout << par[i] << endl;
    }
    for(int i = 0; i < contador_impar; i++){
        cout << impar[i] << endl;
    }
    
 
    return 0;
}

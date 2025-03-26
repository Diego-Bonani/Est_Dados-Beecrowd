#include <iostream>
#include <string>

using namespace std;
 
int main() {
 
    int n;
    
    while(cin >> n){
        string aux;
        string codigos[n];
        int min;
        for(int i = 0; i < n; i++){
            cin >> codigos[i];
        }
        for(int k = 0; k < 4; k++){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if (codigos[j][k] > codigos[i][k]){
                        aux = codigos[i];
                        codigos[i] = codigos[min];
                        codigos[min] = aux;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << codigos[i] << endl;
        }
    }
    
 
    return 0;
}

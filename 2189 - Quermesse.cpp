#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,teste=1;

    cin >> n;

    while (n != 0){
        vector<int> vet;
        for (int i=0;i<n;i++){
            cin >> m;
            vet.push_back(m);
        }
        for (int i=0;i<n;i++){
            if (vet[i] == i+1){
                cout << "Teste " << teste << "\n";
                cout << vet[i] << "\n\n";
                break;
            }
        }
        teste++;
        cin >> n;
    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,v,x,y,teste=1;
    vector<int> vet;
    cin >> a >> v;
    while(a!=0||v!=0){
        vector<int> vet;
        int pos=0;
        for (int i=0; i<=a; i++){
            vet.push_back(0);
        }
        for (int i=0; i<v; i++){
            cin >> x >> y;
            vet[x]++;
            vet[y]++;
        }

        for (int i=1; i<=a; i++){
            if(vet[i]>pos){
                pos=vet[i];
            }
        }
        cout << "Teste " << teste++ << "\n";

        for(int i=1;i<=a;i++){
            if(vet[i]==pos){
                cout << i << " ";
            }
        }
        cout << "\n\n";
        cin >> a >> v;
    }
    return 0;
}
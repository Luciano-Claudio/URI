#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,pos=0;
    vector<int> num;
    cin >> n;

    for (int i=0;i<n;i++){
        cin >> a;
        num.push_back(a);
    }
    int menor = num[0];

    for (int i=1;i<n;i++){
        if (menor>num[i]){
            menor = num[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << pos << "\n";
    return 0;
}
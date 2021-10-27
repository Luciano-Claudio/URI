#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, n, x, soma;
    cin >> m >> n;

    while(m>0 && n>0){
        soma=0;
        if (m > n){
            x = m;
            m = n;
            n = x;
        }
        for (int i=m;i<=n;i++){
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << "\n";
        cin >> m >> n;
    }

    return 0;
}
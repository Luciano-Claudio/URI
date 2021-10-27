#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, maior=0, pos=0;

    for (int i=1;i<=100;i++){
        cin >> n;
        if (n > maior){
            maior = n;
            pos = i;
        }
    }
    cout << maior << "\n";
    cout << pos << "\n";

    return 0;
}
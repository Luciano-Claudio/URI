#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x,soma=0;

    cin >> n;

    for (int i=0;i<n;i++){
        cin >> x;
        if (x!=1){
            soma++;
        }
    }
    cout << soma << "\n";

    return 0;
}
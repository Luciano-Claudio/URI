#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, fatorial;
    cin >> n;

    fatorial = n;
    for (int i=n-1;i>=1;i--){
        fatorial*=n-i;
    }
    cout << fatorial << "\n";

    return 0;
}
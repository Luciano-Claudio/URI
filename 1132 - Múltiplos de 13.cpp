#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, x, soma=0;
    cin >> a;
    cin >> b;

    if (a > b){
        x = a;
        a = b;
        b = x;
    }

    for (int i=a;i<=b;i++){
        if (i%13!=0){
            soma+=i;
        }
    }
    cout << soma << "\n";
    return 0;
}
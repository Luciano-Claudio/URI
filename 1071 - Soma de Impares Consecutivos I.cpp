#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, soma=0;
    cin >> a;
    cin >> b;

    if (a > b){
        c = a;
        a = b;
        b = c;
    }
    for (int i=a+1;i<b;i++){
        if (i%2!=0){
            soma += i;
        }
    }
    cout << soma << "\n";

    return 0;
}
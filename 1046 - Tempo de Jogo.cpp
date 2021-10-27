#include <bits/stdc++.h>

using namespace std;


int main() {

    int a, b, temp;
    cin >> a >> b;

    if (a == b ){
        temp = 24;
    }
    else if (a < b){
        temp = b - a;
    }
    else if (a > b){
        temp = 24 - (a - b);
    }
    cout << "O JOGO DUROU " << temp << " HORA(S)\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;


int main() {

    int h1, h2, m1, m2, hr, minu;
    cin >> h1 >> m1 >> h2 >> m2;

    hr = h2 - h1;
    minu = m2 - m1;

    if (hr <= 0 && minu <= 0){
        hr = hr + 24;
    }
    if (minu < 0){
        minu = minu + 60;
        hr--;
    }

    cout << "O JOGO DUROU " << hr << " HORA(S) E " << minu << " MINUTO(S)\n";

    return 0;
}
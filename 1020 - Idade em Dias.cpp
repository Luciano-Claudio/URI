#include <bits/stdc++.h>

using namespace std;

int main() {

    int dias, anos, meses;

    cin >> dias;

    anos = dias/365;
    dias = dias%365;
    meses = dias/30;
    dias = dias%30;

    cout << anos << " ano(s)\n";
    cout << meses << " mes(es)\n";
    cout << dias << " dia(s)\n";
    return 0;
}
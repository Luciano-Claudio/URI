#include <bits/stdc++.h>

using namespace std;


int main() {

    double salario, reajuste;
    int per;
    cin >> salario;

    if (salario <= 400.00){
        reajuste = salario * 0.15;
        salario += reajuste;
        per = 15;
    }
    else if (salario > 400.00 && salario <=800.00){
        reajuste = salario * 0.12;
        salario += reajuste;
        per = 12;
    }
    else if (salario > 800.00 && salario <= 1200.00){
        reajuste = salario * 0.10;
        salario += reajuste;
        per = 10;
    }
    else if (salario > 1200.00 && salario <= 2000.00){
        reajuste = salario * 0.07;
        salario += reajuste;
        per = 7;
    }
    else if (salario > 2000.00){
        reajuste = salario * 0.04;
        salario += reajuste;
        per = 4;
    }
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario << "\n";
    cout << "Reajuste ganho: " << reajuste << "\n";
    cout << "Em percentual: " << per << " %\n";

    return 0;
}
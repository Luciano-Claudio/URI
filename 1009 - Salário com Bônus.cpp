#include <bits/stdc++.h>

using namespace std;

int main() {

    double vendas, salary, total;
    string nome;

    getline (cin, nome);
    cin >> salary;
    cin >> vendas;

    vendas = vendas*0.15;
    total = salary+vendas;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << "\n";

    return 0;
}
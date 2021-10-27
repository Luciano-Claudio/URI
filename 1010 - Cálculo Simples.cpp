#include <bits/stdc++.h>

using namespace std;

int main() {

    int cod1, cod2, num1, num2;
    double valor1, valor2, total;

    cin >> cod1 >> num1 >> valor1;
    cin >> cod2 >> num2 >> valor2;

    valor1 = valor1*num1;
    valor2 = valor2*num2;

    total = valor1+valor2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << "\n";

    return 0;
}

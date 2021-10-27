#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, hr;
    double valor, salary;

    cin >> num;
    cin >> hr;
    cin >> valor;

    salary = hr*valor;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << num << "\n";
    cout << "SALARY = U$ " << salary << "\n";

    return 0;
}
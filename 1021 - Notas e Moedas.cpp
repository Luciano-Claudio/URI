#include <bits/stdc++.h>

using namespace std;

int main() {

    double x;
    int n, i, m, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05;

    cin >> x;

    i = x;
    m = x*100;

    n100 = i/100;
    n = i%100;
    n50 = n/50;
    n = n%50;
    n20 = n/20;
    n = n%20;
    n10 = n/10;
    n = n%10;
    n5 = n/5;
    n = n%5;
    n2 = n/2;
    n = n%2;
    m1 = n/1;
    m = m%100;
    m50 = m/50;
    m = m%50;
    m25 = m/25;
    m = m%25;
    m10 = m/10;
    m = m%10;
    m05 = m/5;
    m = m%5;

    cout << "NOTAS:\n";
    cout << n100 << " nota(s) de R$ 100.00\n";
    cout << n50 << " nota(s) de R$ 50.00\n";
    cout << n20 << " nota(s) de R$ 20.00\n";
    cout << n10 << " nota(s) de R$ 10.00\n";
    cout << n5 << " nota(s) de R$ 5.00\n";
    cout << n2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << m1 << " moeda(s) de R$ 1.00\n";
    cout << m50 << " moeda(s) de R$ 0.50\n";
    cout << m25 << " moeda(s) de R$ 0.25\n";
    cout << m10 << " moeda(s) de R$ 0.10\n";
    cout << m05 << " moeda(s) de R$ 0.05\n";
    cout << m << " moeda(s) de R$ 0.01\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, n100, n50, n20, n10, n5, n2, b;

    cin >> n;

    b = n;
    n100 = n/100;
    n = n%100;
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

    cout << b << "\n";
    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n << " nota(s) de R$ 1,00\n";

    return 0;
}
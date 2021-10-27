#include <bits/stdc++.h>

using namespace std;

int main() {

    double a;

    cin >> a;

    if (a >= 0 && a <= 25.00){
        cout << "Intervalo [0,25]\n";
    }
    else if (a > 25.00 && a <= 50.00){
        cout << "Intervalo (25,50]\n";
    }
    else if (a > 50.00 && a <= 75.00){
        cout << "Intervalo (50,75]\n";
    }
    else if (a > 75.00 && a <= 100.00){
        cout << "Intervalo (75,100]\n";
    }
    else {
        cout << "Fora de intervalo\n";
    }

    return 0;
}
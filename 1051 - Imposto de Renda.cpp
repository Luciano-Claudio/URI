#include <bits/stdc++.h>

using namespace std;


int main() {

    double renda, re, imposto;

    cin >> renda;

    if(renda > 2000.00 && renda <= 3000.00){
        re = renda - 2000;
        imposto = re*0.08;
    }
    else if(renda > 3000.00 && renda <= 4500.00){
        re = renda -3000;
        imposto = re*0.18 + 80;
    }
    else if (renda > 4500.00){
        re = renda -4500;
        imposto = re*0.28 + 350;
    }

    if (renda <= 2000.00){
        cout << "Isento\n";
    }
    else{
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << "\n";
    }

    return 0;
}
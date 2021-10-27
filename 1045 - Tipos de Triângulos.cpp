#include <bits/stdc++.h>

using namespace std;


int main() {

    double x;
    vector<double> abc;

    for (int i=0; i<3; i++){
        cin >> x;
        abc.push_back(x);
    }
    sort(abc.begin(), abc.end());

    double a, b, c;
    a = abc[2];
    b = abc[1];
    c = abc[0];

    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO\n";
    }
    else if (a*a == b*b + c*c){
        cout << "TRIANGULO RETANGULO\n";
        if (a == b || b == c || a == c){
            cout << "TRIANGULO ISOSCELES\n";
        }
    }
    else if (a*a > b*b + c*c){
        cout << "TRIANGULO OBTUSANGULO\n";
        if (a == b || b == c || a == c){
            cout << "TRIANGULO ISOSCELES\n";
        }
    }
    else if (a*a < b*b + c*c){
        cout << "TRIANGULO ACUTANGULO\n";
        if (a == b && b == c){
            cout << "TRIANGULO EQUILATERO\n";
        }
        else if (a == b || b == c || a == c){
            cout << "TRIANGULO ISOSCELES\n";
        }
    }


    return 0;
}
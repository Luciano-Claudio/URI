#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c, per, area;

    cin >> a >> b >> c;

    if (abs(b-c) < a && a < b+c && abs(a-c) < b && b < a+c && abs(a-b) < c && c < a+b){
        per = a + b + c;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << per << "\n";
    }
    else {
        area = (a+b)*c/2;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << "\n";
    }

    return 0;
}
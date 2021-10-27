#include <bits/stdc++.h>

using namespace std;

int main() {

    double pi = 3.14159;
    double a, b, c, areaT, areaC, areaTR, areaQ, areaR;

    cin >> a >> b >> c;

    areaT = a*c/2;
    areaC = pi*c*c;
    areaTR = (a+b)*c/2;
    areaQ = b*b;
    areaR = a*b;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaT << "\n";
    cout << "CIRCULO: " << areaC << "\n";
    cout << "TRAPEZIO: " << areaTR << "\n";
    cout << "QUADRADO: " << areaQ << "\n";
    cout << "RETANGULO: " << areaR << "\n";

    return 0;
}
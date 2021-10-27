#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c, media;

    cin >> a;
    cin >> b;
    cin >> c;

    a = a*2;
    b = b*3;
    c = c*5;
    media = (a+b+c)/10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << "\n";

    return 0;
}
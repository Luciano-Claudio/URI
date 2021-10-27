#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, media;

    cin >> a;
    cin >> b;

    a = a*3.5;
    b = b*7.5;
    media = (a+b)/11;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << "\n";

    return 0;
}
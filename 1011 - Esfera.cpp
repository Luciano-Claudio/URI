#include <bits/stdc++.h>

using namespace std;

int main() {

    const double pi = 3.1415926535897;
    double r, volume;

    cin >> r;

    volume = (4/3.0)*pi*r*r*r;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << "\n";

    return 0;
}

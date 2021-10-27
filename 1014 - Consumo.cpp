#include <bits/stdc++.h>

using namespace std;

int main() {

    int km;
    double l, kml;

    cin >> km;
    cin >> l;

    kml = km/l;

    cout << fixed << setprecision(3);
    cout << kml << " km/l\n";

    return 0;
}
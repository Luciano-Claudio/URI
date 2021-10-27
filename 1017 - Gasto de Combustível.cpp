#include <bits/stdc++.h>

using namespace std;

int main() {

    int temp, kmh;
    double dist, lit;

    cin >> temp;
    cin >> kmh;

    dist = double(kmh)*temp;
    lit = dist/12;

    cout << fixed << setprecision(3);
    cout << lit << "\n";

    return 0;
}

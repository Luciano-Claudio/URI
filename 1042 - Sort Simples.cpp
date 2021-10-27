#include <bits/stdc++.h>

using namespace std;


int main() {

    double x, y, z;

    cin >> x >> y >> z;

    if (x >= y && x >= z){
        if (y >= z){
            cout << z << "\n";
            cout << y << "\n";
            cout << x << "\n";
        }
        else{
            cout << y << "\n";
            cout << z << "\n";
            cout << x << "\n";
        }
        goto fim;
    }
    else if (y > x && y >= z){
        if (x >= z){
            cout << z << "\n";
            cout << x << "\n";
            cout << y << "\n";
        }
        else{
            cout << x << "\n";
            cout << z << "\n";
            cout << y << "\n";
        }
        goto fim;
    }
    else if (z > x && z > y) {
        if (x >= y){
            cout << y << "\n";
            cout << x << "\n";
            cout << z << "\n";
        }
        else {
            cout << x << "\n";
            cout << y << "\n";
            cout << z << "\n";
        }
        goto fim;
    }
    fim:
    cout << "\n";
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";

    return 0;
}
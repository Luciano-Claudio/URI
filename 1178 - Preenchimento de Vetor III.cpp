#include <bits/stdc++.h>

using namespace std;

int main(){

    double n[100];
    double x;

    cin >> x;

    for (int i=0;i<100;i++){
        n[i]=x;
        x/=2;
    }
    for (int i=0;i<100;i++){
        cout << fixed << setprecision(4);
        cout << "N["<< i << "] = " << n[i] << "\n";
    }
    

    return 0;
}
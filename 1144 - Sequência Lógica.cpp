#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i=1;i<=n;i++){
        cout << fixed << setprecision(0);
        cout << i;
        for (int u=2;u<=3;u++){
            cout << " " << pow(i,u);
        }
        cout << "\n";
        cout << i;
        for (int u=2;u<=3;u++){
            cout << " " << pow(i,u)+1;
        }
        cout << "\n";
    }
    return 0;
}
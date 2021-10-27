#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x=0;
    cin >> n;

    for (int i=1;i<=n;i++){
        for (int u=1;u<=3;u++){
                x++;
            cout << x << " ";
        }
        x++;
        cout << "PUM\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, n=1;

    cin >> a >> b;

    do{
        cout << n;
        n++;
        for (int u=2;u<=a;u++){
            cout << " " << n;
            n++;
        }
        cout << "\n";
    }while (n<=b);

    return 0;
}
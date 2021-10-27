#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, x;
    cin >> a;
    cin >> b;

    if (a > b){
        x = a;
        a = b;
        b = x;
    }

    for (int i=a+1;i<b;i++){
        if (i%5==2 || i%5==3){
            cout << i << "\n";
        }
    }
    return 0;
}
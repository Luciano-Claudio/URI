#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double a, b, c, media;
    cin >> n;


    for (int i=1;i<=n;i++){
        cin >> a >> b >> c;
        a = a*2;
        b = b*3;
        c = c*5;
        media = (a+b+c)/10;
        cout << fixed << setprecision(1) << media << "\n";
    }

    return 0;
}
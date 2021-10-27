#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b, c, soma;
    cin >> n;
    for (int i=1;i<=n;i++){
        soma=0;
        cin >> a >> b;
        if (a > b){
            c = a;
            a = b;
            b = c;
        }
        if (a%2!=0){
            a++;
        }
        for (int x=a;x<b;x++){
            if (x%2!=0){
                soma+=x;
            }
        }
        cout << soma <<"\n";
    }

    return 0;
}
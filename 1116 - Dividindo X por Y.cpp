#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, y;
    double divisao;
    cin >> n;

    for (int i=1;i<=n;i++){
        cin >> x >> y;
        if (y==0){
            cout << "divisao impossivel\n";
        }
        else{
            divisao = double(x)/y;
            cout << fixed << setprecision(1) << divisao << "\n";
        }
    }
    return 0;
}
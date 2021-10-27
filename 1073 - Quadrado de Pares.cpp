#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, in=0, out=0;
    cin >> n;


    for (int i=1;i<=n;i++){

        if (i%2 == 0){
            cout << i << "^2 = " << i*i << "\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x[10],n;
    cin >> n;
    
    for(int i=0;i<10;i++){
        cout << "N[" << i << "] = " << n << "\n";
        n*=2;
    }

    return 0;
}
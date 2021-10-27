#include <bits/stdc++.h>

using namespace std;

int main(){

    int n[20];

    for(int i=19;i>=0;i--){
        cin >> n[i];
    }

    for(int i=0;i<20;i++){
        cout << "N[" << i << "] = " << n[i] << "\n";
    }

    return 0;
}
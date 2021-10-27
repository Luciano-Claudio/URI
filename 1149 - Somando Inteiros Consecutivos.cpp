#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, soma=0;
    cin >> a >> n;
    while(n<=0){
        cin >> n;
    }
    for (int i=0;i<n;i++){
        soma+=a;
        a++;
    }
    cout << soma << "\n";

    return 0;
}
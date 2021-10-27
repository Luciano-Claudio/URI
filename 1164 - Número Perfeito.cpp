#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x;
    cin >> n;
    
    for (int i=0;i<n;i++){
        int soma=0;
        cin >> x;
        for (int u=1;u<x;u++){
            if(x%u==0){
                soma+=u;
            }
        }
        if (soma==x){
            cout << x << " eh perfeito\n";
        }
        else{
            cout << x << " nao eh perfeito\n";
        }
    }
    

    return 0;
}
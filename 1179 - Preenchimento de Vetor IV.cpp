#include <bits/stdc++.h>

using namespace std;

int main(){

    int p=0,ip=0,a;
    int par[5],impar[5];

    for (int i=0;i<15;i++){
        cin >> a;
        if (a%2==0){
            par[p]=a;
            p++;
        }
        else{
            impar[ip]=a;
            ip++;
        }
        if (p==5){
            for (int u=0;u<5;u++){
                cout << "par[" << u << "] = " << par[u] << "\n";
                p=0;
            }
        }
        if (ip==5){
            for (int u=0;u<5;u++){
                cout << "impar[" << u << "] = " << impar[u] << "\n";
                ip=0;
            }
        }

        if(i == 14){
            for (int u=0;u<ip;u++){
                cout << "impar[" << u << "] = " << impar[u] << "\n";
            }
            for (int u=0;u<p;u++){
                cout << "par[" << u << "] = " << par[u] << "\n";
            }
        
        }
    
    }
    return 0;
}
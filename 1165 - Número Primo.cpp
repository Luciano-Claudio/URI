#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x;
    cin >> n;
    
    for (int i=0;i<n;i++){
        int a=0;
        cin >> x;
        for(int u=x-1;u>1;u--){
            if(x%u==0){
                a++;
                break;
            }
        }
        if (a==0){
            cout << x << " eh primo\n";
        }
        else{
            cout << x << " nao eh primo\n";
        }
    }
    

    return 0;
}
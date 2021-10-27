#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    do{
        cin >> n;
        if (n==0){
            break;
        }
        cout << "1";
        for (int i=2;i<=n;i++){
            cout << " " << i;
        }
        cout << "\n";
    }while(n!=0);

    return 0;
}
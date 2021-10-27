#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x,y;
    cin >> n;

    for (int i=0;i<n;i++){
        int soma=0;
        cin >> x >> y;
        if (x%2==0){
            x++;
        }
        for (int u=0;u<y;u++){
            soma+=x;
            x+=2;
        }
        cout << soma << "\n";
    }
    

    return 0;
}
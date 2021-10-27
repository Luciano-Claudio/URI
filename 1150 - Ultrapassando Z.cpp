#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, z, num=1;
    
    cin >> x;
    cin >> z;

    while (z<=x){
        cin >> z;
    }

    int soma=x;
    while(soma<=z){
        x++;
        soma+=x;
        num++;
    }

    cout << num << "\n";

    return 0;
}
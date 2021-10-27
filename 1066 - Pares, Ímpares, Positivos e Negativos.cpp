#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, par=0, impar=0, positivo=0, negativo=0;
    for (int i=0;i<5;i++){
        cin >> x;
        if (x%2==0){
            par++;
        }
        else{
            impar++;
        }
        if (x>0){
            positivo++;
        }
        else if (x < 0){
            negativo++;
        }
    }

    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << positivo << " valor(es) positivo(s)\n";
    cout << negativo << " valor(es) negativo(s)\n";

    return 0;
}
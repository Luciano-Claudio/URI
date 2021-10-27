#include <bits/stdc++.h>

using namespace std;

int main(){

    double x, soma=0, media;
    int positivo=0;
    for (int i=0;i<6;i++){
        cin >> x;
        if (x>0){
            positivo++;
            soma += x;
        }
    }
    media = soma/positivo;

    cout << positivo << " valores positivos\n";
    cout << fixed << setprecision(1) << media << "\n";

    return 0;
}
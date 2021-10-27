#include <bits/stdc++.h>

using namespace std;

int main(){

    int idade,soma=0,div=0;
    double media;

    cin >> idade;

    while(idade>=0){
        soma+=idade;
        div++;
        cin >> idade;
    }
    media = double(soma)/div;

    cout << fixed << setprecision(2);
    cout << media << "\n";

    return 0;
}
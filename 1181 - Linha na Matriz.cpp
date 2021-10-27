#include <bits/stdc++.h>

using namespace std;

int main(){
    double mat[12][12];
    char ch;
    double soma=0,media=1;
    int l;

    cin >> l;
    cin >> ch;

    for (int i=0;i<12;i++){
        for (int u=0;u<12;u++){
            cin >> mat[i][u];
        }
    }
    if (ch=='S'){
        for (int u=0;u<12;u++){
            soma+=mat[l][u];
        }
        cout << fixed << setprecision(1);
        cout << soma << "\n";
    }
    else if (ch=='M'){
        for (int u=0;u<12;u++){
            soma+=mat[l][u];
        }
        media = soma/12;
        cout << fixed << setprecision(1);
        cout << media << "\n";
    }
    return 0;
}
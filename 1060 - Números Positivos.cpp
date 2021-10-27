#include <bits/stdc++.h>

using namespace std;

int main(){

    int positivo=0;
    double x;

    for (int i=0;i<6;i++){
        cin >> x;
        if (x > 0){
            positivo++;
        }
    }
    cout << positivo << " valores positivos\n";

    return 0;
}
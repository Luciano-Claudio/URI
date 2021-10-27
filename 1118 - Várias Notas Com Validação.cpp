#include <bits/stdc++.h>

using namespace std;

int main(){

    int resp;
    double n1, n2, media;
    do{
        cin >> n1;

        while(n1<0 || n1>10){
            cout << "nota invalida\n";
            cin >> n1;
        }
        cin >> n2;

        while(n2<0 || n2>10){
            cout << "nota invalida\n";
            cin >> n2;
        }
        media = (n1+n2)/2;
        cout << fixed << setprecision(2) << "media = " << media << "\n";
        cout << "novo calculo (1-sim 2-nao)\n";
        cin >> resp;
        while(resp!=1 && resp!=2){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> resp;
        }
    }while(resp==1);

    return 0;
}
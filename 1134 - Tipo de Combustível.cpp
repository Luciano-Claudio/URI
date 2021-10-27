#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, alcool=0, gasolina=0, disel=0;
    do {
        cin >> a;
        while(a!=1 && a!=2 && a!=3 && a!=4){
            cin >> a;
        }
        switch(a){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                disel++;
                break;
        }
    }while(a!=4);

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcool << "\n";
    cout << "Gasolina: " << gasolina << "\n";
    cout << "Diesel: " << disel << "\n";
    return 0;
}
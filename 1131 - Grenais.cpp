#include <bits/stdc++.h>

using namespace std;

int main(){

    int gol_I, gol_G, inter=0, gremio=0, empate=0, grenais=0, resp;
    do {
        cin >> gol_I >> gol_G;
        if (gol_I > gol_G){
            inter++;
        }
        else if (gol_G > gol_I){
            gremio++;
        }
        else if (gol_I == gol_G){
            empate++;
        }
        grenais++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> resp;
        while(resp!=1 && resp!=2){
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> resp;
        }
        }while(resp==1);

    cout << grenais << " grenais\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << empate << "\n";
    if (inter > gremio){
        cout << "Inter venceu mais\n";
    }
    else if (gremio > inter){
        cout << "Gremio venceu mais\n";
    }
    else{
        cout << "Nao houve vencedor\n";
    }
    return 0;
}
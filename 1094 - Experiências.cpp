#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, coelhos=0, ratos=0, sapos=0, total=0;
    char tipo;
    double per_C, per_R, per_S;
    cin >> n;

    for (int i=1;i<=n;i++){
        cin >> x >> tipo;
        total +=x;
        if (tipo == 'C'){
            coelhos +=x;
        }
        else if(tipo == 'R'){
                ratos +=x;
        }
        else if(tipo == 'S'){
                sapos +=x;
        }
    }
    per_C = (double(coelhos)/total)*100;
    per_R = (double(ratos)/total)*100;
    per_S = (double(sapos)/total)*100;

    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << coelhos << "\n";
    cout << "Total de ratos: " << ratos << "\n";
    cout << "Total de sapos: " << sapos << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << per_C << " %\n";
    cout << "Percentual de ratos: " << per_R << " %\n";
    cout << "Percentual de sapos: " << per_S << " %\n";

    return 0;
}
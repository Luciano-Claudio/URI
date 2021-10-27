#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        int m,me,soma=0,a=0;
        double media,perc;
        vector<int> notas;

        cin >> m;
        
        for (int u=0;u<m;u++){
            cin >> me;
            notas.push_back(me);
        }
        for (int u=0;u<m;u++){
            soma+=notas[u];
        }
        media= double(soma)/m;

        for (int u=0;u<m;u++){
            if (notas[u]>media){
                a++;
            }
        }
        perc=(double(a)/m)*100;

        cout << fixed << setprecision(3);
        cout << perc << "%\n";

    }
    return 0;
}
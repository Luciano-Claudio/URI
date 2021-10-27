#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,pa,pb;
    double g1,g2;
    cin >> t;

    for (int i=0;i<t;i++){
        int tempo=0;
        cin >> pa >> pb >> g1 >> g2;
        while (pa<=pb){
            pb*=1+(g2/100);
            pa*=1+(g1/100);
            tempo++;
            if (tempo>100){
                break;
            }
        }
        if (tempo <= 100){
            cout << tempo << " anos.\n";
        }
        else{
            cout << "Mais de 1 seculo.\n";
        }
    }
    

    return 0;
}
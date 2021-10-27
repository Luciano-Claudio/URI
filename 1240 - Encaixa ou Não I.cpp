#include <bits/stdc++.h>

using namespace std;

int main(){

    string num1,num2;
    int n,tam1,tam2;
    bool v;

    cin >> n;

    for (int i=0;i<n;i++){
        cin >> num1 >> num2;
        tam1 = num1.size()-1;
        tam2 = num2.size()-1;
        for (int u=0;u<num2.size();u++){
            if (num2[tam2-u]==num1[tam1-u]){
                v=true;
            }
            else{
                v=false;
                break;
            }
        }
        if (v==true){
            cout << "encaixa\n";
        }
        else{
            cout << "nao encaixa\n";
        }
    }
    return 0;
}
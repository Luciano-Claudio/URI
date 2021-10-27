#include <bits/stdc++.h>

using namespace std;

int main(){

    string n,certo,inverso;
    bool valor=0;
    cin >> n;

    for (int i=0;i<n.size();i++){
        if ((n[i]== 'a') || (n[i]== 'e') || (n[i]== 'i') || (n[i]== 'o') || (n[i]== 'u')){
            certo.push_back(n[i]);
        }
    }

    for (int i=n.size()-1;i>=0;i--){
        if ((n[i]== 'a') || (n[i]== 'e') || (n[i]== 'i') || (n[i]== 'o') || (n[i]== 'u')){
            inverso.push_back(n[i]);
        }
    }

    for(int i=0;i<certo.size();i++){
        if (certo[i]!=inverso[i]){
            valor=1;
            break;
        }
    }

    if(valor==0){
        cout<<"S\n";
    }
    else{
        cout<<"N\n";
    }


    return 0;
}
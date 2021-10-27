#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string n;

    while (cin >> n){
        string nu;
        int t=0,tam;
        tam = n.size()-1;
        for (int i=tam;i>=0;i--){
            if (n[i]!= '(' && n[i]!= ')'){
                n.erase(n.begin()+i);
            }
        }
        tam = n.size();
        if (tam%2!=0){
            t=1;
            goto end;
        }
        for (int i=0;i<tam;i++){
            if (n[i]== '('){
                nu.push_back(n[i]);
                for(int u=i;u<tam;u++){
                    if(n[u]==')'){
                        nu.push_back(n[u]);
                        break;
                    }
                }
            }
        }
        if (nu.size()%2==0){
            cout << "correct" << "\n";
        }
        else{
        end:
            cout << "incorrect" << "\n";
        }
    }

    return 0;
}
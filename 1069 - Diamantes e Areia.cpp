#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int m;
    cin >> m;

    for (int j=0;j<m;j++){
        string n;
        int t=0,tam;
        cin >> n;

        tam = n.size()-1;
        for (int i=tam;i>=0;i--){
            if (n[i]!= '<' && n[i]!= '>'){
                n.erase(n.begin()+i);
            }
        }
        tam = n.size()-1;
        for (int i=tam;i>=0;i--){
            if (n[i]== '>'){
                for(int u=i;u>=0;u--){
                    if(n[u]=='<'){
                        t++;
                        n.erase(n.begin()+i);
                        n.erase(n.begin()+u);
                        tam = n.size()-1;
                        break;
                    }
                }
            }
        }
        cout << t << "\n";
    }

    return 0;
}
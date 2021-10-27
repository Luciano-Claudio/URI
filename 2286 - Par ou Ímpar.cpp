#include <bits/stdc++.h>

using namespace std;

int main(){
    string name1,name2;
    int n,a,b,teste=1;

    cin >> n;

    while(n!=0){
        cin >> name1;
        cin >> name2;
        cout << "Teste " << teste++ << "\n";
        for (int i=0; i<n;i++){
            cin >> a >> b;
            if ((a+b)%2==0){
                cout << name1 << "\n";
            }
            else{
                cout << name2 << "\n";
            }
        }
        cout << "\n";
        cin >> n;   
    }
    return 0;
}
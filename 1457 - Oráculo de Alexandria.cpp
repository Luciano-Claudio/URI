#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        long double m;
        int num,tam,u;
        string inter;
        cin >> num;
        getline(cin,inter);
        m = double(num);
        tam = inter.size();
        u = 1;
        while(1){
            if (num-tam*u <1){
                break;
            }
            m*=double(num-tam*u);
            u++;
        }
        cout << fixed << setprecision(0);
        cout << m << "\n";
    }        
    
    return 0;
}
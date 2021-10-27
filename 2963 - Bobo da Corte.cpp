#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x,a;
    vector<int> num;
    bool p=0;

    cin >> n;
    cin >> x;

    for (int i=1;i<n;i++){
        cin >> a;
        if(x<a){
            p=1;
            break;
        }
    }
    
    if (p==0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    return 0;
}
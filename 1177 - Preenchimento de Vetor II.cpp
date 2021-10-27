#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int>num;
    int t,x=0;

    cin >> t;

    while(x<1000){
        for (int i=0;i<t;i++){
            num.push_back(i);
            x++;
        }
    }
    for (int i=0;i<1000;i++){
        cout << "N["<< i <<"] = " << num[i] << "\n";
    }
}
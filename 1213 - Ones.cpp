#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n;
    cin >> n;

    while(!cin.eof()){
        unsigned long int num=1;
        int t=1;
        while (num%n!=0){
            num = (num*10 + 1)%n;
            t++;
        }
        cout << t << "\n";
        cin >> n;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<long long int> f;
    int t,n;
    long long int a=1;
    cin >> t;
    f.push_back(0);

    for (int i=1;i<=60;i++){
        f.push_back(a);
        a=f[i]+f[i-1];
    }

    for (int i=0;i<t;i++){
        cin >> n;
        cout << "Fib(" << n << ") = " << f[n] << "\n";
    }

    return 0;
}
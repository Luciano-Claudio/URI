#include <bits/stdc++.h>

using namespace std;

int main(){

    double s=0;
    int a=1;

    for (int i=1;i<=39;i+=2){
        s+=double(i)/a;
        a*=2;
    }
    cout << fixed << setprecision(2);
    cout << s << "\n";
    

    return 0;
}
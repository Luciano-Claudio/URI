#include <bits/stdc++.h>

using namespace std;

int main(){

    double i=0, j=1, k;
    do{
            k=j;
        for (int n=1;n<=3;n++){
            cout << "I=" << i << " J=" << j << "\n";
            j++;
        }
        i+=0.2;
        j = k+0.2;
    }while(i<=2);

    return 0;
}
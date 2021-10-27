#include <bits/stdc++.h>

using namespace std;

int main(){

    int i=1, j=7;
    do{
        for (int n=1;n<=3;n++){
            cout << "I=" << i << " J=" << j << "\n";
            j--;
        }
        i+=2;
        j+=5;
    }while(i<=9);

    return 0;
}
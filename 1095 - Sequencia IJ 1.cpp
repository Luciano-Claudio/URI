#include <bits/stdc++.h>

using namespace std;

int main(){

    int i=1, j=60;
    do{
        cout << "I=" << i << " J=" << j << "\n";
        i+=3;
        j-=5;
    }while(j!=-5);

    return 0;
}
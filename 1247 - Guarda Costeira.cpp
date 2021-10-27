#include <bits/stdc++.h>

using namespace std;

int main(){

    int vf,vg,d,temp;
    double hip;


    while(cin >> d >> vf >> vg){
        hip = sqrt(144 + d*d);

        if (hip/double(vg)<=12.0/double(vf)){
            cout << "S\n";
        }
        else{
            cout << "N\n";
        }
    }    
    
    return 0;
}
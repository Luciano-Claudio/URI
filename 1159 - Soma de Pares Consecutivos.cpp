#include <bits/stdc++.h>

using namespace std;

int main(){

    int x,i;
    while (cin>>x && x!=0){
        int soma=0;
        if (x%2!=0){
            x++;
            for (i=0;i<5;i++){
                soma+=x;
                x+=2;
            }
        }
        else{
            for (i=0;i<5;i++){
                soma+=x;
                x+=2;
            }
        }
    cout << soma << "\n";
    }
    

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int vit_a=0,vit_b=0;
    int a[3],b[3];
    int n;

    cin >> n;

    for (int i=0;i<n;i++){
        int ada=0,ber=0;
        cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    

        for(int i=0;i<3;i++){
            if(a[i]==13){
                a[i]=14;
            }
            if(a[i]==1){
                a[i]=100;
            }
            else if(a[i]==2){
                a[i]=200;
            }
            else if(a[i]==3){
                a[i]=300;
            }
            else if(a[i]==11){
                a[i]=13;
            }
            if(b[i]==13){
                b[i]=14;
            }
            if(b[i]==1){
                b[i]=100;
            }
            else if(b[i]==2){
                b[i]=200;
            }
            else if(b[i]==3){
                b[i]=300;
            }
            else if(b[i]==11){
                b[i]=13;
            }
        }
        for (int i=0;i<3;i++){
            if(a[i] >= b[i]){
                ada++;
            }
            else{
                ber++;
            }
        }
        if (ada>ber){
            vit_a++;
        }
        else{
            vit_b++;
        }
    }
    cout << vit_a << " " << vit_b << "\n";
    return 0;
}
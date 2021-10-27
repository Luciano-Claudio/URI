#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,teste=1;

    cin >> n;

    while (n != 0){
        int num50=0,num10=0,num5=0,num1=0;
        while (n-50 >= 0){
            num50++;
            n-=50;
        }
        while (n-10 >= 0){
            num10++;
            n-=10;
        }
        while (n-5 >= 0){
            num5++;
            n-=5;
        }
        while (n-1 >= 0){
            num1++;
            n-=1;
        }
        cout << "Teste " << teste << "\n";
        cout << num50 << " " << num10 << " " << num5 << " " << num1 << "\n\n";
        teste++;
        cin >> n;
    }
    
    return 0;
}
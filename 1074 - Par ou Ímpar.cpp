#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    cin >> n;


    for (int i=1;i<=n;i++){
        cin >> x;
        if (x == 0){
            cout << "NULL\n";
        }
        else if (x%2 == 0 && x!=0){
            if (x>0){
                cout << "EVEN POSITIVE\n";
            }
            else{
                cout << "EVEN NEGATIVE\n";
            }
        }
        else if (x%2 != 0){
            if (x>0){
                cout << "ODD POSITIVE\n";
            }
            else{
                cout << "ODD NEGATIVE\n";
            }
        }

    }

    return 0;
}
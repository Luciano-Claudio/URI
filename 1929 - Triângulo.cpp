#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    
    cin >> a >> b >> c >> d;

    if (abs(b-c) < a && a < b+c){
        cout << "S\n";
    }
    else if (abs(b-d) < a && a < b+d){
        cout << "S\n";
    }
    else if (abs(d-c) < a && a < d+c){
        cout << "S\n";
    }
    else if (abs(b-c) < d && d < b+c){
        cout << "S\n";
    }
    else if (abs(a-c) < d && d < a+c){
        cout << "S\n";
    }
    else if (abs(b-a) < d && d < b+a){
        cout << "S\n";
    }
    else {
        cout << "N\n";
    }
    
    return 0;
}
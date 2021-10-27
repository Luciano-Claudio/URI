#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, soma=1;
    cin >> n;
    vector <int> fab;

    cout << "0";
    fab.push_back(0);
    fab.push_back(1);
    for (int i=1;i<n;i++){
        cout << " " << fab[i];
        fab.push_back(fab[i]+fab[i-1]);
    }
    cout << "\n";

    return 0;
}
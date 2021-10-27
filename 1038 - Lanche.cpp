#include <bits/stdc++.h>

using namespace std;


int main() {

    int casos, x;
    double total;

    cin >> casos >> x;

    switch (casos){
        case 1:
            total = x*4.00;
            break;

        case 2:
            total = x*4.50;
            break;

        case 3:
            total = x*5.00;
            break;

        case 4:
            total = x*2.00;
            break;

        case 5:
            total = x*1.50;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << "\n";

    return 0;
}
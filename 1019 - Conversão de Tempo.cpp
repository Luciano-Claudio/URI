#include <bits/stdc++.h>

using namespace std;

int main() {

    int s, m, h;

    cin >> s;

    h = s/3600;
    s = s%3600;
    m = s/60;
    s = s%60;

    cout << h << ":" << m << ":" << s << "\n";

    return 0;
}
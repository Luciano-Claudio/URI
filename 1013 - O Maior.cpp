#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, maiorAB, maiorC;

    cin >> a >> b >> c;

    maiorAB = (a+b+abs(a-b))/2;
    maiorC = (maiorAB+c+abs(maiorAB-c))/2;

    cout << maiorC << " eh o maior\n";

    return 0;
}
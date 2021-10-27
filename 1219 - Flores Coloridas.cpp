#include <bits/stdc++.h>

using namespace std;

int main(){

    const double pi = 3.1415926535897;
    int a,b,c;
    double s,Rm,r;
    double AreaCm, AreaTri;
    double areaRo,areaVio,areaSun;

    cin >> a >> b >> c;

    while(!cin.eof()){
        s = double(a+b+c)/2;
        AreaTri = sqrt(s*(s-a)*(s-b)*(s-c));
        r = sqrt((s-a)*(s-b)*(s-c)/s);
        Rm = a*b*c/(4*sqrt(s*(s-a)*(s-b)*(s-c)));
        areaRo = pi*r*r;
        AreaCm = pi*Rm*Rm;
        areaVio = AreaTri - areaRo;
        areaSun = AreaCm - AreaTri;

        cout << fixed << setprecision(4);
        cout << areaSun << " " << areaVio << " "  << areaRo << "\n";
        cin >> a >> b >> c;
    }    
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){

    string d, trash;
    int dia_I, hr_I, minu_I, seg_I, dia_F, hr_F, minu_F, seg_F;
    int seg, hr, minu, dia;

    cin >> d >> dia_I;
    cin >> hr_I >> trash >> minu_I >> trash >> seg_I;
    cin >> d >> dia_F;
    cin >> hr_F >> trash >> minu_F >> trash >> seg_F;

    seg = seg_F - seg_I;
    minu = minu_F - minu_I;
    hr = hr_F - hr_I;
    dia = dia_F - dia_I;

    if (seg < 0){
        minu--;
        seg += 60;
    }
    if (minu < 0){
        hr --;
        minu += 60;
    }
    if (hr < 0){
        dia--;
        hr +=24;
    }
    cout << dia << " dia(s)\n";
    cout <<  hr << " hora(s)\n";
    cout <<  minu << " minuto(s)\n";
    cout <<  seg << " segundo(s)\n";

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
  int h1,m1,h2,m2,hr,min;

  cin >> h1 >> m1 >> h2 >> m2;
  while (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0){
    if (h2 < h1){
      h2+=24;
    }
    if(h2 == h1 && m2 <= m1){
      h2+=24;
    }
    hr = h2 - h1;
    min = m2 - m1;
    if (min < 0){
      min += 60;
      hr--;
    }
    else if (min > 60){
      min -=60;
      hr++;
    }
    min = hr * 60 + min;
    cout << min << "\n";
    cin >> h1 >> m1 >> h2 >> m2;
  }


  return 0;
}
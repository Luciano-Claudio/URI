#include <bits/stdc++.h>

using namespace std;

int main(){
  int r1,x1,y1,r2,x2,y2,a,b,dab;
  while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
    a = pow(x1-x2,2);
    b = pow(y1-y2,2);

    dab = a+b;
    if(dab <= pow((r1 - r2),2) && r1>=r2){
      cout << "RICO\n";
    }
    else{
      cout << "MORTO\n";
    }

  }
  return 0;
}
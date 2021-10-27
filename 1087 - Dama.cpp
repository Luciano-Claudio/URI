#include <bits/stdc++.h>
#include <string>

using namespace std;


int main(){
  int x1,x2,y1,y2;
  int count;

  cin >> x1 >> y1 >> x2 >> y2;

  while (x1!=0 && x2!=0 && y1!=0 && y2!=0){
    if(x1==x2 && y1==y2){
      count = 0;
    }
    else if(!(x1==x2&&y1==y2)&&(x1==x2 || y1==y2)){
      count = 1;
    }
    else if(abs(x1-x2) == abs(y1-y2)){
      count = 1;
    }
    else{
      count = 2;
    }
    cout << count << "\n";
    cin >> x1 >> y1 >> x2 >> y2;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin >> n >> m;
    while (n !=0 && m !=0) {
      vector<int> num,eq;
      int a;
      for (int i=0;i<m;i++){
        cin >> a;
        num.push_back(a);
      }
      int valor = 0;
      for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
          if (i!=j){
            if (num[i] == num[j] && !(find (eq.begin(), eq.end(), num[i]) != eq.end())){
              eq.push_back(num[i]);
              valor++;
            }
          }
        }
      }
      cout << valor <<"\n";
      cin >> n >> m;
    }
    return 0;
}
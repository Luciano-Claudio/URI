#include <bits/stdc++.h>

using namespace std;


int main(){
  int n, i, j;

  while(cin >> n){
    vector<int> vet;
    int soma=0;
    for (i=0;i<n;i++){
      cin >> j;
      vet.push_back(j);
    }

    sort(vet.begin(), vet.end());
    j=n-1;
    for (i=0;i<n/2;i++)
      soma += abs(vet[i] - vet[j--]);
    

    cout << soma << "\n";
  }


  return 0;
}
#include <bits/stdc++.h>

using namespace std;


int main(){
  int n;
  char comportamento;
  string na;
  vector<string> name;
  int bom=0, ruim=0;
  cin >> n;

  for(int i=0;i<n;i++){
    cin >> comportamento >> na;
    name.push_back(na);

    if(comportamento == '+'){
      bom++;
    }
    else{
      ruim++;
    }
  }

  sort(name.begin(), name.end());

  for(int i=0;i<name.size();i++){
    cout << name[i] << "\n";
  }
  cout << "Se comportaram: "<< bom << " | Nao se comportaram: " << ruim << "\n";

  return 0;
}
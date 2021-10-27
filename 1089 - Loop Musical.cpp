#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,a;
  cin >> n;
  while(n!=0){
    vector<int> loop;
    vector<bool> sobe;
    for (int i=0;i<n;i++){
      cin >> a;
      loop.push_back(a);
    }
    for (int i=0;i<loop.size()-1;i++){
      if(loop[i+1] >= loop[i]){
        sobe.push_back(true);
      }
      else{
        sobe.push_back(false);
      }
    }
    if(loop[0] >= loop[loop.size()-1]){
      sobe.push_back(true);
    }
    else{
      sobe.push_back(false);
    }
    int count=0;
    for(int i=0;i<sobe.size()-1;i++){
      if(sobe[i+1]!=sobe[i]){
        count++;
      }
    }
    if(sobe[sobe.size()-1] != sobe[0]){
      count++;
    }
    cout << count << "\n";
    cin >> n;
  }

  return 0;
}
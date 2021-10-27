#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n,yes=0,no=0;
   bool a;
   cin >> n;

   for (int i=0;i<n;i++){
     cin >> a;
     if(a==0){
       yes++;
     }
     else if (a==1){
       no++;
     }
   }
   if (yes > no){
     cout << "Y\n";
   }
   else{
     cout << "N\n";
   }
    return 0;
}
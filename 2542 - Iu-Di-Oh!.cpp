#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

	while (cin >> n){
        int m,l;
        int cm,cl;
        cin >> m >> l;
        int matm[m][n],matl[l][n];
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> matm[i][j];
            }
        }
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> matl[i][j];
            }
        }
        cin>> cm >> cl;
        int a;
        cin >> a;
        long long int mar=matm[cm-1][a-1];
        long long int leo=matl[cl-1][a-1];
        if(mar>leo){
            cout<<"Marcos\n";
        } 
        else if(leo>mar){
            cout<<"Leonardo\n";
        }
        else{
            cout<<"Empate\n";
        }
    }
        return 0;
}
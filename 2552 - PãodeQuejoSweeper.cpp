#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n,a;

	while (cin >> n >> m){
        int mat[n][m];

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin >> mat[i][j];
            }
        }

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                int soma=0;
                if (mat[i][j]!=0){
                    cout << "9";
                }
                else{
                    if (i!=0 && i!=n-1){
                        soma += mat[i-1][j];
                        soma += mat[i+1][j];
                    }
                    else{
                        if(i==0){
                            soma += mat[i+1][j];
                        }
                        else{
                            soma += mat[i-1][j];
                        }
                    }
                    if (j!=0 && j!=m-1){
                        soma += mat[i][j-1];
                        soma += mat[i][j+1];
                    }
                    else{
                        if(j==0){
                            soma += mat[i][j+1];
                        }
                        else{
                            soma += mat[i][j-1];
                        }
                    }
                cout << soma;
                }
            }
            cout << "\n";
        }
    }
        return 0;
}
#include <bits/stdc++.h>

using namespace std;


int main() {

    double n1, n2, n3, n4, nf, media;

    cin >> n1 >> n2 >> n3 >> n4;

    n1 = n1*2;
    n2 = n2*3;
    n3 = n3*4;
    n4 = n4*1;

    media = (n1+n2+n3+n4)/10;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << "\n";

    if (media >= 7.0){
        cout << "Aluno aprovado.\n";
    }
    else if (media < 5.0){
        cout << "Aluno reprovado.\n";
    }
    else {
        cout << "Aluno em exame.\n";
        cin >> nf;
        cout << "Nota do exame: " << nf << "\n";

       media = (media+nf)/2;

       if (media >= 5.0){
            cout << "Aluno aprovado.\n";
            cout << "Media final: " << media << "\n";
       }
       else {
            cout << "Aluno reprovado.\n";
            cout << "Media final: " << media << "\n";
       }
    }

    return 0;
}
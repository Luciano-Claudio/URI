#include <bits/stdc++.h>

using namespace std;


int main() {

    string tipo1, tipo2, tipo3;

    getline(cin, tipo1);
    getline(cin, tipo2);
    getline(cin, tipo3);

    if (tipo1 == "vertebrado"){
        if (tipo2 == "ave"){
            if (tipo3 == "carnivoro"){
                cout << "aguia\n";

            }
            else if (tipo3 == "onivoro"){
                cout << "pomba\n";

            }
        }
        if (tipo2 == "mamifero"){
            if (tipo3 == "onivoro"){
                cout << "homem\n";

            }
            else if (tipo3 == "herbivoro"){
                cout << "vaca\n";

            }
        }
    }
    else if (tipo1 == "invertebrado"){
        if (tipo2 == "inseto"){
            if (tipo3 == "hematofago"){
                cout << "pulga\n";

            }
            else if (tipo3 == "herbivoro"){
                cout << "lagarta\n";

            }
        }
        if (tipo2 == "anelideo"){
            if (tipo3 == "hematofago"){
                cout << "sanguessuga\n";

            }
            else if (tipo3 == "onivoro"){
                cout << "minhoca\n";

            }
        }
    }
    return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main(){
    int nro_dias;

    while (cin >> nro_dias, nro_dias){
        multiset<int> numeros;

        int cost = 0;

        while (nro_dias--){
            int k;
            cin >> k;

            while (k--){
                int t;
                cin >> t;

                numeros.insert(t);
            }

            auto menor = numeros.begin();
            auto mayor = --numeros.end();


            cost += *mayor - *menor;

            numeros.erase(menor);
            numeros.erase(mayor);
        }

        cout << cost << endl;
    }
}
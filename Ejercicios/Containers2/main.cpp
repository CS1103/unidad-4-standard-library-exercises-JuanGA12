#include <iostream>
#include <map>
#include <string>

template <typename texto>
auto precios(std::map<char, int>  &tabla, texto texto1){
    double precio_total = 0;
    for (auto & j : texto1){
        precio_total +=(double)tabla[j]/100;//por que el precio está en centavos
    }
    return precio_total;
}

using namespace std;
int main() {

    int nro_test, nro_caracteres, nro_lineas, valor_caracter;
    string linea, texto;
    char caracter;
    map<char, int>caracter_valor;
    cin>>nro_test;
    if(0 < nro_test && nro_test <= 5) {
        for (int i = 0; i < nro_test; ++i) {
            cin >> nro_caracteres;
            if (0 < nro_caracteres && nro_caracteres <= 100) {
                for (int j = 0; j < nro_caracteres; ++j) {
                    cout << "Caracter: ";
                    cin >> caracter;
                    cout << "Valor: ";
                    cin >> valor_caracter;
                    caracter_valor[caracter] = valor_caracter;
                }

            } else {
                cout << "Error";
            }
            cin >> nro_lineas;
            nro_lineas ++;
            if (0 < nro_lineas && nro_lineas <= 150000) {
                while (nro_lineas--) {
                    getline(cin, linea);
                    texto.append(linea);
                }
                double PRECIO = precios(caracter_valor,texto);
                cout<<PRECIO<<"$";
            }
            else{
                cout<<"Error";
            }

        }
    }
    else{
        cout<<"Error";
    }

}
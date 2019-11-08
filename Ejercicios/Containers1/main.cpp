#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>
#include <map>

using namespace std;


void leer_int_linea(vector<int>& numeros){
    string line;
    getline(cin, line);

    istringstream is(line);

    numeros = vector<int>(istream_iterator<int>(is), istream_iterator<int>());
}

void leer_double_linea(vector<string>& numeros){
    string line;
    getline(cin, line);

    istringstream is(line);

    numeros = vector<string>(istream_iterator<string>(is), istream_iterator<string>());
}

int main(){

    bool primero = true;

    int T;
    cin >> T;
    cin.ignore();
    string blankLine;
    while (T--){
        getline(cin, blankLine);
        if (!primero)
            cout << endl;
        primero = false;

        vector<int> mover_a;
        leer_int_linea(mover_a);

        vector<string> linea_pertumata;
        leer_double_linea(linea_pertumata);

        vector<string> linea(linea_pertumata.size());

        for (int i = 0; i < mover_a.size(); ++i) {
            linea[mover_a[i] - 1] = linea_pertumata[i];
        }

        for (int i = 0; i < linea.size(); ++i) {
            cout << linea[i] << endl;
        }
    }
}
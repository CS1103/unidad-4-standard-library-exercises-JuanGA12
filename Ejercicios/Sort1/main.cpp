#include <iostream>
#include <vector>



template <typename container>
auto bubble_sort(container a){
    int nro_swaps = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a.size() - i - 1; j++){
            if(a[j] > a[j+1]){
                std::swap(a[j], a[j+1]);
                nro_swaps += 1;
            }
        }
    }
    std::cout << "Optimal train swapping takes " << nro_swaps << " swaps." <<std::endl;
}

using namespace std;
int main() {
    int nro_test;
    int L;
    vector<int> train;
    cout<<"Ingresar # de tests: ";
    cin>>nro_test;
    while(nro_test--){
        cin>>L;
        if (0 <= L && L <= 50) {
            for (int i = 0; i < L; i++) {
                int nro_carril = 0;
                cin >> nro_carril;
                train.push_back(nro_carril);
            }
            bubble_sort(train);
            train.clear();
        }

    }
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {

        string a_permutar;

        while(cin>>a_permutar, a_permutar!= "#") {
            if (next_permutation(begin(a_permutar), end(a_permutar))) {
                cout << a_permutar<<endl;
            } else {
                cout <<"No Successor"<<endl;
            }
        }

        return 0;

}
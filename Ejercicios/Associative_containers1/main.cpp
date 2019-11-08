#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <map>
using namespace std;
int main() {
    int test;
    cin>>test;
    getchar();
    getchar();
    while(test--) {
        map<string, int> record;
        string tree;
        int n = 0;
        while(getline(cin, tree)) {
            if(tree == "")
                break;
            record[tree]++;
            n++;
        }
        for(auto i = record.begin(); i != record.end(); i++) {
            cout << i->first << " " << fixed << setprecision(4) << i->second * 100.0 / n << endl;
        }
        if(test)
            cout<<"";
    }
    return 0;
}
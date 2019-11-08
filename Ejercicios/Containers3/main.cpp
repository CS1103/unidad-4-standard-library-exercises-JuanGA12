#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    while(cin>>n) {
        int y = 0;
        for(i = 0; i < 4; i++) {
            y = (y<<8)|((n>>(8*i))&255);
        }
        std::cout<<n<<" converts to "<<y;
        std::cout<<endl;
    }
    return 0;
}
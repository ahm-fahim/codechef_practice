#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        // x = already have
        // n = children
        // 1 packet have 4 candy

        double n, x;
        cin >> n >> x;

        if(n>x){
            double needCandy = n-x;
            double buyCandy = ceil(needCandy/4);
            cout << buyCandy << endl;
        }else{
            cout << 0 << endl;
        }

    }

    return 0;
}

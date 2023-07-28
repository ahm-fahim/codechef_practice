#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            x = weight of mango     2
            y = truck weight        5
            z = bridge weight       11

        */

        int x, y, z;
        cin >> x >> y >> z;

        int totalMango = (z-y)/x;

        cout << totalMango << endl;

    }
    return 0;
}

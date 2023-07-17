#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        /*
            x = bill
            discount 100 tk
        */

        int x;
        cin >> x;

        int d1  = 0.1*x; // (x*10)/100 = 10% DISCOUNT
        int d2 = 100; // FLAT DISCOUNT 100 TK

        int maxDiscount = (d1>d2)?d1:d2;

        cout << maxDiscount << endl;
    }


    return 0;
}

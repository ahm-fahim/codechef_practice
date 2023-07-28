#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            w = innitial ammount                    100
            x = amount deposited per month          11
            y = the amount deducted per month       1
            z = the number of the month             10
                  calculation = (11-1 * 10)+ 100 == 200

        */


        int w, x, y, z;

        cin >> w >> x >> y >> z;

        if(x>y){
            int total = w + ( x - y) * z;

            cout << total <<endl;
        }else{
            int total = w - (y - x) * z;

            cout << total << endl;
        }

    }

    return 0;
}

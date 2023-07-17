#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            x = rent per month
            y = purchase
            m = seasons

        */

        int x, y ,m;
        cin >> x >> y>> m;

        if(x*m < y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

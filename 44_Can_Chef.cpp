#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){

        /*
            15 kilometers using 1
            x = amount of petrol
            y = distance
        */

        int x, y;

        cin >> x >> y;

        if(x*15 >= y*2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }


    }
    return 0;
}


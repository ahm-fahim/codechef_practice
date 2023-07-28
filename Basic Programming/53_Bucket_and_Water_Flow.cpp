#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            w = waters
            x = bucket capacity
            y = tap speed liter/hour
            z = tap running
        */

        int w, x, y, z;
        cin >> w >>x >>y >>z;

        if(y*z+w > x){
            cout << "overFlow\n";
        }else if(y*z+w == x){
            cout << "filled\n";
        }else{
            cout << "Unfilled\n";
        }

    }

    return 0;
}

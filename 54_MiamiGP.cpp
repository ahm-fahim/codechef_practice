#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        /*
            x = fastest finish time
            y = chef finish time
        */
        int x, y ;
        cin >> x >>y;

        if(1.07 * x >= y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            x = monthly cost for gym
            y = trainer cost for trainer
            z = total budget per month

        */

        int x, y, z;
        cin >> x >> y >> z;

        if(x+y <= z){
            cout << 2 << endl;
        }else if( x+y > z && x <= z){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }


    }
    return 0;
}

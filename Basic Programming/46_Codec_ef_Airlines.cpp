#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            x = capacity of each airplane
            y = booked people
            z = seat cost
        */
        int x, y, z;

        cin >> x >> y >> z;

        int capacity = x * 10;

        if(capacity >= y){
            cout << y*z << endl;
        }else{
            cout << capacity * z << endl;
        }

    }
    return 0;
}

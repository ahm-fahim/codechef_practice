#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        double n ,x; // friends , cost

        cin >> n >> x;

        if(n<6){
            cout << x << endl;
        }else{
            cout << ceil(n/6)* x << endl;
        }

    }
    return 0;
}

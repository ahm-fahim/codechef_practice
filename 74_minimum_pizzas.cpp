#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        double n, x; // n = number of friends , x = pizza pice

        cin >> n >> x;

        double pizza = ceil(n*x/4);

        cout << pizza << endl;
    }
    return 0;
}

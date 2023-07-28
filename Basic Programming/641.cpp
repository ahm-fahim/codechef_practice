#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        /*
            n = number of cards
            x = face-up cards
        */
        int n, x;

        cin >> n >> x;

        int mn = (x==0 || x==n)?0 :min(x, n-x);

        cout << mn << endl;
    }
    return 0;
}

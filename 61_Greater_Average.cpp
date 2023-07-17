#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        double a, b, c;

        cin >> a >> b >> c;

        string average = ((a+b)/2 < c) ? "YES" : "NO";

        cout << average << endl;
    }
    return 0;
}

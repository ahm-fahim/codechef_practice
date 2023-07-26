#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int shop1 = 100 - (100*a)/100;
        int shop2 = 200 - (200*b)/100;

        if (shop1 < shop2) {
            cout << "FIRST\n";
        } else if (shop2 < shop1) {
            cout << "SECOND\n";
        } else {
            cout << "BOTH\n";
        }
    }
    return 0;
}

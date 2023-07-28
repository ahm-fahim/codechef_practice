#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int x;

        cin >> x;

        string result = (10-x >= 3) ?"YES\n": "NO\n";

        cout << result;
    }
    return 0;
}

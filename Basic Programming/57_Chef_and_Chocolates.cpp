#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        /*
            c = chocolate
            x = have chocolate
            y = price per chocolate

        */
        int c, x, y;

        cin >> c >> x >> y;

        int needChocolate = c-x;
        int needMoney = needChocolate * y;

        cout << needMoney << endl;

    }
    return 0;
}

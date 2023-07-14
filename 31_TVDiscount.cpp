#include <iostream>
using namespace std;

int main() {
    /*
        a = price1 , c = discount for a
        b = price2 , d = discount for b
    */

    int t, a, b, c, d;

    cin >> t;

    while(t){
        cin >> a >> b >> c >> d;

        if((a-c) < (b-d)){

            cout << "First\n";

        }else if(( a-c) > (b-d)){

            cout << "Second\n";

        }else{
            cout << "Any\n";
        }

        t--;
    }
    return 0;
}

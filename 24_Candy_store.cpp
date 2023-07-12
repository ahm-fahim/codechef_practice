#include <iostream>
using namespace std;

int main() {
    int t, x, y;

    cin >> t;

    while(t){
        cin >> x >> y;

        if(x<y){
            cout << x + ((y-x) *2) << endl;
        }else{
            cout << y << endl;
        }

        t--;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int b1, b2, b3;

        cin >> b1 >> b2 >> b3;

        if((b1 == 1 && b2 == 1 && b3 == 1) || (b1==1 && b2==1)|| (b2==1 && b3==1) || (b1==1 && b3==1)){
            cout << "Not now\n";
        }else{
            cout << "Water filling time\n";
        }
    }
    return 0;
}

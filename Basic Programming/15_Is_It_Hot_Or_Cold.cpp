#include <iostream>
using namespace std;

int main() {
    int t, a;

    cin >> t;

    while(t){
        cin >> a;

        if(a > 20){
            cout << "HOT\n";
        }else{
            cout << "COLD\n";
        }

        t--;
    }
    return 0;
}

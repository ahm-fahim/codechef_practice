#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int Na, Nb, Nc;

        cin >> Na >> Nb >> Nc;

        if(Na > Nb+ Nc || Nb > Na+Nc || Nc > Na + Nb){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}


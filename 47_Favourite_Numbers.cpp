#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int a;
        cin >> a;

        if(a % 7 == 0 && a%2 == 0){
            cout << "Alice\n";
        }else if(a%9 == 0 && a % 2 != 0){
            cout << "Bob\n";
        }else{
            cout <<"Charlie\n";
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t, x, y;

    cin >> t;

    while(t){
        cin >> x >> y;

        if(x<y){
            cout <<"FIRST\n";
        }else if(x>y){
            cout << "SECOND\n";
        }else{
            cout << "ANY\n";
        }

        t--;
    }
    return 0;
}


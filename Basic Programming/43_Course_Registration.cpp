#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            n = size of the group
            m = course capasity
            k = already registered students
        */
        int n, m , k;

        cin >> n >> m >> k;

        if(m-k >= n){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}


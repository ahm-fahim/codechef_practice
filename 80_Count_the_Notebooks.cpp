#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int pages = n*1000;
        int notebook = pages/100;

        cout << notebook << endl;
    }
    return 0;
}

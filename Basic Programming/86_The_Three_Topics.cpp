#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if(a==x || b == x || c == x){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}

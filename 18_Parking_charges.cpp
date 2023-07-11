#include <iostream>
using namespace std;

int main() {
    int x, y, h; //x is the first hour , y is the extra hour , h is the needs hour

    cin >> x >> y >> h;

    if(h <= 1){
        cout << x << endl;
    }else{
        cout << x + (h-1)* y << endl;
    }

    return 0;
}

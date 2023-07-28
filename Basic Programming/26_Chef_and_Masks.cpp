#include <iostream>
using namespace std;

int main() {
    int t , x, y; //x  - disposable mask , y - cloth mask

    cin >> t;

    while(t){

        cin >> x >> y;

        if(x*100 >= y*10){
            cout << "Cloth\n";
        }else{
            cout << "Disposable\n";
        }

        t--;
    }
    return 0;
}

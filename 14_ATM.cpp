#include <iostream>
#include <iomanip>

using namespace  std;

int main(){
    int a;
    double b;

    cin >> a >> b;
    cout << fixed << setprecision(2);
    if(a%5 == 0 && b-a-0.5 >=0 ){
        cout << b-a-0.5 << endl;
    }else{
        cout << b << endl;
    }

    return 0;
}
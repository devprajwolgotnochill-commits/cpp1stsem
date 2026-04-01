#include <iostream>

using namespace std;

int main(){
    int a ,b ,c;

    cout <<"Enter x number , y number , z number : \n";

    cin >> a >> b >> c;

    if (a > b && a > c){
        cout << a ;
    }

    if (b > a && b > c) {
        cout << b ;
    }

    if (c > a && c > b) {
        cout << c ;
    }
}
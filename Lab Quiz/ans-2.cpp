#include<bits/stdc++.h>
using namespace std;

template <typename T>
T greatest(T x, T y, T z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

int main(){
    int a , b , c;
    cout << "Enter three integer values: ";
    cin >> a >> b >> c;
    char d , e , f;
    cout << "Enter three charecters: ";
    cin >> d >> e >> f;
    float g , h , i;
    cout << "Enter three float numbers: ";
    cin >> g >> h >> i;

    int greatestInt = greatest(a , b , c);
    char greatestChar = greatest(d , e , f);
    float greatestFloat = greatest(g , h , i);
    
    cout << endl;
    cout << "The greatest integer value is: " << greatestInt << endl;
    cout << "The greatest character value is: " << greatestChar << endl;
    cout << "The greatest floating-point value is: " << greatestFloat << endl;
}

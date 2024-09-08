#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "Enter 3rd Number : ";
    cin >> c;
    if (a < b) {
        if (b < c) {
            cout << a << b << c;
        }
    }
    if (a < c) {
        if (c < b) {
            cout << a << c << b;
        }
    }
    if (b < a) {
        if (a < c) {
            cout << b << a << c;
        }
    }
    if (b < c) {
        if (c < a) {
            cout << b << c << a;
        }
    }
    if (c < a) {
        if (a < b) {
            cout << c << a << b;
        }
    }
    if (c < b) {
        if (b < a) {
            cout << c << b << a;
        }
    }
    if (a == b) {
        if (b == c) {
            cout << "all are equal";
        }
        else {
            cout << "2 are equal";
        }
    }
    else if(b==c){
        cout << "2 are equal";
    }
}
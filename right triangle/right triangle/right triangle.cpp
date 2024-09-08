// right triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter 3 sides of a triangle : ";
	cin >> a >> b >> c;

	if (a > b && a > c) {
		if (a * a == b * b + c * c) {
			cout << "Right Triangle";
		}
	}
	else if (b > a && a > c) {
		if (b * b == a * a + c * c) {
			cout << "Right Triangle";
		}
	}
	else if (c > b && b > a) {
		if (c * c == b * b + a * a) {
			cout << "Right Triangle";
		}
	}
	else {
		cout << "Not right Triangle";
	}
}
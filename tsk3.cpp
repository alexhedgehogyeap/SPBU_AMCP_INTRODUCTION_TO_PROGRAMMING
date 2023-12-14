//#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Type coefficients a, b and c" << endl;
	cin >> a >> b >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "Infinitely many solutions" << endl;
		return 0;
	}
	if (a != 0 && b == 0 && c == 0) {
		cout << "x = 0" << endl;
		return 0;
	}
	if (a == 0 && b == 0 && c != 0) {
		cout << "there no roots" << endl;
		return 0;
	}
	if (a == 0 && b != 0 && c == 0) {
		cout << "x = 0" << endl;
		return 0;
	}
	if (a != 0 && b == 0 && c == 0) {
		cout << "x = 0" << endl;
		return 0;
	}
	if (b != 0 && b * b == 0) {
		cout << "anti-OVERFLOW in b^2" << endl;
		return 0;
	}
	if (a != 0 && c != 0 && a * c == 0) {
		cout << "anti-OVERFLOW in D" << endl;
		return 0;
	}

	if (a == 0 && b != 0 && c != 0) {
		cout << "This is linear equation!" << endl;
		if (to_string(-c / b) == "-inf" || to_string(-c / b) == "inf") {
			cout << "OVERFLOW in x";
			return 0;
		}
		else {
			cout << "x = " << -c / b << endl;
			return 0;
		}
	}
	if (to_string(pow(b, 2)) == "-inf" || to_string(pow(b, 2)) == "inf") {
		cout << "OVERFLOW in b^2" << endl;
		return 0;
	}
	double D;
	D = pow(b, 2) - 4 * a*c;
	if (to_string(D) == "-inf" || to_string(D) == "inf") {
		cout << "OVERFLOW in D";
		return 0;
	}
	else {
		if (D > 0) {
			double x1 = (-b + sqrt(D)) / (2 * a);
			if (D != 0 && sqrt(D) == 0) {
				cout << "anti-OVERFLOW in sqrt(D)" << endl;
				return 0;
			}
			if ((-b + sqrt(D)) != 0 && a != 0 && x1 == 0) {
				cout << "anti-OVERFLOW in x1" << endl;
				return 0;
			}
			if (to_string(x1) == "-inf" || to_string(x1) == "inf") {
				cout << "OVERFLOW in x1" << endl;
				return 0;
			}
			double x2 = (-b - sqrt(D)) / (2 * a);

			if (D != 0 && sqrt(D) == 0) {
				cout << "anti-OVERFLOW in sqrt(D)" << endl;
				return 0;
			}
			if ((-b - sqrt(D)) != 0 && a != 0 && x2 == 0) {
				cout << "anti-OVERFLOW in x2" << endl;
				return 0;
			}
			if (to_string(x2) == "-inf" || to_string(x2) == "inf") {
				cout << "OVERFLOW in x2" << endl;
				return 0;
			}
			if ((to_string(x1) != "-inf" && to_string(x1) != "inf") && (to_string(x2) != "-inf" && to_string(x2) != "inf")) {
				cout << "x1 = " << x1 << endl;
				cout << "x2 = " << x2 << endl;
			}
		}
		if (D == 0) {
			double x = -b / (2 * a);
			if (to_string(x) == "-inf" || to_string(x) == "inf") {
				cout << "OVERFLOW in x" << endl;
				return 0;
			}
			else {
				cout << "x = " << x << endl;
			}
		}
		if (D < 0) {
			cout << "There are no roots" << endl;
		}
	}
	return 0;

}
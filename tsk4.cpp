
//#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

unsigned long long int arr[100];
unsigned long long int Rec(int n) {
		if (arr[n] == 0) {
			if (n == 1 || n == 2) {
				arr[n] = 1;
			}
			else {
				arr[n] = Rec(n - 1) + Rec(n - 2);
			}
		}
		return arr[n];
	}

unsigned long long int Loop(int n) {
		arr[0] = 1;
		arr[1] = 1;
		for (int i = 2; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		return arr[n - 1];
	}

unsigned long long int Bine(int n) {
		const double sqrt5 = sqrt(5);
		const double f1 = (sqrt5 + 1) / 2;
		return (unsigned long long int)(pow(f1, n) / sqrt5+0.5);
	}
int main() {
	int input = 0;

	cout << "Enter a natural number less than 94." << endl;
	cin >> input;
	cout << endl;
	while (input <= 0 || input > 93) {
		if (input > 93) {
			cout << "The number entered is too big!!!" << endl;
		}
		
		else {
			cout << "The number entered is too small!!!" << endl;
		}
		cin >> input;
	}
	


	cout << "The number below " << input << ":" << endl;
	cout << "Rec - " << Rec(input) << endl;
	cout << "Loop - " << Loop(input) << endl;
	cout << "Binne - " << Bine(input) << endl;
	cout << endl;


}

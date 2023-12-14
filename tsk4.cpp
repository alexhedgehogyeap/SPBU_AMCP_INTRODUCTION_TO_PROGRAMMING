
//#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
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
	string input;
    int numb;
    double temp;
	cout << "Enter a natural number less than 94." << endl;
	while(getline(cin, input)){
         try {
           if(stod(input) == stoi(input)){
                numb = stoi(input);
                if (numb >= 94 || numb <= 0){
                    cout << "Enter a natural number less than 94." << endl;
                    continue;
                }
                else{
                    break;
                }
           }
            else{
                 throw invalid_argument("");
            }
         }
        catch (invalid_argument) {
            cout << "Input is not int" << endl;
            cout << "Type number"<< endl;
        }
        catch (out_of_range ) {
            cout << "OVERFLOW" << endl;
            cout << "Type number"<< endl;
        }
        
    }
    cout << "The number below " << numb << ":" << endl;
	cout << "Rec - " << Rec(numb) << endl;
	cout << "Loop - " << Loop(numb) << endl;
	cout << "Binne - " << Bine(numb) << endl;
	cout << endl;


}

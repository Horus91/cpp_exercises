//============================================================================
// Name        : 0_Exercises.cpp
// Author      : Nabil
// Version     : 3.0
// Copyright   : OFC
// Description : Hello World in C++, Ansi-style
//============================================================================
//lets make it great
#include <iostream>
using namespace std;
void greet ();
double calculus(int , float);

int main() {
	int a;
	float b;
	greet();
	cout << "Enter table's cases: ";
	cin >> a;
	cout << "Enter the multiplicator a float is permitted: ";
	cin >> b;
	calculus (a,b);
	return 0;
}

double calculus (int a, float b) {
	double arr[a];
	double sum{0};
	start:
	for (int i = 0; i < a; ++i) {
		cout << "Please enter Number "<< i+1 << " : " << endl;
		cin >> arr[i];
		arr[i] *= b;
	}
	for (int j = 0; j < a; ++j) {
		cout << arr [j] <<" ";
		sum += arr[j];
	}
	if (sum < 100) {
		cout << "sum is  " << sum << "  less than 100"<< endl ;
		goto start;
	}else
		cout << "great!";
	return sum;

}

void greet (){
	int Greet{0};
	cout << "Please enter a Number:	";
	cin >> Greet;
	if(Greet > 0 ){
		for (int i = 0;  i < Greet; ++i) {

			cout << "Welcome on board!"<<endl;
		}
	}else{
		cout << "Fuck off!" <<endl;
	}
}

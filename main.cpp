//============================================================================
// Name        : 0_Exercises.cpp
// Author      :
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void greet ();
void calculus(int , float);

int main() {
	int a;
	float b;
	greet();
	cout << "Enter table's cases: ";
	cin >> a;
	cout << "Enter the multiplucator a float is permitted: ";
	cin >> b;
	calculus (a,b);
	return 0;
}

void calculus (int a, float b) {
	int arr[a];
	for (int i = 0; i < a; ++i) {
		cout << "Please enter Number " i << " : " << endl;
		cin >> arr[i]
		arr[i] *= b;
	}
	for (int j = 0; j < a; ++j) {
		cout << arr [i] <<" ";
	}

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

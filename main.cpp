//============================================================================
// Name        : 0_Exercises.cpp
// Author      : Nabil
// Version     : 2.0
// Copyright   : OFC
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void greet ();

int main() {
	greet();
	return 0;
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

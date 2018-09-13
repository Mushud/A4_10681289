#include <iostream>
#include <cmath>

/* 10681289 
 Abu Kofi Mushud*/
 
 // Assignment Four (4)
 // Thursday, September 13 2018
 
using namespace std;

//Recursive Function to find The Greatest common divisor of two Integers;
//Implementing the Euclidean Algorithm

int findGCD(int num1, int num2){
	if(num1 == num2){
		return num1;
	}else {
		findGCD(min(num1, num2), (max(num1, num2) - min(num1, num2)));
	}
}


int main(int argc, char** argv) {
	int num1, num2;
	cout << "Enter a Positive Integer: ";
	cin >> num1;
	cout << "Enter another Positve Integer: ";
	cin >> num2;
	
	cout << "The Greatest Common Divisor for " <<  num1 << " and "<< num2 << " is " << findGCD(num1, num2);
	
	return 0;
}

#include <iostream>
#include "bigNum.h"
#include <string>
#include <cstring>
#include <sstream> 
#include <memory>

using namespace std; 

class bigNum;

bigNum fibDigSum(int nn){

	// Initialize 0th and 1st element of digits vector
	bigNum a = bigNum(1);
	bigNum b = bigNum(1);
	bigNum c = bigNum(0);

	/* Calculate Fibonacci numbers up to input value - 
	Add previous terms to get next sum, override a,b, c 
	variables to minimize storage */
	for (bigNum i = bigNum(1); i <= bigNum(nn); i+=1){
	    c = b;
	    b = b += a;
	    a = c;
	
	}

	cout << "Value of Fibbonaci Input: " << a << endl;

	// Convert digits of lastElement to String
	stringstream ss;
	ss << a;
	string str = ss.str();

	bigNum digitSum = 0;

	/*  Iterate through each digit/element of the string
	Add elements of string array together (as integers)*/
	for (int m=0; m < str.length(); m++)
	{
		digitSum += str[m] - '0';
	}

	cout << "Sum of digits: " << digitSum << endl;

	return digitSum;

}

int main(){

	cout << "Enter number: ";
	int input; 
	cin >> input;
	fibDigSum(input);

	return 0;
}


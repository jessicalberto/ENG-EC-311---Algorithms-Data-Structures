#include <iostream>
#include "bigNum.h"
#include <string>
#include <cstring>
#include <sstream> 
#include <memory>

using namespace std; 

class bigNum;

bigNum fibDigSum(int nn){

	//vector<int> digits;
	vector <bigNum> digits;

	// Initialize 0th and 1st element of digits vector
	digits.push_back(bigNum(1));
	digits.push_back(bigNum(1));

	bigNum sum = 0;

	// Calculate Fibonacci numbers up to input value
	for (int i = 0; i+2 <= nn; i++){
		sum = digits[i] + digits[i+1];
		digits.push_back(sum);
	}

	// Print out elements of the arrays
	for (int k = 0; k < digits.size(); k++){
		cout << " FibDigit[" << k << "]: " << digits[k] << " " << endl;
	}
	
	bigNum lastElement = digits[nn];;
	cout << "lastElement: " << lastElement << endl;

	// Convert digits of lastElement to String
	stringstream ss;
	ss << lastElement;
	string str = ss.str();

	bigNum digitSum = 0;

	//  Iterate through each digit/element of the string
	// Add elements of string array together (as integers)
	for (int m=0; m < str.length(); m++)
	{
		digitSum += str[m] - '0';
	}

	cout << "Final Answer - digitSum: " << digitSum << endl;

	return digitSum;
}

int main(){

	cout << "Enter number: ";
	int input; 
	cin >> input;
	fibDigSum(input);

	return 0;
}

/* Note to self: 

1. '0' sum theorem in comments
2. Redefine variable names 
3. Comment out code
4. Test for cases 0 and 1 [DONE]

*/
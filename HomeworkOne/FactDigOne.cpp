#include "bigNum.h"
#include <iostream> 
#include <string>
#include <sstream> 
#include <memory>

using namespace std;

class bigNum;
/**
 * @param nn An integer &gt; 0
 * @return the number of 1 digits in nn factorial
 * @example factDigOne(1)=1, factDigOne(3)=0; factDigOne(5)=1; factDigOne(14)=2
 */
bigNum factDigOne(int nn) {

	// declare bigNum variable to hold large values
	// 'factorial' variable will store factorial answer
	bigNum factorial = 1;

	// Calculate Factorial
	for (int i = 1; i <= nn; i++){
		factorial *= i;
	}

	cout << "Factorial: " << factorial << endl;

	// Convert Factorial to String
	stringstream ss;
	ss << factorial;
	string str = ss.str();

	// TRYYYYY
	//bigNum.bigNum(factorial); 
	// cout >> *this >> endl;

	// Store each digit as char in vector
	vector<char> digits;
	for (int j = 0; j < str.size(); j++){
		digits.push_back(str[j]);
		}
	
	// counter for '1's digit
	bigNum count = 0;

	// Check if digit is equal to 1
	for (int kk = 0; kk < digits.size(); kk++){
		if (digits[kk] == '1'){
			//count++;
			count += 1;
		}
	}

	// Return count = number of 1s
	cout << count << endl;
	return count;
}

int main(){

	int num;

	cout << "Enter integer greater than 0: "; 
	cin >> num; 

	factDigOne(num);

	/*
	////// Test Case 1/////////
	// Answer should be: 0
	cout << "------Test Case 1 -------- " << endl;
	bigNum ans_1 = factDigOne(6);
	
	cout << "factDigOne(6) =  "<< ans_1 << endl << endl;

	////// Test Case 2/////////
	// Answer should be: 37
	cout << "------Test Case 2 -------- "<< endl;
	bigNum ans_2 = factDigOne(216);
	cout << "factDigOne(216) = " << ans_2 << endl << endl;

	////// Test Case 3/////////
	// Answer should be: 213
	cout << "------Test Case 3 -------- "<< endl ;
	bigNum ans_3 = factDigOne(1016);
	cout << "factDigOne(1016) = " << ans_3 << endl << endl;

	////// Test Case 4/////////
	// Answer should be: 3
	cout << "------Test Case 4 -------- "<< endl;
	bigNum ans_4 = factDigOne(52);
	cout << "factDigOne(52) = " << ans_4 << endl << endl;

	////// Test Case 5/////////
	// Answer should be: 852
	cout << "------Test Case 5 -------- "<< endl;
	bigNum ans_5 = factDigOne(3000);
	cout << "factDigOne(52) = " << ans_5 << endl << endl;

	*/

	return 0;
}

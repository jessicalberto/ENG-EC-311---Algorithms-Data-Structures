#include "bigNum.h"
#include <iostream> 
#include <string>
#include <sstream> 
#include <memory>
#include <ctype.h>

using namespace std;

class bigNum;
/**
 * @param nn An integer &gt; 0
 * @return the number of 1 digits in nn factorial
 * @example factDigOne(1)=1, factDigOne(3)=0; factDigOne(5)=1; factDigOne(14)=2
 */
bigNum factDigOne(int nn) {
// Your code goes here!

	unsigned int long long factorial = 1;

	for (int i = 1; i <= nn; i++){
		factorial *= i;
	}

	cout << "Factorial is: " << factorial << endl;
	// NEED TO FIX, BIGNUM RELTAIONSHIP
	///bigNum biggie = bigNum(factorial);

	//cout << "Big Num: " << biggie << endl;

	// convert factorial to string
	stringstream ss;
	ss << factorial;
	string str = ss.str();
	/*
	cout << "String: " << str << endl; 
	cout << "Elements of String: ";
	for (int hh = 0; hh < str.size(); hh++){
		cout << str[hh] << " ";
	}
	cout << endl;
	*/
	// Change string to vector 'digits' with characters
	vector<char> digits;

	for (int yy = 0; yy < str.size(); yy++){
		digits.push_back(str[yy]);
	}
	/*
	cout << "vector elements: ";
	for (int zz = 0; zz < digits.size(); zz++){
		cout << digits[zz] << " ";
	}
	*/
	//char variable;
	int count = 0;
	const char one = '1';

	//cout << "vector size: " << digits.size() << endl;

	for (int yea = 0; yea < digits.size(); yea++){
		if (digits[yea] == '1'){
			count++;
		}
	}

	

	// NEED TO FIX, BIGNUM RELTAIONSHIP
	bigNum biggie = bigNum(count);

	//cout << "Big Num: " << biggie << endl;

	cout << "Answer: "  << biggie << endl;
	cout << endl;
	return biggie;
}

int main(){
	int num;

	cout << "Enter integer greater than 0: "; 
	cin >> num; 

	factDigOne(num);

	return 0;
}

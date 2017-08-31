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

	// Store each digit as char in vector
	vector<char> digits;
	for (int j = 0; j < str.size(); j++){
		digits.push_back(str[j]);
		}
	
	int count = 0; // counter for '1's digit

	// Check if digit is equal to 1
	for (int yea = 0; yea < digits.size(); yea++){
		if (digits[yea] == '1'){
			count++;
		}
	}

	// Return value = answer
	bigNum ans = bigNum(count);

	cout << "Answer: "  << ans << endl;
	cout << endl;
	return ans;
}

int main(){
	int num;

	cout << "Enter integer greater than 0: "; 
	cin >> num; 

	factDigOne(num);

	return 0;
}

#include <iostream> 
#include "bigNum.h"

using namespace std; 

///// FIBONACCI DIGIT SUM PROBLEM //////////////////

/**
 * @param nn An integer &gt; 0
 * @return the sum of the digits of the nn-th Fibonacci number
 *         the zeroth and first Fibonnaci numbers are 1
 * @example Fib(0)=1, Fib(1)=1; Fib(6)=4; Fib(9)=10
 */
//bigNum fibDigSum(int nn) {
int fibDigSum(int nn) {
	vector<int> fibby; 
	int term_1, term_2;
 	int sum;

	fibby.push_back(0);
	fibby.push_back(1);


	while (sum! = nn){
		sum = fibby[i] + fibby[i+1];
		fibby[i+2] = sum; 
	}

}
	
	




// Main Function used for test cases
int main(){
	fibDigSum(4);

	return 0; 
}
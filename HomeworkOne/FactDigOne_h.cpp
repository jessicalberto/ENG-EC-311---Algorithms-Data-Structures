#include "bigNum.h"
#include <iostream> 
#include <string>
#include <sstream> 
#include <memory>
using namespace std;



/**
 * @param nn An integer &gt; 0
 * @return the number of 1 digits in nn factorial
 * @example factDigOne(1)=1, factDigOne(3)=0; factDigOne(5)=1; factDigOne(14)=2
 */
bigNum factDigOne(int nn) {

	unsigned int product = 1;
	unsigned int tempProduct = 0;
	int i = 1;

	while (i < nn){
		product = product * i;
		i++;
	}

	cout << "Product is: " << product << endl;

	// PRODUCT INT

}


int main(){
	int num;

	cout << "Enter integer greater than 0: "; 
	cin >> num; 

	factDigOne(num);

	return 0;
}





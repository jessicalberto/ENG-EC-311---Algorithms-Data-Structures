/*#include <iostream>
#include "bigNum.h"
#include <string>
#include <cstring>
#include <sstream> 
#include <memory>

using namespace std; 

class bigNum; 

int main(){


	bigNum::unknown(8);
}
*/

#include <iostream>
#include <time.h>
#include "bigNum.h"

using namespace std;
 

bigNum unknown(const bigNum& num);

int main(){

	int input; 
	cout << "Enter number: ";
	cin >> input;
	timespec ts_beg, ts_end;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_beg);
	unknown(bigNum(input));
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_end);

	// Output the run time in Microseconds
	float val =  (ts_end.tv_sec - ts_beg.tv_sec) + (ts_end.tv_nsec - ts_beg.tv_nsec) / 1e9;
	cout << "Run Time: " << val*(1e6) << " microseconds" << endl;
	cout << endl;

	return 0;
}


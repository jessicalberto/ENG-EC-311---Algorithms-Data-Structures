// TESTER BLOCK TO COMPARE ENTIRE STR1 TO STR2
 
	for (int i=0; i < size-1; i++){
		// Compare adjacent elements
		if (A[i].compare(A[i+1]) != 0){
			cout << A[i] << " is not " << A[i+1] << endl;
		}

		// If first element and second element and third element in both strings are equal
		// Should probably be a while loop
		// Will exit if one is true
	}

// Working code for first two elemennts
// Just in case I eventually fuck up
	// eventually make 'begin+'' end variable a variable + 1
	for (int j = 0; j < size - 1; j++){
		if ((A[j].compare(0,4,A[j+1],1,4) == 0)){
			cout << "Success 1! " << A[j] << " matches with " << A[j+1] << endl;
			// pending.... 
			cout << "Resulting string is: " << result << endl;
			cout << "Exiting now... " << endl;
			return 0;
		}  
		if (A[j].compare(1,4,A[j+1],0,4) == 0){
			cout << "Success 2! " << A[j] << " matches with " << A[j+1] << endl;
			result.replace(result.begin(), result.begin()+4, A[j]);
			//cout << "First Iteration: " << result << endl;
			result.replace(result.begin()+5, result.end()+1, A[j+1].end()-1, A[j+1].end());
			cout << "Resulting string is: " << result << endl;
			cout << "Exiting now... " << endl;
			return 0;
		}
		else
			cout << "Still checking..." << endl;
	}

}

// Working code for comparing 4 characters per element

int combine(string A[], int size){
	cout << endl;

	// use replace function. 
	string result = "t";
	vector<string> passOne;
	

	// START HERE
	// eventually make 'begin+'' end variable a variable + 1
	for (int j = 0; j < size - 1; j++){
		for (int k=0; k < size - 1; k++){
			cout << "Comparing " << A[j] << " and " << A[k+1] << endl;
			if ((A[j].compare(0,4,A[k+1],1,4) == 0)){
				cout << "Success 1! " << A[k] << " matches with " << A[k+1] << endl;
				result.replace(result.begin(), result.begin()+4, A[k+1]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+1, A[j].end()-1, A[j].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
				//cout << "Exiting now... " << endl;
				//return 0;
			}  
			
			if (A[j].compare(1,4,A[k+1],0,4) == 0){
				cout << "Success 2! " << A[j] << " matches with " << A[k+1] << endl;
				result.replace(result.begin(), result.begin()+4, A[j]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+1, A[k+1].end()-1, A[k+1].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "Adding " << result << " to vector." << endl;
				//cout << "Exiting now... " << endl;
			
			}

			else
				cout << "No match, next..." << endl;
		}
	}
	// print out vector
	cout << endl;
	for (int k = 0; k < passOne.size(); k++){
		cout << "Element of vector: " << passOne[k] << endl;
	}
	return 0;
}




////// GET TWO ITERATIONS

#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;


int combine(vector<string> A){
	cout << endl;

	// use replace function. 
	string result = "t";
	vector<string> passOne;

	

	for (int j = 0; j < A.size() - 1; j++){
		cout << endl << "NEW J LOOP" << endl;
		for (int k=1; j+k < A.size(); k++){
			cout << "Comparing " << A[j] << " and " << A[j+k] << endl;
			if ((A[j].compare(0,4,A[j+k],1,4) == 0)){
				cout << "Success 1! " << A[k] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+4, A[j+k]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+1, A[j].end()-1, A[j].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			
			if (A[j].compare(1,4,A[j+k],0,4) == 0){
				cout << "Success 2! " << A[j] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+4, A[j]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+1, A[j+k].end()-1, A[j+k].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "Adding " << result << " to vector." << endl;
			}

			else
				cout << "No match, next..." << endl;
		}
	}
	// print out vector
	cout << endl;
	for (int k = 0; k < passOne.size(); k++){
		cout << "Element of vector: " << passOne[k] << endl;
	}
	cout << endl;

/**/
	vector<string> passTwo;

	for (int x = 0; x < passOne.size() - 1; x++){
		for (int y=1; x+y < passOne.size(); y++){
			cout << "Comparing " << passOne[x] << " and " << passOne[x+y] << endl;
			
			if ((passOne[x].compare(0,5,passOne[x+y],1,5) == 0)){
				cout << "Success 1! " << passOne[y] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+5, passOne[x+y]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+6, result.end()+1, passOne[x].end()-1, passOne[x].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passOne[x].compare(1,5,passOne[x+y],0,5) == 0){
				cout << "Success 2! " << passOne[x] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+5, passOne[x]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+6, result.end()+1, passOne[x+y].end()-1, passOne[x+y].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
			}

			else
				cout << "No match, next..." << endl; 
		}
	}
	// print out vector
	for (int z = 0; z < passTwo.size(); z++){
		cout << "Element of vector: " << passTwo[z] << endl;
	}
/**/	
	return 0;
}



// 12:29pm backup ----- produces "World WIde Web"
#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;


int combine(vector<string> A){
	cout << endl;

	string result = "t";
	vector<string> passOne;

// FIRST PASS

	cout << "Pass One: "<< endl;
	for (int j = 0; j < A.size() - 1; j++){
		for (int k=1; j+k < A.size(); k++){
			//cout << "Comparing " << A[j] << " and " << A[j+k] << endl;
			if ((A[j].compare(0,4,A[j+k],1,4) == 0)){
				cout << "Success 1! " << A[k] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+4, A[j+k]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+1, A[j].end()-1, A[j].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			
			if (A[j].compare(1,4,A[j+k],0,4) == 0){
				cout << "Success 2! " << A[j] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+4, A[j]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+1, A[j+k].end()-1, A[j+k].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "Adding " << result << " to vector." << endl;
			}

			//else
			//	cout << "No match, next..." << endl;
		}
	}
	// print out vector
	cout << endl;
	for (int k = 0; k < passOne.size(); k++){
		cout << "Element of vector: " << passOne[k] << endl;
	}
	cout << endl;
	/**
	length++;
	start++;
	combine(passOne, passOne.size(), length, start)
	/**/

/**/  //SECOND PASS
	vector<string> passTwo;

	cout << "Pass Two: " << endl;

	for (int x = 0; x < passOne.size() - 1; x++){
		for (int y=1; x+y < passOne.size(); y++){
			//cout << "Comparing " << passOne[x] << " and " << passOne[x+y] << endl;
			
			if ((passOne[x].compare(0,4,passOne[x+y],2,4) == 0)){
				cout << "Success 1! " << passOne[y] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+5, passOne[x+y]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+6, result.end()+2, passOne[x].end()-2, passOne[x].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passOne[x].compare(2,4,passOne[x+y],0,4) == 0){
				cout << "Success 2! " << passOne[x] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+5, passOne[x]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+6, result.end()+2, passOne[x+y].end()-2, passOne[x+y].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
			}

			//else
				//cout << "No match, next..." << endl; 
		}
	}
	// print out vector
	cout << endl;
	for (int z = 0; z < passTwo.size(); z++){
		cout << "Element of vector: " << passTwo[z] << endl;
	}
	cout << endl;
/**/	


/**/  //THIRD PASS
	vector<string> passThree;

	cout << "Pass Three: "<< endl;

	for (int r = 0; r < passTwo.size() - 1; r++){
		for (int b=1; r+b < passTwo.size(); b++){
			//cout << "Comparing " << passTwo[r] << " and " << passTwo[r+b] << endl;
			
			if ((passTwo[r].compare(0,5,passTwo[r+b],3,5) == 0)){
				cout << "Success 1! " << passTwo[b] << " matches with " << passTwo[r+b] << endl;
				result.replace(result.begin(), result.begin()+6, passTwo[r+b]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+7, result.end()+4, passTwo[r].end()-4, passTwo[r].end());
				cout << "Resulting string is: " << result << endl;
				passThree.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passTwo[r].compare(3,5,passTwo[r+b],0,5) == 0){
				cout << "Success 2! " << passTwo[r] << " matches with " << passTwo[r+b] << endl;
				result.replace(result.begin(), result.begin()+6, passTwo[r]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+7, result.end()+4, passTwo[r+b].end()-4, passTwo[r+b].end());
				cout << "Resulting string is: " << result << endl;
				passThree.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
			}

			//else
				//cout << "No match, nert..." << endl; 
		}
	}
	// print out vector
	cout << endl;
	for (int d = 0; d < passThree.size(); d++){
		cout << "Element of vector: " << passThree[d] << endl;
	}
	cout << endl;
/**/
	// FOURTH PASS
	vector<string> passFour;

	cout << "Pass Four: "<< endl;

	for (int f = 0; f < passThree.size() - 1; f++){
		for (int g=1; f+g < passThree.size(); g++){
			cout << "Comparing " << passThree[f] << " and " << passThree[f+g] << endl;
			
			if ((passThree[f].compare(0,8,passThree[f+g],3,8) == 0)){
				cout << "Success 1! " << passThree[g] << " matches with " << passThree[f+g] << endl;
				result.replace(result.begin(), result.begin()+7, passThree[f+g]);
			//	cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+8, result.end()+6, passThree[f].end()-6, passThree[f].end());
				cout << "Resulting string is: " << result << endl;
				passFour.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passThree[f].compare(3,8,passThree[f+g],0,8) == 0){
				cout << "Success 2! " << passThree[f] << " matches with " << passThree[f+g] << endl;
				result.replace(result.begin(), result.begin()+7, passThree[f]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+8, result.end()+6, passThree[f+g].end()-6, passThree[f+g].end());
				cout << "Resulting string is: " << result << endl;
				passFour.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
			}

			//else
			//	cout << "No match, nert..." << endl; 
		}
	}
	// print out vector
	cout << endl;
	for (int h = 0; h < passFour.size(); h++){
		cout << "Element of vector: " << passFour[h] << endl;
	}
	cout << endl;
	/**/
	return 0;
}



int main(){
	// Initialize String elements

	vector<string> strA;
	strA.push_back("_Wide");
	strA.push_back("Wide_");	
	strA.push_back("World");
	strA.push_back("d_Wid");	
	strA.push_back("de_We");
	strA.push_back("e_Web");	
	strA.push_back("ide_W");
	strA.push_back("ld_Wi");
	strA.push_back("orld_");
	strA.push_back("rld_W");


	combine(strA);

	cout << endl;

}















///// THREE PASSES!

#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;


int combine(vector<string> A){
	cout << endl;
	cout << "A: " << endl;
	for (int q = 0; q < A.size(); q++){
		cout << A[q] << endl;
	}
	cout << endl;
	string result = "t";
	vector<string> passOne;

// FIRST PASS

	cout << "Pass One: "<< endl;
	for (int j = 0; j < A.size() - 1; j++){
		for (int k=1; j+k < A.size(); k++){
			//cout << "Comparing " << A[j] << " and " << A[j+k] << endl;
			if ((A[j].compare(0,3,A[j+k],2,3) == 0)){
				cout << "Success 1! " << A[k] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+4, A[j+k]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+2, A[j].end()-2, A[j].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			
			if (A[j].compare(2,3,A[j+k],0,3) == 0){
				cout << "Success 2! " << A[j] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+4, A[j]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+5, result.end()+2, A[j+k].end()-2, A[j+k].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				cout << "Adding " << result << " to vector." << endl;
			}

			//else
			//	cout << "No match, next..." << endl;
		}
	}
	// print out vector
	cout << endl;
	for (int k = 0; k < passOne.size(); k++){
		cout << "Element of vector: " << passOne[k] << endl;
	}
	cout << endl;
	/**
	length++;
	start++;
	combine(passOne, passOne.size(), length, start)
	/**/

/**/  //SECOND PASS
	vector<string> passTwo;

	cout << "Pass Two: " << endl;

	for (int x = 0; x < passOne.size() - 1; x++){
		for (int y=1; x+y < passOne.size(); y++){
			//cout << "Comparing " << passOne[x] << " and " << passOne[x+y] << endl;
			
			if ((passOne[x].compare(0,4,passOne[x+y],3,4) == 0)){
				cout << "Success 1! " << passOne[y] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+6, passOne[x+y]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+7, result.end()+3, passOne[x].end()-3, passOne[x].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passOne[x].compare(3,4,passOne[x+y],0,4) == 0){
				cout << "Success 2! " << passOne[x] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+6, passOne[x]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+7, result.end()+3, passOne[x+y].end()-3, passOne[x+y].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
			}

			//else
				//cout << "No match, next..." << endl; 
		}
	}
	// print out vector
	cout << endl;
	for (int z = 0; z < passTwo.size(); z++){
		cout << "Element of vector: " << passTwo[z] << endl;
	}
	cout << endl;
/**/	

/**/ //THIRD PASS
	vector<string> passThree;

	cout << "Pass Three: "<< endl;

	for (int r = 0; r < passTwo.size() - 1; r++){
		for (int b=1; r+b < passTwo.size(); b++){
			//cout << "Comparing " << passTwo[r] << " and " << passTwo[r+b] << endl;
			
			if ((passTwo[r].compare(0,6,passTwo[r+b],4,6) == 0)){
				cout << "Success 1! " << passTwo[b] << " matches with " << passTwo[r+b] << endl;
				result.replace(result.begin(), result.begin()+9, passTwo[r+b]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+10, result.end()+4, passTwo[r].end()-4, passTwo[r].end());
				cout << "Resulting string is: " << result << endl;
				passThree.push_back(result);  
				cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passTwo[r].compare(4,6,passTwo[r+b],0,6) == 0){
				cout << "Success 2! " << passTwo[r] << " matches with " << passTwo[r+b] << endl;
				result.replace(result.begin(), result.begin()+9, passTwo[r]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+10, result.end()+4, passTwo[r+b].end()-4, passTwo[r+b].end());
				cout << "Resulting string is: " << result << endl;
				passThree.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
			}

			//else
				//cout << "No match, nert..." << endl; 
		}
	}
	// print out vector
	cout << endl;
	for (int d = 0; d < passThree.size(); d++){
		cout << "Element of vector: " << passThree[d] << endl;
	}
	cout << endl;
	return 0;
}

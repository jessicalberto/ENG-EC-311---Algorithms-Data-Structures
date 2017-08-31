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
	/**/
	for(int AAA = 1; AAA < 4; AAA++){ // 4, 6, 9
		for(int BBB = 0; BBB < 3; BBB++){ // 5, 7, 10
			for (int START = 0; START < 3; START++){
				for (int NEW = 2; NEW < 5; NEW++){	//2,3,4
	/**/				

				while (A.size() != 1){
					// ORIGINAL LOOP
					for (int j = 0; j < A.size() - 1; j++){
						for (int k=1; j+k < A.size(); k++){
							//cout << "Comparing " << A[j] << " and " << A[j+k] << endl;
							if ((A[j].compare(0,(3+START),A[j+k],NEW,(3+START)) == 0)){
								cout << "Success 1! " << A[k] << " matches with " << A[j+k] << endl;
								result.replace(result.begin(), result.begin()+(3+AAA+BBB), A[j+k]);
								//cout << "First Iteration: " << result << endl;
								result.replace(result.begin()+(4+AAA+BBB), result.end()+NEW, A[j].end()-NEW, A[j].end());
								cout << "Resulting string is: " << result << endl;
								passOne.push_back(result);
								cout << "1. Adding " << result << " to vector." << endl;
							}  
							
							if (A[j].compare(NEW,(3+START),A[j+k],0,(3+START)) == 0){
								cout << "Success 2! " << A[j] << " matches with " << A[j+k] << endl;
								result.replace(result.begin(), result.begin()+(3+AAA+BBB), A[j]);
								//cout << "First Iteration: " << result << endl;
								result.replace(result.begin()+(4+AAA+BBB), result.end()+NEW, A[j+k].end()-NEW, A[j+k].end());
								cout << "Resulting string is: " << result << endl;
								passOne.push_back(result);
								cout << "Adding " << result << " to vector." << endl;
							}
						}
					}
					// print out vector
					cout << endl;
					for (int k = 0; k < passOne.size(); k++){
						cout << "Element of vector: " << passOne[k] << endl;
					}
					cout << endl;

					combine(passOne);
/**/
				}
			}
		}
	}	
}
return 0;
}
/**/	
/** FIRST PASS

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

/**  //SECOND PASS
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

/** //THIRD PASS
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
	/ print out vector
	cout << endl;
	for (int d = 0; d < passThree.size(); d++){
		cout << "Element of vector: " << passThree[d] << endl;
	}
	cout << endl;
	return 0;
}
/**/


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
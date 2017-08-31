#include <iostream>
#include <string> 
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void findMinValue(vector<int> C){

	int min = C[0];
	for (int a = 1; a < C.size(); a++){
		if (C[a] < min)
			min = C[a];
	}
	cout << "min: " << min << endl;
}


void getCostArrayPerCity(vector<string> city){

	// Separate array
	vector<string> B;
	vector<string> stringVal;	// string of numbers
	vector<int> intVal;			// int

	// Function adapted to display functionality --
	// Only finds min value of YLUD --> for now
	for (int a = 4467; a < 5366; a++){
		B.push_back(city[a]);
	}
	// Check that this is correct by outputting values
	for (int q = 0; q < B.size(); q++){
		cout << B[q] << endl;
	}



	// Break up string to compare cost $ value
	string result1 = "aa";
	string result2 = "aaa";
	string result3 = "aaaa";
	for (int a = 0; a < B.size(); a++){
		
		if (B[a].length() == 17){
			result1.replace(result1.begin(), result1.begin()+3, B[a].end()-2, B[a].end());
			stringVal.push_back(result1);
		}
		if (B[a].length() == 18){
			result2.replace(result2.begin(), result2.begin()+4, B[a].end()-3, B[a].end());
			stringVal.push_back(result2);
		}
		if (B[a].length() == 19){
			result3.replace(result3.begin(), result3.begin()+5, B[a].end()-4, B[a].end());
			stringVal.push_back(result3);
		}
	}

	// Print out Costs Per City
	// Does not include destinations
	/**
	for (int k = 0; k < stringVal.size(); k++){
		cout << stringVal[k] << ", ";
	}
	/**/
	
	// Convert string to integer
	int intResult;
	for (int b = 0; b < stringVal.size(); b++){
 		stringstream ss(stringVal[b]);
    	int intResult;
    	ss >> intResult;
    	intVal.push_back(intResult);

	}

	cout << "Success" << endl;
	ofstream out_data("filename.txt");
	/**/
	for (int k = 0; k < intVal.size(); k++){
		cout << intVal[k] << ", ";
		out_data << intVal[k] << ", ";


	}
	/**/

	findMinValue(intVal);
}



void printElements(vector<string> A){
	// Print out elements from .txt file
	for (int k = 0; k < A.size(); k++){
			cout << A[k] << endl;
		}
}


// Outputs each city in order listed from map.txt
// Tried to test this in the submission - didn't work entirely
int randomGenerateDestination(vector<string> A){
	string newElement = "AAAA";

	//cout << A[0].substr(0,4);
	//cout << A[1].substr(0,4);

	ofstream out_data("Destinations.txt");
	/**/
	for (int a = 0; a < A.size()-1; a++){
		if (A[a].compare(0,4,A[a+1],0,4) != 0){
			newElement =  A[a+1].substr(0,4);
			cout << newElement << endl; // make this a text file later
			out_data << newElement << endl;
		}	
	}
	/**/
	return 0;
}


int searchElement(vector<string> A){
	string newElement = "AAAA";
	string search;
	ifstream inFile;
	string line;

	inFile.open("map.txt");

	cout << "Enter word to search for: ";
	cin >>search;


	size_t pos;
	while(inFile.good())
	  {
	      getline(inFile,line); // get line from file
	      pos=line.find(search); // search
	      if(pos!=string::npos) // string::npos is returned if string is not found
	        {
	            cout <<"Found!" << endl;
	            cout << line << endl;
	            break;
	        }
	  }	


}

int main()
{
/** Convert .txt file to vector elements **/
	vector<string> myArr;

	string line1[18];
	ifstream myfile("map.txt");
	int a = 0;

	while(!myfile.eof()){
		getline(myfile, line1[a], '\n');
		myArr.push_back(line1[a]);
	}

	//printElements(myArr);
	randomGenerateDestination(myArr);
	getCostArrayPerCity(myArr);
	//searchElement(myArr);
	return 0;
}
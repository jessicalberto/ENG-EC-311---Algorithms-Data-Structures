#include <iostream>
#include <vector> 

using namespace std;

// functions declaration
void fillVector(vector<int>&);
	// @ param: vector<int>& - vector to be filled in

void printVector(vector<int>&);

void reverse(vector<int>&);

int main(){

	vector<int> myVector;

	fillVector(myVector);

	printVector(myVector);

	reverse(myVector);

	return 0;
}


//function definitions
void fillVector(vector<int>& nums){

	cout << "Enter list of #'s, -1 to stop: ";
	
	int input; 

	while (input != -1){
		nums.push_back(input);
		cin >> input;


	}

	cout << endl;

}

void printVector(vector<int>& nums){

	cout << "Your vector: ";
	for (int i=0; i < nums.size(); i++){
		cout << nums[i] << " ";

	cout << endl;

	}

}


void reverse(vector<int>& nums){

	cout << "Vector reversed: ";

	for (int i = nums.size(); i > 0; i--){
		cout << nums[i-1] << " ";

	}


	cout << endl;


}
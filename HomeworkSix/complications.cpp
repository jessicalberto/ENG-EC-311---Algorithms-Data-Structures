#include <iostream> 
#include <vector>
#include <string>

using namespace std; 

int combine(vector<string> A, string first, int iter, int pass){

	vector<string> v2;

	cout << "First: " << first << endl;

	int count = 0;

	for (int a = 0; a < A.size(); a++){
		// if last A[a] = first four of A
		/**/
		if (first.compare(iter,A[a].length()/2,A[a],0,A[a].length()/2) == 0){	// if theres a match last four matches first four
			first.replace(first.end(), first.end()+((A[a]length()/2)-1), A[a].end()-((A[a]length()/2)-1), A[a].end());
		}/**/
		if (first.compare(0,A[a].length()/2,A[a],2,A[a].length()/2) == 0){	// if theres a match
			first.insert(0,A[a],0,2);
		}
/**/
		else{
			v2.push_back(A[a]);
			count++;
		}
	}

	cout << "v2 elements: " << endl;
	for (int b = 0; b < v2.size(); b++){
		cout << v2[b] << endl;
	}

	cout << "Total Count: " << count << endl;

	cout << "Resulting String: " << first << endl;
/**
	if (v2.size() == 0){ // use this later
		return 0;		
	}
/**/
	pass++;
	if (pass != 33){
		//string firstv2 = v2[0];
		iter = iter + 2;
		combine (v2, first, iter, pass);
	}
	else {
		return 0;
	}


}




int main(){

	// Initialize String elements
	vector<string> strA;
	
	// insert elements here 
	
	string first = strA[0];

	cout << endl;
	combine(strA, first, 2, 0);

}
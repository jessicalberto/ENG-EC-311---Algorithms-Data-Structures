#include <iostream> 
#include <vector>
#include <string>

using namespace std; 

int combine(vector<string> A, int size){
	cout << endl;
	cout << "A: " << endl;
	for (int q = 0; q < A.size(); q++){
		cout << A[q] << endl;
	}
	cout << endl;
	string result = "t";
	vector<string> passOne;

/** FIRST PASS
/**/
	cout << "Pass One: "<< endl;
	for (int j = 0; j < A.size() - 1; j++){
		for (int k=1; j+k < A.size(); k++){
			//cout << "Comparing " << A[j] << " and " << A[j+k] << endl;
			if ((A[j].compare(0,4,A[j+k],4,4) == 0)){
				cout << "Success 1! " << A[k] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+7, A[j+k]); // 7 = length -1
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+8, result.end()+4, A[j].end()-4, A[j].end()); // 8 = actual length // 4 = addidtion on each side
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				//cout << "1. Adding " << result << " to vector." << endl;
			}  
			
			if (A[j].compare(4,4,A[j+k],0,4) == 0){
				cout << "Success 2! " << A[j] << " matches with " << A[j+k] << endl;
				result.replace(result.begin(), result.begin()+7, A[j]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+8, result.end()+4, A[j+k].end()-4, A[j+k].end());
				cout << "Resulting string is: " << result << endl;
				passOne.push_back(result);
				//cout << "Adding " << result << " to vector." << endl;
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

/**/ //SECOND PASS
	vector<string> passTwo;

	cout << "Pass Two: " << endl;
	int count = 0;

	for (int x = 0; x < passOne.size() - 1; x++){
		for (int y=1; x+y < passOne.size(); y++){
			//cout << "Comparing " << passOne[x] << " and " << passOne[x+y] << endl;
			
			if ((passOne[x].compare(0,8,passOne[x+y],4,8) == 0)){
				cout << "Success 1! " << passOne[x] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+11, passOne[x+y]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+12, result.end()+4, passOne[x].end()-4, passOne[x].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "1. Adding " << result << " to vector." << endl;
				count++;
			}  
			if (passOne[x].compare(4,8,passOne[x+y],0,8) == 0){
				cout << "Success 2! " << passOne[x] << " matches with " << passOne[x+y] << endl;
				result.replace(result.begin(), result.begin()+11, passOne[x]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+12, result.end()+4, passOne[x+y].end()-4, passOne[x+y].end());
				cout << "Resulting string is: " << result << endl;
				passTwo.push_back(result);
				cout << "Adding " << result << " to vector." << endl;
				count++;	
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
	cout << "Count: " << count << endl;
/**/	

/**/ //THIRD PASS
	vector<string> passThree;

	cout << "Pass Three: "<< endl;
	count = 0;

	for (int r = 0; r < passTwo.size() - 1; r++){
		for (int b=1; r+b < passTwo.size(); b++){
			//cout << "Comparing " << passTwo[r] << " and " << passTwo[r+b] << endl;
			
			if ((passTwo[r].compare(0,12,passTwo[r+b],4,12) == 0)){
				cout << "Success 1! " << passTwo[r] << " matches with " << passTwo[r+b] << endl;
				result.replace(result.begin(), result.begin()+15, passTwo[r+b]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+16, result.end()+4, passTwo[r].end()-4, passTwo[r].end());
				cout << "Resulting string is: " << result << endl;
				passThree.push_back(result);  
				cout << "1. Adding " << result << " to vector." << endl;
				count++;
			}  
			if (passTwo[r].compare(4,12,passTwo[r+b],0,12) == 0){
				cout << "Success 2! " << passTwo[r] << " matches with " << passTwo[r+b] << endl;
				result.replace(result.begin(), result.begin()+15, passTwo[r]);
				cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+16, result.end()+4, passTwo[r+b].end()-4, passTwo[r+b].end());
				cout << "Resulting string is: " << result << endl;
				passThree.push_back(result);
				cout << "Adding " << result << " to vector." << endl;	
				count++;
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
	cout << "Count: " << count << endl;
		/**/

	/** //FOURTH PASS
	vector<string> passFour;

	for (int f = 0; f < passThree.size() - 1; f++){
		for (int g=1; f+g < passThree.size(); g++){
		
			if ((passThree[f].compare(0,16,passThree[f+g],4,16) == 0)){
				cout << "Success 1! " << passThree[f] << " matches with " << passThree[f+g] << endl;
				result.replace(result.begin(), result.begin()+19, passThree[f+g]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+20, result.end()+4, passThree[f].end()-4, passThree[f].end());
				cout << "Resulting string is: " << result << endl;
				passFour.push_back(result);
				//cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passThree[f].compare(4,16,passThree[f+g],0,16) == 0){
				cout << "Success 2! " << passThree[f] << " matches with " << passThree[f+g] << endl;
				result.replace(result.begin(), result.begin()+19, passThree[f]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+20, result.end()+4, passThree[f+g].end()-4, passThree[f+g].end());
				cout << "Resulting string is: " << result << endl;
				passFour.push_back(result);
				//cout << "Adding " << result << " to vector." << endl;	
			}
		}
	}
	// print out vector
	for (int h = 0; h < passFour.size(); h++){
		cout << "Element of vector: " << passFour[h] << endl;
	}/**/

	/** //FIFTH PASS
	vector<string> passFive;

	for (int u = 0; u < passFour.size() - 1; u++){
		for (int v=1; u+v < passFour.size(); v++){
		
			if ((passFour[u].compare(0,20,passFour[u+v],4,20) == 0)){
				cout << "Success 1! " << passFour[u] << " matches with " << passFour[u+v] << endl;
				result.replace(result.begin(), result.begin()+23, passFour[u+v]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+24, result.end()+4, passFour[u].end()-4, passFour[u].end());
				cout << "Resulting string is: " << result << endl;
				passFive.push_back(result);
				//cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passFour[u].compare(4,20,passFour[u+v],0,20) == 0){
				cout << "Success 2! " << passFour[u] << " matches with " << passFour[u+v] << endl;
				result.replace(result.begin(), result.begin()+23, passFour[u]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+24, result.end()+4, passFour[u+v].end()-4, passFour[u+v].end());
				cout << "Resulting string is: " << result << endl;
				passFive.push_back(result);
				//cout << "Adding " << result << " to vector." << endl;	
			}
		}
	}
	// print out vector
	for (int w = 0; w < passFive.size(); w++){
		cout << "Element of vector: " << passFive[w] << endl;
	}/**/

	/** //SIXTH PASS
	vector<string> passSix;

	for (int c = 0; c < passFive.size() - 1; c++){
		for (int d=1; c+d < passFive.size(); d++){
		
			if ((passFive[c].compare(0,24,passFive[c+d],4,24) == 0)){
				cout << "Success 1! " << passFive[c] << " matches with " << passFive[c+d] << endl;
				result.replace(result.begin(), result.begin()+27, passFive[c+d]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+28, result.end()+4, passFive[c].end()-4, passFive[c].end());
				cout << "Resulting string is: " << result << endl;
				passSix.push_back(result);
				//cout << "1. Adding " << result << " to vector." << endl;
			}  
			if (passFive[c].compare(4,24,passFive[c+d],0,24) == 0){
				cout << "Success 2! " << passFive[c] << " matches with " << passFive[c+d] << endl;
				result.replace(result.begin(), result.begin()+27, passFive[c]);
				//cout << "First Iteration: " << result << endl;
				result.replace(result.begin()+28, result.end()+4, passFive[c+d].end()-4, passFive[c+d].end());
				cout << "Resulting string is: " << result << endl;
				passSix.push_back(result);
				//cout << "Adding " << result << " to vector." << endl;	
			}
		}
	}
	// print out vector
	for (int aa = 0; aa < passSix.size(); aa++){
		cout << "Element of vector: " << passSix[aa] << endl;
	}/**/
	return 0;

}

int main(){

	// Initialize String elements
	//string strA[10];
	vector<string> strA;
	// 101 elements
	strA.push_back("t daily");
	strA.push_back("ither do"); 
	strA.push_back("at motiv"); 
	strA.push_back(" last. W"); 
	strA.push_back(" Well, n");
	strA.push_back("People o");
	strA.push_back("ecommend");
	strA.push_back("st. Well");
	strA.push_back(" why we ");
	strA.push_back("thing - ");
	strA.push_back("e recomm");
	strA.push_back("doesn't ");
	strA.push_back("sn't las");
	strA.push_back("mmend it");
	strA.push_back(" - that'");
	strA.push_back("otivatio"); 
	strA.push_back("Well, ne");
	strA.push_back("- that's");
	strA.push_back(". Well, ");
	strA.push_back(" that mo");
	strA.push_back("t motiva");
	strA.push_back("on doesn");
	strA.push_back("often sa");
	strA.push_back("t's why ");
	strA.push_back("does bat");
	strA.push_back("last. We");
	strA.push_back("ll, neit");
	strA.push_back("oes bath");
	strA.push_back("le often");
	strA.push_back("ten say ");
	strA.push_back(" often s");
	strA.push_back("g - that");
	strA.push_back("er does ");
	strA.push_back(" that's ");
	strA.push_back(" does ba");
	strA.push_back(" bathing");
	strA.push_back("s why we");
	strA.push_back("mend it ");
	strA.push_back("recommen");
	strA.push_back("ivation ");
	strA.push_back("y that m");
	strA.push_back(" neither");
	strA.push_back(" recomme");
	strA.push_back("ing - th");
	strA.push_back("we recom");
	strA.push_back("ast. Wel");
	strA.push_back("neither ");
	strA.push_back("ommend i");
	strA.push_back("ng - tha");
	strA.push_back("n doesn'");
	strA.push_back("at's why");
	strA.push_back("why we r");
	strA.push_back("ther doe");
	strA.push_back("'s why w");
	strA.push_back("ell, nei");
	strA.push_back("n't last");
	strA.push_back(", neithe");
	strA.push_back("'t last.");
	strA.push_back("nd it da");
	strA.push_back(" say tha");
	strA.push_back("motivati");
	strA.push_back("n say th");
	strA.push_back("l, neith");
	strA.push_back("e often ");
	strA.push_back("bathing ");
	strA.push_back("en say t");
	strA.push_back("d it dai");
	strA.push_back("esn't la");
	strA.push_back("vation d");
	strA.push_back("hing - t");
	strA.push_back("hat moti");
	strA.push_back("tivation");
	strA.push_back(" doesn't");
	strA.push_back("end it d");
	strA.push_back("ften say");
	strA.push_back("s bathin"); 
	strA.push_back("oesn't l"); 
	strA.push_back("es bathi"); 
	strA.push_back("either d"); 
	strA.push_back("ay that "); 
	strA.push_back("it daily"); 
	strA.push_back("ople oft"); 
	strA.push_back(" motivat"); 
	strA.push_back("that mot"); 
	strA.push_back("y we rec");
	strA.push_back("her does");
	strA.push_back("t last. "); 
	strA.push_back("ple ofte");
	strA.push_back("hy we re"); 
	strA.push_back("hat's wh");
	strA.push_back("tion doe"); 
	strA.push_back("athing -"); 
	strA.push_back("say that"); 
	strA.push_back("t. Well,"); 
	strA.push_back("eople of");
	strA.push_back(" it dail"); 
	strA.push_back("ion does"); 
	strA.push_back("r does b"); 
	strA.push_back("ation do"); 
	strA.push_back("that's w"); 
	strA.push_back("commend "); 
	strA.push_back(" we reco");


	cout << endl;
	combine(strA, strA.size());

}
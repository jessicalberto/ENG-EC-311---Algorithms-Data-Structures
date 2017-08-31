#include <iostream> 
#include <vector>
#include <string>

using namespace std; 

int combine(vector<string> A, int size, int count, int NEXTFOUR){
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
			for (int j = 0; j < A.size() - 1; j++){
				for (int k=1; j+k < A.size(); k++){
					//cout << "Comparing " << A[j] << " and " << A[j+k] << endl;
					if ((A[j].compare(0,NEXTFOUR,A[j+k],4,NEXTFOUR) == 0)){
						cout << "Success 1! " << A[k] << " matches with " << A[j+k] << endl;
						result.replace(result.begin(), result.begin()+(NEXTFOUR+3), A[j+k]); // 7 = length -1
						//cout << "First Iteration: " << result << endl;
						result.replace(result.begin()+(NEXTFOUR+4), result.end()+4, A[j].end()-4, A[j].end()); // 8 = actual length // 4 = addidtion on each side
						cout << "Resulting string is: " << result << endl;
						passOne.push_back(result);
						//cout << "1. Adding " << result << " to vector." << endl;
					}  
					
					if (A[j].compare(4,NEXTFOUR,A[j+k],0,NEXTFOUR) == 0){
						cout << "Success 2! " << A[j] << " matches with " << A[j+k] << endl;
						result.replace(result.begin(), result.begin()+(NEXTFOUR+3), A[j]);
						//cout << "First Iteration: " << result << endl;
						result.replace(result.begin()+(NEXTFOUR+4), result.end()+4, A[j+k].end()-4, A[j+k].end());
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
			if (count < 50){
				count = count + 1;
				NEXTFOUR = NEXTFOUR + 4;
				combine(passOne, passOne.size(), count, NEXTFOUR);

			}

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
	combine(strA, strA.size(), 0, 4);

}
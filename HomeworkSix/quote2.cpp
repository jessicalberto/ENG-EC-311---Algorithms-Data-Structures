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
		if (first.compare(iter,6,A[a],0,6) == 0){	// if theres a match last four matches first four
			first.replace(first.end(), first.end()+1, A[a].end()-1, A[a].end());
		}/**/
		if (first.compare(0,6,A[a],2,6) == 0){	// if theres a match
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
	// 101 elements
	strA.push_back("t daily.");
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

	string first = strA[0];

	cout << endl;
	combine(strA, first, 2, 0);

}
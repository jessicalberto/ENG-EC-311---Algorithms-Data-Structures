#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
#include "sum.h"

using namespace std; 

namespace StudentNameSpace{
	int sum(vector<int> nums){

		int target = 330;

		int i = 0;
		int j = 1;

		int pair_1, pair_2, pair_3;

		int diff = INT_MAX;  // difference = first set to really big number

	// FIRST CHECK//
		while (i < nums.size() - 1){
			while (j < nums.size()){
				if (abs(nums[i] + nums[j] - target) < diff){
					pair_1 = nums[i];
					pair_2 = nums[j];
					diff = abs(nums[i] + nums[j] - target);
					j++;
				}
				else
					j++;
			}	
			i++;
			j = i + 1;
		}
		
		cout << pair_1 + pair_2 << " = " << pair_1 << " + " << pair_2 << endl;

	// SECOND CHECK//
		int diff1 = abs(pair_1 + pair_2 - target);
		int copy_diff1 = abs(pair_1 + pair_2 - target);
		
		i = 0; // reset counter to iterate through vector again
		int tempDiff = 0;

		if ((pair_1 + pair_2) != 330){
				while (i < nums.size()){

					tempDiff = abs(pair_1 + pair_2 + nums[i] - target);

					if (tempDiff < copy_diff1){
						copy_diff1 = tempDiff;
						pair_3 = nums[i];
						i++;
					}
					else
						i++;
				}
		}
		if (copy_diff1 < diff1){
				cout << pair_1 + pair_2 + pair_3 << " = " << pair_1 << " + " << pair_2 << " + " << pair_3 << endl;
		}
			
		int sum = pair_1 + pair_2 + pair_3;
		
		return sum;
}



}



int main(){

	vector<int> array;

		array.push_back(10);
		array.push_back(100);
		array.push_back(200);
		array.push_back(3);
		array.push_back(10);
		array.push_back(100);
		array.push_back(230);
		array.push_back(3);

		cout << "Your array: ";

		for (int i=0; i < array.size(); i++){
			cout << array[i] << " ";
		}

		cout << endl;

		StudentNameSpace::sum(array);

		return 0;

}

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

		int pair_1 = 0, pair_2 = 0, pair_3 = 0;

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
		int sum = pair_1 + pair_2;

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
		sum = pair_1 + pair_2 + pair_3;

		i = 0;

		// Check if 330 exists in array
		while (i < nums.size()){
			if(nums[i] == target){
				sum = target;
				return sum;
			}
			else 
				i++;
		}

	return sum;

}
}

int main(){

	vector<int> array;

	//	array.push_back(10);
		array.push_back(100);
		array.push_back(200);
		array.push_back(3);
	///	array.push_back(10);
	//	array.push_back(100);
		array.push_back(230);
		array.push_back(3);
	//	array.push_back(330);

		cout << "Your array: ";

		for (int i=0; i < array.size(); i++){
			cout << array[i] << " ";
		}

		cout << endl;

		int x = StudentNameSpace::sum(array);

		cout << "Return Value: " << x << endl;

		return 0;

}

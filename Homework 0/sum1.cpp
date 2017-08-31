#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include "sum.h"

using namespace std; 


int sum(vector<int> nums){

	// Find Maximum value of nums array
	int numsMax; 
	for (int i = 0; i < nums.size(); i++){
		if (nums[i] > numsMax){
			numsMax  = nums[i];
		}
	}

	cout << "Max of array: " << numsMax << endl;

/////////////////////////////////////////////////////

	int target = 330;

	int diff = INT_MAX; 

	int pair_1, pair_2, pair_3; // 3 elements who's sum is closest to 330

	int left = 0;
	int right = nums.size() - 1;

	while (right > 0){

		if (abs(nums[left] + nums[right] - target) < diff){
			pair_1 = left;
			pair_2 = right;
			diff = abs(nums[left] + nums[right] - target);
		}

		if (nums[left] + nums[right] > target){
			right--;
		}
		else{
			left++;
		}


	}
cout <<" The closest pair is " << nums[pair_1] << " and " << nums[pair_2] << endl;


	return 0;



}

int main(){

	vector<int> array;

	array.push_back(100);
	array.push_back(200);
	array.push_back(300);
	array.push_back(30);

	sum(array);

}
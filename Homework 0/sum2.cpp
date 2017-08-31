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

	int diff = INT_MAX; // really really high number for initial case

	int pair_1, pair_2, pair_3; // 3 elements who's sum is closest to 330

	int first = 0;
	int next = 0;
	int end = nums.size() - 1;

	for (int i=0; i < nums.size(); i++){
		for (int j=1; j < nums.size(); j++){
			for (int k=2; k < nums.size(); k++){
				if (abs(nums[i] + nums[j] + nums[k] - target) < diff){
					pair_1 = nums[i];
					pair_2 = nums[j];
					pair_3 = nums[k];
					diff = abs(nums[i] + nums[j] + nums[k] - target);
				}

				if (abs(nums[i] + nums[j] + nums[k] > target){
					k++;
				}
				else{
					first++;
					next++;
				}


cout <<" The closest pairs are " << nums[pair_1] << " and " << nums[pair_2] << " and " << nums[pair_3] << endl;


	return 0;



}

int main(){

	vector<int> array;

	array.push_back(100);
	array.push_back(200);
	array.push_back(300);
	array.push_back(10);
	array.push_back(20);

	sum(array);

}
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include "sum.h"

using namespace std; 


int sum(vector<int> nums){

	int target = 330;

	int diff = INT_MAX;   // highest int possible

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
	
	int sum = nums[pair_1] + nums[pair_2];

	cout << sum << " = " << nums[pair_1] << " + " << nums[pair_2] << endl;

	int diff1 = abs(nums[pair_1] + nums[pair_2] - target);
	int copy_diff1 = abs(nums[pair_1] + nums[pair_2] - target);
	
	int i = 0;
	int tempDiff = 0;

	if ((nums[pair_1] + nums[pair_2]) != 330){
			while (i < nums.size()){

				tempDiff = abs(nums[pair_1] + nums[pair_2] + nums[i] - target);

				if (tempDiff < copy_diff1){
					copy_diff1 = tempDiff;
					pair_3 = nums[i];
					i++;
				}
				else{
					i++;
				}
			
			}

			if (copy_diff1 < diff1){
				int sum2 = nums[pair_1] + nums[pair_2] + pair_3;
				cout << sum2 << " = " << nums[pair_1] << " + " << nums[pair_2] << " + " << pair_3 << endl;
			}
	}

	return 0;
}

int main(){

	vector<int> array;

	array.push_back(10);
	array.push_back(100);
	array.push_back(200);
	array.push_back(3);

	cout << "Your array: ";

	for (int i=0; i < array.size(); i++){
		cout << array[i] << " ";
	}

	cout << endl;

	sum(array);

	return 0;

}
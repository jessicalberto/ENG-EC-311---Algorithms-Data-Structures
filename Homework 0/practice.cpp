#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> nums;

    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(2);
    nums.push_back(10);
    nums.push_back(11);

    cout << "Vector: ";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    nums.insert(nums.begin() + 4, 9);

    cout << endl;

    cout << "Vector: ";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
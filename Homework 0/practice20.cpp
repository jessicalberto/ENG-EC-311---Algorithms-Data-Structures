// Simple C++ program to find the pair with sum closest to a given no.
#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
 
// Prints the pair with sum closest to x
void printClosest(int arr[], int n, int x)
{
    int res_l, res_r;  // To store indexes of result pair
 
    // Initialize left and right indexes and difference between
    // pair sum and x
    int l = 0, r = n-1, diff = INT_MAX;
 
    // While there are elements between l and r
    while (r > l)
    {
       // Check if this pair is closer than the closest pair so far
       if (abs(arr[l] + arr[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - x);
       }
 
       // If this pair has more sum, move to smaller values.
       if (arr[l] + arr[r] > x)
           r--;
       else // Move to larger values
           l++;
    }
 
    cout <<" The closest pair is " << arr[res_l] << " and " << arr[res_r];

    cout << endl;
}
 
// Driver program to test above functions
int main()
{
    int arr[] =  {10, 100, 200, 3}, x = 330;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "N is " << n << endl;
    printClosest(arr, n, x);
    return 0;
}
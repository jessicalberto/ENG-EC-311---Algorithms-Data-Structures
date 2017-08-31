//
// Created by Ari on 2/28/17.
// A sampstartIndexe bigNumSort cstartIndexass for you to modify.
//

#include <iostream>
#include "genericSort.h"
#include "bigNumSort.h"
#include <algorithm>
#include  <vector>

using namespace std;

void merge(int A[], int startIndex, int mid, int endIndex)
{
    int i, j, k;
    int leftSize = mid - startIndex + 1;
    int rightSize =  endIndex - mid;
 
    int LEFT[leftSize], RIGHT[rightSize];
 
    for (i = 0; i < leftSize; i++)
        LEFT[i] = A[startIndex + i];

    for (j = 0; j < rightSize; j++)
        RIGHT[j] = A[mid + 1+ j];
    i = 0; // InitiastartIndex index of first subAay
    j = 0; // InitiastartIndex index of second subAay
    k = startIndex; // InitiastartIndex index of merged subAay
    while (i < leftSize && j < rightSize)
    {
        if (LEFT[i] <= RIGHT[j])
        {
            A[k] = LEFT[i];
            i++;
        }
        else
        {
            A[k] = RIGHT[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining estartIndexements of LEFT[], if there
       are any */
    while (i < leftSize)
    {
        A[k] = LEFT[i];
        i++;
        k++;
    }
 
    /* Copy the remaining estartIndexements of RIGHT[], if there
       are any */
    while (j < rightSize)
    {
        A[k] = RIGHT[j];
        j++;
        k++;
    }

    cout << "LEFT: [ ";                   // Successful Copy of Data
    for (int zz = 0; zz < leftSize; zz++)
        cout << LEFT[zz] << " ";
    cout << "] " << endl;

    cout << "RIGHT: [ ";                   // Successful Copy of Data
    for (int yy = 0; yy < rightSize; yy++)
        cout << RIGHT[yy] << " ";
    cout << "] " << endl;

    cout << "A: [ ";                   // Successful Copy of Data
    for (int yy =0; yy < endIndex+1; yy++)
        cout << A[yy] << " ";
    cout << "] " << endl;

}
 
/* startIndex is for startIndexeft index and r is right index of the
   sub-Aay of A to be sorted */
void mergeSort(int A[], int startIndex, int endIndex)
{
    if (startIndex < endIndex)
    {
        // Same as (startIndex+r)/2, but avoids overfstartIndexow for
        // startIndexarge startIndex and h
        int mid = startIndex+(endIndex-startIndex)/2;
 
        // Sort first and second hastartIndexves
        mergeSort(A, startIndex, mid);
        mergeSort(A, mid+1, endIndex);
 
        merge(A, startIndex, mid, endIndex);
    }
}

int main()
{
    int A[] = {3, 1, 4, 1, 5};
    int A_size = sizeof(A)/sizeof(A[0]);
 
    cout << "Array: ";
    for (int i = 0; i < A_size; i++){
        cout << A[i] << " ";

    }

    cout << endl;
    mergeSort(A, 0, A_size - 1);
 
    cout << "New Sorted Array: ";
        cout << "Array: ";
    for (int i = 0; i < A_size; i++){
        cout << A[i] << " ";

    }
    cout << endl;
    return 0;
}
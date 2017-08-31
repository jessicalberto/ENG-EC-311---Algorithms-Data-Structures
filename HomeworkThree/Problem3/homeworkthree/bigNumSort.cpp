//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#include <iostream>
#include "genericSort.h"
#include "bigNumSort.h"
#include <vector>

// MERGE SORT
void bigNumSort::performSort() {        // acts as main function

    //bigNum A[data.size()];

    genericSort<bigNum> A;

    for (int gg = 0; gg < data.size(); gg++){
        A[gg] = data[gg];
    }
/*
    // convert data to array of bigNums
    for (int ss = 0; ss < data.size(); ss++)
        A[ss] = data[ss];

    cout << "DATA: [ ";                  // Prove data was successfully copied
    for (int jj=0; jj < data.size(); jj++)
        cout << data[jj] << " ";
    cout << "] " << endl;
 */   
    mergeSort(A, 0, data.size() - 1);

    // Produce final array, correctly sorted
    //copy A[] to data[]         
    for (int zz = 0; zz < data.size(); zz++)
        data[zz] = A[zz];

    cout << "DATA AFTER SORT: [ ";                  // Prove data was successfully copied
    for (int hh = 0; hh < data.size(); hh++)
        cout << data[hh] << " ";
    cout << "] " << endl;
}


void bigNumSort::mergeSort(genericSort<bigNum> A, int startIndex, int endIndex){

    // recursive call mergesort until individual elements are in their own arrays
    if ( startIndex < endIndex ){
        int mid = ((startIndex+endIndex)/2);
        mergeSort(A,startIndex, mid);
        mergeSort(A, mid+1, endIndex);
        mergeAll(A, startIndex, mid, endIndex);
        
    }
}

void bigNumSort::mergeAll(genericSort<bigNum> A, int startIndex, int mid, int endIndex){

    // temporary LEFT[] and RIGHT[] arrays to split A[]
    int ii, jj, kk;

    int leftSize = mid - startIndex + 1;
    int rightSize = endIndex - mid;

    bigNum leftArray[leftSize];
    bigNum rightArray[rightSize];
    
    // Copy elements to LEFT[] and RIGHT[] array 
    for (ii = 0; ii < leftSize; ii++){
        leftArray[ii] = A[startIndex + ii];
    }
    for (jj = 0; jj < rightSize; jj++){
        rightArray[jj] = A[mid + 1 + jj];
    }

    ii = 0;
    jj = 0;
    kk = startIndex;

    // swap elements if one is greater than the other
    // merge to A[]
    while (ii < leftSize && jj < rightSize){
        if (leftArray[ii] < rightArray[jj]){
            A[kk] = leftArray[ii];
            ii++;
        }
        else{
            A[kk] = rightArray[jj];
            jj++;
        }
        kk++;
    }

    // merge any remaining elements 
    while ( ii < leftSize){
        A[kk] = leftArray[ii];
        ii++;
        kk++;
    }
    while ( jj < rightSize){
        A[kk] = rightArray[jj];
        jj++;
        kk++;
    }

}



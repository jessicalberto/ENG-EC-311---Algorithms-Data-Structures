//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#include "genericSort.h"
#include "bigNumSort.h"
#include <algorithm>
#include <cstring>
#include <string>
#include <sstream> 
#include <vector>
#include <stdlib.h> 
#include <cstdlib>
/*
void bigNumSort::callSort() {
    // A simple implementation of bubble sort

    for (int ii=0; ii<data.size(); ii++)
        for (int jj=0; jj<data.size(); jj++)

            // compare items at index ii and jj and swap if needed
            if (!(data[jj] <= data[ii])) {
                // swap the two locations
                bigNum temp(this->data[ii]);
                data[ii]=data[jj];
                data[jj]=temp;
            }


}

*/
// OR MERGE SORT
void bigNumSort::performSort() {

    int i = 0;
    int j = 0;
    int mid = (data.size()/2);

    int leftHalfSize = mid;
    int rightHalfSize = data.size()-mid;
    cout << "mid: " << mid << endl;


   bigNum LEFT[leftHalfSize];
    bigNum RIGHT[rightHalfSize];

    // Copy data to temp arrays LEFT[] and RIGHT[]
    for (i=0; i < leftHalfSize; i++)
        LEFT[i] = data[i];
    for (j =0; j < rightHalfSize; j++)
        RIGHT[j] = data[mid+j];

    //while (data.size() != 1){


    //}
    // INSERT RECURSIVE CALL HERE for LEFT
    // INSERT RECRUSIVE CALL HERE for RIGHT

    i = 0;
    j = 0;
    int k = 0;


    while ((i < leftHalfSize) && (j < rightHalfSize))
    {
        if (LEFT[i] <= (RIGHT[j])){
            data[k] = LEFT[i];
            i++;
        }
        else{
            data[k] = RIGHT[j];
            j++;
        }
        
    k++;

    }
        
    while (i < leftHalfSize){
        data[k] = LEFT[i];
        i++;
        k++;
    }
    while (j < rightHalfSize){
        data[k] = RIGHT[j];
        j++;
        k++;

    }
    

}


// AGAIN

#include "genericSort.h"
#include "bigNumSort.h"
#include <algorithm>
#include <cstring>
#include <string>
#include <sstream> 
#include <vector>
#include <stdlib.h> 
#include <cstdlib>

// OR MERGE SORT
void bigNumSort::performSort() {

    int i = 0;
    int j = 0;
    int mid = (data.size()/2);

    int leftHalfSize = mid;
    int rightHalfSize = data.size()-mid;
    cout << "mid: " << mid << endl;


    bigNum LEFT[leftHalfSize];
    bigNum RIGHT[rightHalfSize];


    // Copy data to temp arrays LEFT[] and RIGHT[]
    for (i=0; i < leftHalfSize; i++)
        LEFT[i] = data[i];
    for (j =0; j < rightHalfSize; j++)
        RIGHT[j] = data[mid+j];

    cout << "LEFT: [: ";
    for (i=0; i < leftHalfSize; i++)
        cout << LEFT[i] << " ";
    cout << "] " << endl;


    cout << "RIGHT: [ ";
    for (i=0; i < rightHalfSize; i++)
        cout << RIGHT[i] << " ";
    cout << "] " << endl;
    
    //while (leftHalfSize != 1 && rightHalfSize !=1){
   //     LEFT.performSort();
   //     RIGHT.performSort();
   // }


    //}
    // INSERT RECURSIVE CALL HERE for LEFT
    // INSERT RECRUSIVE CALL HERE for RIGHT

    i = 0;
    j = 0;
    int k = 0;

    // MERGE TEMP ARRAYS
    while ((i < leftHalfSize) && (j < rightHalfSize))
    {
        if (LEFT[i] <= (RIGHT[j])){
            data[k] = LEFT[i];
            i++;
            cout << "Left in" << endl;     // remove statement
        }
        else{
            data[k] = RIGHT[j];
            j++;
            cout << "Right in" << endl;     // remove statement
        }
        
    k++;

    }
        
    while (i < leftHalfSize){
        data[k] = LEFT[i];
        i++;
        k++;
        cout << "crazy part i" << endl;       // remove statement
    }
    while (j < rightHalfSize){
        data[k] = RIGHT[j];
        j++;
        k++;
        cout << "crazy part j" << endl;           // remove statement

    }
    
    cout << "Data: [ ";
    for (i=0; i < data.size(); i++){
        cout << data[i] << " ";
    }
cout << "]" << endl;
}

/////////////// WORKING /////////////////
//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#include "genericSort.h"
#include "bigNumSort.h"
#include <algorithm>
#include <cstring>
#include <string>
#include <sstream> 
#include <vector>
#include <stdlib.h> 
#include <cstdlib>

// OR MERGE SORT
void bigNumSort::performSort() {

    // COPY ARRAY
    vector<bigNum> A; 


    for (int ii = 0; ii < data.size(); ii++){
        A.push_back(data[ii]);
    }

    cout << "DATA in PS: [ ";
    for (int jj=0; jj < data.size(); jj++)
        cout << data[jj] << " ";
    cout << "] " << endl;
    
    cout << "COPY in PS: [ ";
    for (int kk=0; kk < A.size(); kk++)
        cout << A[kk] << " ";
    cout << "] " << endl;

    cout << "copy successful" << endl << endl;

    int firstIndex = 1;
    int length = A.size();

    bigNumSort::mergeSort(A, firstIndex, length);
}

/* 
void merge(vector<bigNum> A){

    cout << "hi" << endl;
} 
*/
void bigNumSort::mergeSort(vector<bigNum> A, int startIndex, int length){

    cout << "MERGESORT CALLED" << endl;
 // COUT STATEMENTS   
    // check to see if data was successfully passed
    cout << "DATA in MS: [ ";
    for (int jj=0; jj < data.size(); jj++)
        cout << data[jj] << " ";
    cout << "] " << endl;
    // check to see if array A was succesfully passed
    cout << "ARRAY A in MS: [ ";
    for (int kk=0; kk < A.size(); kk++)
    cout << A[kk] << " ";
    cout << "] " << endl;

// Beginning of actual code: 

    int mid = 0;

    // Base Case
    if (startIndex < length){             // potential problem here
        mid = startIndex+(length-1)/2;
        cout << "mid: " << mid << endl;

        // Recursively call mergeSort until down to individual element 
        mergeSort(A,startIndex, mid);
        mergeSort(A, mid+1, length);

        mergeAll(A,startIndex,mid,length);
    }

 

// END
}

void bigNumSort::mergeAll(vector<bigNum> A, int startIndex, int mid, int length){

    cout << "MERGE CALLED" << endl;

    int ii, jj;
    int leftSize = mid;        // numeric issue
    int rightSize = length - mid; 

    // temporary arrays
    bigNum LEFT[leftSize], RIGHT[rightSize];

    // Temporary arrays LEFT[] and RIGHT[]
    for (ii = 0; ii < leftSize; ii++){
        LEFT[ii] = A[startIndex + ii];
    }
    for (jj = 0; jj < rightSize; jj++){
        RIGHT[jj] = A[startIndex + mid + jj];
    }

    ii = 0; // Initial index of first subarray
    jj = 0; // Initial index of second subarray
    int kk = startIndex; // index of merged array

    while (ii < leftSize && jj < rightSize){  // could be turned into for loop
        if (LEFT[ii] <= RIGHT[jj]){
            A[kk] = LEFT[ii];
            ii++;
            cout << "merge 1 copy successful" << endl;
        }
        else{
            A[kk] = RIGHT[jj];
            jj++;
            cout << "merge 2 copy successful" << endl;
        }
        // COUT LEFT AND RIGHT
        cout << "LEFT: [: ";
        for (ii=0; ii < leftSize; ii++)
            cout << LEFT[ii] << " ";
        cout << "] " << endl;


        cout << "RIGHT: [ ";
        for (ii=0; ii < rightSize; ii++)
            cout << RIGHT[ii] << " ";
        cout << "] " << endl;
    
        kk++;
    }

    while (ii < leftSize){
        A[kk] = LEFT[ii];
        ii++;
        kk++;
        cout << "merge 3 copy successful" << endl;
    }
    while (jj < rightSize){
        A[kk] = RIGHT[jj];
        jj++;
        kk++;
         cout << "merge 4 copy successful" << endl;
    }

    cout << "FINAL A[ ";
    for (int m=0; m < A.size(); m++)
    cout << A[m] << " ";
    cout << "] " << endl;
}


// 8:47pm

//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#include <iostream>
#include "genericSort.h"
#include "bigNumSort.h"
#include <algorithm>
#include <vector>
#include <cstdlib>


// MERGE SORT
void bigNumSort::performSort() {        // acts as main function

    vector<bigNum> A; 
    // COPY DATA TO NEW ARRAY/VECTOR
    for (int ii = 0; ii < data.size(); ii++){
        A.push_back(data[ii]);
    }

    cout << "DATA: [ ";                   // Successful Copy of Data
    for (int jj=0; jj < data.size(); jj++)
        cout << data[jj] << " ";
    cout << "] " << endl;
    
    cout << "A: [ ";                   // Successful Copy of Data
    for (int kk=0; kk < A.size(); kk++)
        cout << A[kk] << " ";
    cout << "] " << endl;

    cout << "copy successful" << endl << endl;

    mergeSort(A, 0, A.size() - 1);
}

void bigNumSort::mergeSort(vector<bigNum> A, int startIndex, int endIndex){

    cout << "MERGESORT CALLED" << endl;

    // reset mid 

    // Base Case
    if (startIndex < endIndex){             // potential problem here
        int mid = startIndex+(endIndex-startIndex)/2;
        cout << "mid: " << mid << endl;

        // Recursively call mergeSort until down to individual element 
        mergeSort(A, startIndex, mid);
        mergeSort(A, mid + 1, endIndex);
        cout << "mergeSort done" << endl;
        mergeAll(A, startIndex, mid, endIndex);
    }

// END
}

void bigNumSort::mergeAll(vector<bigNum> A, int startIndex, int mid, int endIndex){

    cout << "MERGE CALLED" << endl;

    int ii, jj, kk;
    int leftSize = mid - startIndex + 1;       
    int rightSize = endIndex - mid; 

       // Itialize Temporary arrays LEFT[] and RIGHT[]
    bigNum LEFT[leftSize], RIGHT[rightSize];

    for (ii = 0; ii < leftSize; ii++){
        LEFT[ii] = A[startIndex + ii];
    }
    for (jj = 0; jj < rightSize; jj++){
        RIGHT[jj] = A[mid + 1 + jj];
    }

// COUT LEFT AND RIGHT
    cout << "LEFT: [ ";                   
    for (int jj=0; jj < leftSize; jj++)
        cout << LEFT[jj] << " ";
    cout << "] " << endl;

    cout << "RIGHT: [ ";                   
    for (int jj=0; jj < rightSize; jj++)
        cout << RIGHT[jj] << " ";
    cout << "] " << endl;

    ii = 0; // Initial index of first subarray
    jj = 0; // Initial index of second subarray
    kk = startIndex; // index of merged array

    // Merge LEFT[] and RIGHT[] back into A[]
    while ((ii < leftSize) && (jj < rightSize)){  
        if (LEFT[ii] <= RIGHT[jj]){
            A[kk] = LEFT[ii];
            ii++;
        }
        else{
            A[kk] = RIGHT[jj];
            jj++;
        }  
        kk++;
    }

    while (ii < leftSize){
        A[kk] = LEFT[ii];
        ii++;
        kk++;
    }
    while (jj < rightSize){
        A[kk] = RIGHT[jj];
        jj++;
        kk++;
    }


    // Copy data to from A[] back to data[]
    cout << "FINAL: [ ";                   
    for (int jj=0; jj < A.size(); jj++){
    data[jj] = A[jj];
    cout << data[jj] << " ";
    }
    cout << "] " << endl;




}


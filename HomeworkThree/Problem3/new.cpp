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

    // Base Case
    if (startIndex < endIndex){             // potential problem here
        int mid = startIndex+(endIndex-startIndex)/2;
        cout << "mid: " << mid << endl;

        // Recursively call mergeSort until down to individual element 
        mergeSort(A, startIndex, mid);
        cout << "m1" << endl;
        mergeSort(A, mid + 1, endIndex);
        cout << "m2" << endl;
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

    // Copy data to LEFT[] and RIGHT[]
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
        cout << A[jj] << " ";
    }
    cout << "] " << endl;




}


///////////////////////////////////
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

    if ( startIndex < endIndex ){
        int mid = ((startIndex+endIndex)/2);
        mergeSort(A,startIndex, mid);
        mergeSort(A, endIndex, mid);
        mergeAll(A, startIndex, endIndex);
    }

}

void bigNumSort::mergeAll(vector<bigNum> A, int startIndex, int endIndex){
    cout << "MERGE CALLED" << endl;

    int mid = ((startIndex + endIndex) / 2);
    int ii = 0;
    int jj = startIndex; 
    int kk = mid+1;

    // Temp array
    bigNum temp[endIndex - startIndex + 1];

    // Merge in sorted form the 2 arrays
    while ( jj <= mid && kk <= endIndex ){
        if (A[jj] <= A[kk]){ 
            temp[ii] = A[jj];
            cout << "temp: " << temp[ii] << endl;
            ii++;
            jj++;
        }
        else{
            temp[ii] = A[kk];
            cout << "temp: " << temp[ii] << endl;
            ii++;
            kk++;
        }
    }
    // Merge remaining elements in left array
    while (jj <= mid){
        temp[ii++] = A[jj++];
    }

    // Merge remaining elements in right array
    while (kk <= endIndex){
        temp[ii++] = A[kk++];
    }
    
    // Move from temp array to A array

    int mm;
    int nn;

    for (mm = startIndex; mm <= endIndex; mm++){
        data[mm] = temp[mm-startIndex];
    }
    /* Move from temp array to A array
    for (nn = 0; nn <= data.size(); nn++){
        data[nn] = A[nn];
    }*/

}

///////////////////////////////// 148AM ////////////////////////
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



void bigNumSort::mergeSort(vector<bigNum> A, int startIndex, int endIndex){

    cout << "MERGESORT CALLED" << endl;

    if ( startIndex < endIndex ){
        int mid = ((startIndex+endIndex)/2);
        mergeSort(A,startIndex, mid);
        mergeSort(A, endIndex, mid);


        cout << "A: [ ";                   // Successful Copy of Data
        for (int kk=0; kk < A.size(); kk++)
            cout << A[kk] << " ";
        cout << "] " << endl;

        mergeAll(A, startIndex, mid, endIndex);
        
    }


}

void bigNumSort::mergeAll(vector<bigNum> A, int startIndex, int mid, int endIndex){
    cout << "MERGE CALLED" << endl;

    bigNum* leftArray = NULL;
    bigNum* rightArray = NULL;
    int i, j, k;

    int n1 = mid - startIndex + 1;
    int n2 = endIndex - mid;
    leftArray = new bigNum[n1];
    rightArray = new bigNum[n2];

    for (i = 0; i < n1; i++){
        leftArray[i] = A[startIndex + i];
    }
    for (j = 0; j < n2; j++){
        rightArray[j] = A[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = startIndex;

    while (i < n1 && j < n2){
        if (leftArray[i] <= rightArray[j]){
            A[k] = leftArray[i];
            i++;
        }
        else{
            A[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while ( i < n1){
        A[k] = leftArray[i];
        i++;
        k++;
    }
    while ( j < n2){
        A[k] = rightArray[j];
        j++;
        k++;
    }

    cout << "LEFT: [ ";                   // Successful Copy of Data
    for (int zz = 0; zz < n1; zz++)
        cout << leftArray[zz] << " ";
    cout << "] " << endl;

    cout << "RIGHT: [ ";                   // Successful Copy of Data
    for (int yy = 0; yy < n2; yy++)
        cout << rightArray[yy] << " ";
    cout << "] " << endl;

    cout << "A: [ ";                   // Successful Copy of Data
    for (int kk=0; kk < A.size(); kk++)
        cout << A[kk] << " ";
    cout << "] " << endl;

    delete [] leftArray;
    delete [] rightArray;


}

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

    mergeSort(A, 0, (A.size() - 1));

    cout << endl << "copying now..." << endl;

    cout << "A: [ ";                   // Successful Copy of Data
    for (int yy =0; yy < A.size(); yy++)
        cout << A[yy] << " ";
    cout << "] " << endl;
    //copy
    for (int mm = 0; mm < data.size(); mm++){
        data[mm] = A[mm];
    }
    cout << "DATA: [ ";                   // Successful Copy of Data
    for (int zz = 0; zz < data.size(); zz++)
        cout << data[zz] << " ";
    cout << "] " << endl;
    

}

// SUCCESSFULL;
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

    int length = data.size();
    bigNum A[length];

    // convert data to array of bigNums
    for (int ss = 0; ss < data.size(); ss++){
        A[ss] = data[ss];
    }

    cout << "DATA: [ ";                  // Prove data was successfully copied
    for (int jj=0; jj < data.size(); jj++)
        cout << data[jj] << " ";
    cout << "] " << endl;
    
    cout << "A: [ ";                   // Prove data was successfully copied
    for (int jj=0; jj < length; jj++)
        cout << A[jj] << " ";
    cout << "] " << endl;

    mergeSort(A, 0, length - 1);

    // Produce final array, correctly sorted
    cout << endl << "producing sorted array..." << endl;

    //copy A[] to data[]
    cout << "NEW DATA: [ ";                   
    for (int zz = 0; zz < data.size(); zz++){
        data[zz] = A[zz];
        cout << data[zz] << " ";
    }
    cout << "] " << endl;
    

}


void bigNumSort::mergeSort(bigNum A[], int startIndex, int endIndex){

    cout << "MERGESORT CALLED" << endl;

    int length = data.size();

    // recursive call mergesort
    if ( startIndex < endIndex ){
        int mid = ((startIndex+endIndex)/2);
        mergeSort(A,startIndex, mid);
        mergeSort(A, endIndex, mid);

    cout << "A: [ ";                   // Successful Copy of Data
    for (int kk=0; kk < length; kk++)
        cout << A[kk] << " ";
    cout << "] " << endl;

        mergeAll(A, startIndex, mid, endIndex);
        
    }


}

void bigNumSort::mergeAll(bigNum A[], int startIndex, int mid, int endIndex){
    cout << "MERGE CALLED" << endl;

    int length = data.size();


    bigNum* leftArray = NULL;
    bigNum* rightArray = NULL;
    int i, j, k;

    int n1 = mid - startIndex + 1;
    int n2 = endIndex - mid;
    leftArray = new bigNum[n1];
    rightArray = new bigNum[n2];

    for (i = 0; i < n1; i++){
        leftArray[i] = A[startIndex + i];
    }
    for (j = 0; j < n2; j++){
        rightArray[j] = A[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = startIndex;

    while (i < n1 && j < n2){
        if (leftArray[i] <= rightArray[j]){
            A[k] = leftArray[i];
            i++;
        }
        else{
            A[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while ( i < n1){
        A[k] = leftArray[i];
        i++;
        k++;
    }
    while ( j < n2){
        A[k] = rightArray[j];
        j++;
        k++;
    }

    cout << "LEFT: [ ";                   // Successful Copy of Data
    for (int zz = 0; zz < n1; zz++)
        cout << leftArray[zz] << " ";
    cout << "] " << endl;

    cout << "RIGHT: [ ";                   // Successful Copy of Data
    for (int yy = 0; yy < n2; yy++)
        cout << rightArray[yy] << " ";
    cout << "] " << endl;

    cout << "A after merge: [ ";                   // Successful Copy of Data
    for (int kk=0; kk < length; kk++)
        cout << A[kk] << " ";
    cout << "] " << endl;

    delete [] leftArray;
    delete [] rightArray;
}






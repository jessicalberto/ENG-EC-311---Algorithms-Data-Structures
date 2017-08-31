//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#ifndef TESTING_BIGNUMSORT_H
#define TESTING_BIGNUMSORT_H

#include "genericSort.h"
#include "bigNum.h"

class bigNumSort : public genericSort<bigNum> {
public:
    void performSort();
    void mergeSort(genericSort<bigNum>, int, int);
    void mergeAll(genericSort<bigNum>, int, int, int);
};



#endif //TESTING_BIGNUMSORT_H

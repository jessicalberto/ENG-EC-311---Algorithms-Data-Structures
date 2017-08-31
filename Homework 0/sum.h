/**
** Created by Ari Trachtenberg on 1/23/17.
 *
 * The comments in this header are loosely based on the [[http://en.wikipedia.org/wiki/Javadoc][Javadoc]] documentation framework.
**/

#ifndef HW02B_SUM_H_H
#define HW02B_SUM_H_H
#include <vector>

namespace StudentNameSpace {
    using namespace std;

    /**
     * @param nums An array of integers, each no less than 3
     * @return the sum closest to 330 that can be made from adding up to three integers in the provided array
     *
     * @example: If [nums] contains [10 100 200 3], returns 310 = 200+100+10.
     * @example: If [nums] contains [10 100 230 3], returns 330 = 100+230.
     */
    int sum(vector<int> nums);
}

#endif //HW02B_SUM_H_H
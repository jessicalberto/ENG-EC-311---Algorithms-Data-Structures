#include <iostream> 
#include <vector> 
#include <time.h>
#include <deque>
#include <list>
#include <set>
using namespace std;

template<typename T>
long funcA(T container, int NN) {
    // insert numbers 0..NN-1 into the container
    container.clear();
    for (int ii=0; ii<NN; ii++)
        container.insert(container.begin(), ii);
 
    // computer the sume of the numbers
    long sum=0;
    typename T::reverse_iterator iter=container.rbegin();
    for (; iter!=container.rend(); iter++)
        sum += *iter;
    return sum;
}

int main(){ // VECTOR

    int input; 
    cout << "Enter number: ";
    cin >> input;
    vector <int> vectorName; 
    timespec ts_beg, ts_end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_beg);
    funcA(vectorName, input); // call template w/ vector <int>
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_end);

    float val =  (ts_end.tv_sec - ts_beg.tv_sec) + (ts_end.tv_nsec - ts_beg.tv_nsec) / 1e9;
    cout << "Vector Run Time: " << val*(1e6) << " microseconds" << endl;
    //Output run time in seconds
    cout << "Vector Run Time: " << val << " seconds" << endl;
    long x = funcA(vectorName, input); 
    cout << "Sum is: " << x << endl;
    return 0;
}

/*
int main(){ // DEQUE

    int input; 
    cout << "Enter number: ";
    cin >> input;
    deque<int> dequeName; 
    timespec ts_beg, ts_end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_beg);
    funcA(dequeName, input); // call template w/ vector <int>
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_end);

    float val =  (ts_end.tv_sec - ts_beg.tv_sec) + (ts_end.tv_nsec - ts_beg.tv_nsec) / 1e9;
    cout << "Deque Run Time: " << val*(1e6) << " microseconds" << endl;
    cout << "Deque Run Time: " << val << " seconds" << endl;
    // return sum;
    long x = funcA(dequeName, input); 
    cout << "Sum is: " << x << endl;
    return 0;
}
*/
/*
int main(){ // LIST

    int input; 
    cout << "Enter number: ";
    cin >> input;
    list<int> listName; 
    timespec ts_beg, ts_end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_beg);
    funcA(listName, input); // call template w/ vector <int>
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_end);

    float val =  (ts_end.tv_sec - ts_beg.tv_sec) + (ts_end.tv_nsec - ts_beg.tv_nsec) / 1e9;
    cout << "List Run Time: " << val*(1e6) << " microseconds" << endl;
    cout << "List Run Time: " << val << " seconds" << endl;
    // return sum;
    long x = funcA(listName, input); 
    cout << "Sum is: " << x << endl;
    return 0;
}
*/

/*
int main(){ // SET

    int input; 
    cout << "Enter number: ";
    cin >> input;
    set<int> setName; 
    timespec ts_beg, ts_end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_beg);
    funcA(setName, input); // call template w/ vector <int>
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts_end);

    float val =  (ts_end.tv_sec - ts_beg.tv_sec) + (ts_end.tv_nsec - ts_beg.tv_nsec) / 1e9;
    cout << "Set Run Time: " << val*(1e6) << " microseconds" << endl;
    cout << "Set Run Time: " << val << " seconds" << endl;
    // return sum;
    long x = funcA(setName, input); 
    cout << "Sum is: " << x << endl;
    return 0;
}
*/

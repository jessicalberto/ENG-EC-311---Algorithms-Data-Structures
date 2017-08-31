/*


// RADIX SORT
void bigNumSort::performSort() {
// GET MAX ////////////////////////
    // Find Max of array
    bigNum maxNum = this->data[0]; // check above answer for this pointer
    for (int i=1; i < data.size(); i++){
        if (this->data[i] > maxNum)
            maxNum = this->data[i];
    }

    for (bigNum exp = 1; maxNum/exp > 0; exp*= 10){
/// COUNT SORT //////////////////
    int j = 0;
    bigNum exp = 0;
    bigNum output[data.size()];

    // empty array of 0's for decimal decimalCount
    int i, decimalCount[10] = {0};
    for (i = 0; i < data.size(); i++){
        decimalCount[(data[i]/exp) % 10]++;
    }
    for (i =1; i < 10; i++){
        decimalCount[i] += decimalCount [i-1];
    }
    for (i = data.size()-1; i>=0; i--){
        output[decimalCount[(arr[i] / exp) % 10] - 1] = arr[i];
        decimalCount[(data[i] / exp) % 10]--;
    }

    for (i = 0 ; i < data.size(); i++){
        data[i] = output[i];
       }
    }        
}



    // Loop for each decimal place
    int digitCount = 0;
    while (maxNum > 0){
        digitCount++;
        maxNum = maxNum/10;
    }

    int passCount = 0;

    for (passCount = 0; passCount < digitCount; passCount++){
      for (int k = 0; k < data.size; k++){

        }


    }
  


// A simple implementation of radix sort 

    // Find Max Value
    bigNum maxNum = data[0];
    for (char ii = 0; ii < data.size(); ii++){
        if (maxNum <= data[ii])
            maxNum = data[ii];
    }
    cout << "maxNum: " << maxNum << endl;

    // 2. Figure out number of digits the greatest number has 
    // This will determine the number of passes
    stringstream ss;
    ss << maxNum;
    string str = ss.str();
    int digit = str.length();
    cout << "digit: " << digit << endl;
/*
    bigNum num = 32;


    bigNum output[data.size()];


    bigNum yes = data[1];
    cout << "yes: " << endl;
    cout << "yes first element: " << yes[0] << endl;
    cout << "yes second element: " << yes[1] << endl;
    cout << "yes third element: " << yes [2] << endl;

    bigNum num = data[1];
    cout << "num: " << num << endl;

    cout << num.length() << endl;
 */
    //bigNum *b = new bigNum [data.size()]();

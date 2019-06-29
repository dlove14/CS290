/*********************************************************************
** Author: Danielle Love
** Date: 5/2/19
** Description: This recursive function accepts an array of doubles and the size of the array as parameters. It returns
 * the sum of the values in the array.
*********************************************************************/

#include <iostream>
using std::cout;
using std::endl;
//
//int main() {
//
//    bool isDecreasing (int myArray [], int sizeofArray);
//
//    int testArray [3] = {200, 50, 100};
//    int test = isDecreasing(testArray, 3);
//
//    cout << test;
//
//}

bool isDecreasing (int myArray [], int sizeOfArray) {

    if (sizeOfArray < 2)
        return true;

    int varIsDecreasing;

    if (myArray[sizeOfArray - 1] < myArray[sizeOfArray - 2])
        varIsDecreasing = 1;
    else
        varIsDecreasing = 0;

    return varIsDecreasing * isDecreasing(myArray, sizeOfArray - 1);
}

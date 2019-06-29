/*********************************************************************
** Author: Danielle Love
** Date: 5/2/19
** Description: This recursive function accepts an array of ints and the size of the array, and then returns the maximum
 * value in that array.
*********************************************************************/

#include <iostream>
using std::cout;
using std::endl;

//
//int main() {
//
//    int arrayMax (int array [], int size);
//
//    int testArray [6] = {10, 500, 201, 50000, 99999990, 2000000000};
//    int test = arrayMax(testArray, 6);
//
//    cout << test;
//
//}

int arrayMax (int myArray [], int sizeOfArray)
{
    int largestNumber = 0;

    if (sizeOfArray < 1) //base case to end recursion
        return largestNumber;

    largestNumber = arrayMax(myArray, sizeOfArray -1);

    if (myArray[sizeOfArray - 1] > largestNumber)
        largestNumber = myArray [sizeOfArray -1];


    return largestNumber;
}
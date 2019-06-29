/*********************************************************************
** Author: Danielle Love
** Date: 5/2/19
** Description: This recursive function accepts an array of doubles and the size of the array as parameters. It returns
 * the sum of the values in the array.
*********************************************************************/

#include <iostream>
using std::cout;
using std::endl;


/*int main()
{

    double summer (double array [], int size);

    double testArray [3] = {1, 3, 4};

    double test = summer(testArray, 3);

    cout << test;

}*/



double summer(double myArray [], int sizeOfArray)
{

    if (sizeOfArray <1) //base case to end recursion
        return 0;

    return myArray[sizeOfArray - 1] + summer(myArray, sizeOfArray -1); //get last value of array and call function with smaller sub-array, excluding that last value

}
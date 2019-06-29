/*********************************************************************
** Author: Danielle Love
** Date: 5/2/19
** Description: This function takes in a vector of integers as its only parameter. The vector is a puzzle with a token that
 * needs to move to the right most value in order to be solved, moving left or right a number of times depending on the value
 * of the vector that it is currently in. The function will return true if the puzzle is solveable or false otherwise.
*********************************************************************/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

//int main ()
//{
//bool vectorPuzzle (int position, vector <int> vector, int size); //function prototypes
//bool vectorPuzzle (vector <int> vector); //function prototypes
//
//
//vector <int> testVector = {1, 3, 2, 1, 3, 4, 0};
//vector <int> testVector = {2, 4, 5, 3, 1, 3, 4, 0};
//vector <int> testVector = {2, 4, 1, 3, 7, 0};
//
//cout << vectorPuzzle (testVector);
//}


//recursive function
bool vectorPuzzle (vector <int> myVector, int sizeOfVector, int position)
{

    if (position == sizeOfVector -1) //base case, where puzzle has been solved
        return true;

    else if
            (position < 0 || position > sizeOfVector -1 || myVector [position] == -1) //base case, where puzzle cannot be solved (is out of bounds or repeating)
        return false;

    else
    {
        int currentValue = myVector [position];
        myVector [position] = -1; //negative to keep track of where token has been

        bool solved = vectorPuzzle(myVector, sizeOfVector, position + currentValue) || vectorPuzzle(myVector, sizeOfVector, position -currentValue);
        //myVector [position] = currentValue;

        return solved;
    }

}


//helper function
bool vectorPuzzle (vector <int> myVector)
{

    int size = myVector.size();


    return vectorPuzzle(myVector, size, 0);

}

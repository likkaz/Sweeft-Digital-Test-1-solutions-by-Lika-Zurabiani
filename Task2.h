
#include <iostream>
using namespace std;

int coins[] = { 1,5,10,20,50 };
int tempArray[2000] = { 0 };   // creating temporary array
int minSplit(int element)
{
    int numElements = 5;
    for (int i = 0;i <= element;i++)
        tempArray[i] = INT_MAX;

    tempArray[0] = 0;

    for (int i = 1;i <= element;i++) 
        /* going through in this  loop for various sum values ranging from 1 to N,
        because our final answer for sum = element could be influenced by any of these numbers.*/
    {
        
        for (int j = 0;j < numElements;j++)
        {
            
            if (coins[j] <= i)
            {
            
                tempArray[i] = min(tempArray[i], 1 + tempArray[i - coins[j]]);
            }
        }
    }
    return tempArray[element];
}


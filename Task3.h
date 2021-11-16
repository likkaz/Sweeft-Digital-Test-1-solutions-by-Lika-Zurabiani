#include <iostream>
using namespace std;

int n;
int notContains(int arr[])
{

    // traversing 
    for (int i = 0; i < n; i++) {

        //  swapping condition
        while (arr[i] >= 1 && arr[i] <= n
            && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

        for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    
    return n + 1;
}


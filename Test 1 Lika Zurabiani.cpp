// Test 1 Lika Zurabiani.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include <bits/stdc++.h>
#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
#include "Task6.h"
using namespace std;


int main()
{    //task 1
    cout << "Task 1\n";
    cout << isPalindrome("kayak ");
    cout << "\n***************\n\n";


    //task  2
    cout << "Task 2\n";
    cout << "minimum number of coins for 80 Tetri:\n";
    cout << minSplit(80);
    cout << "\n***************\n\n";


    //task 3
    cout << "Task 3\n";
    cout << "Minimum positive integer given array does not include is: \n";
    int arr[] = { 2, 3, -13, 4, 9, 1, -1, 55 };
    n = sizeof(arr) / sizeof(arr[0]);
    cout << notContains(arr);
    cout << "\n***************\n\n";



    //task 4
    cout << "Task 4\n";
    if (isProperly("(()())"))
        cout << "Given expression is mathematically correct";
    else
        cout << "Given expression is mathematically  incorrect";
    cout << "\n***************\n\n";


    //task 5 
    cout << "Task 5\n";
    cout << "Number of ways to climb 10 stairs is:\n";
    cout << countVariants(10);
    cout << "\n***************\n\n";
 


    //task 6
    cout << "Task 6\n";
    myStructure task6;
    task6.add(10);
    task6.add(30);
    task6.add(70);
    task6.remove(30);
    task6.add(50);
    cout << "index of 50 :\n";
    cout << task6.search(50);
    cout << "\n***************\n\n";


    return 0;
}




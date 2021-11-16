#include <iostream>
using namespace std;


// using fibonacci approach
int fib(int n) {
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int countVariants(int stairsCount)
{
	return fib(stairsCount + 1);
}



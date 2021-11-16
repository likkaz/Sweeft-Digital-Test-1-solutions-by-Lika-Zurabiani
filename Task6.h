#include <iostream>
using namespace std;
#include <vector>
#include <map>

// creating data structure which will delete any element in O(1) time complexity.
class myStructure
{
		vector <int> arr;
		map <int, int> Map; // here values are index indicators in array and keys are array elements

public:
	
	void add(int x) // in order to remove something, first I'll try to insert elements.

	{
		if (Map.find(x) != Map.end())
			return;
					
		int index = arr.size();
		arr.push_back(x);

		Map.insert(pair<int, int>(x, index));
	}

	
	void remove(int x) // deleting element
	{
		if (Map.find(x) == Map.end())
			return;

		int index = Map.at(x);
		Map.erase(x);

		// Swapping to make sure the last element can be removed in O(1) time. 
		int last = arr.size() - 1;
		swap(arr[index], arr[last]);
		arr.pop_back();

		Map.at(arr[index]) = index; 
	}

	int search(int x) // this will return indexes of current elements
	{
		if (Map.find(x) != Map.end())
			return Map.at(x);
		return -1;
	}


};





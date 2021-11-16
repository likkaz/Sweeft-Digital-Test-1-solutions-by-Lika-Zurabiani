#include <iostream>
#include <stack>
using namespace std;


bool isProperly(string sequence)
{
	stack<char> s;
	char x;

	// Traversing the sequenceession
	for (int i = 0; i < sequence.length(); i++)
	{
		if (sequence[i] == '(')
		{
			// Pushing element in the stack
			s.push(sequence[i]);
			continue;
		}

		if (s.empty())
			return false;

		if (sequence[i] == ')') {

			x = s.top();
			s.pop();

		}


	}

	return (s.empty());
}


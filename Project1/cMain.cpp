#include "Stack.h"
using namespace std;

int main() {
	Stack stack;
	for (int i = 0; i <= MaxCount; i++)
	{
		if (stack.Push(i)) //0,1,2,3,4,
		{
			cout << i  << endl;
		}
		else // 5
		{
			cout << i  << endl;
		}
	}

	int num = stack.Top(); // 4
	cout << num  << endl;
	stack.Pop();

	num = stack.Top(); // 3
	cout << num  << endl;
	stack.Pop();

	num = stack.Count(); // 3
	cout  << num  << endl;

	if (!stack.IsEmpty())// stack에 3개가 있어서 == true
	{

		stack.Clear(); // 자료 날라감
	}

	num = stack.Count(); // 0
	cout  << num  << endl;

	return 0;
}
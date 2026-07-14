#include "Stack.h"
using namespace std;

int main() {
	Stack stack;
	cout <<"\nisEmpty? " << stack.IsEmpty() << endl;
	stack.Push(1);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Push(2);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Push(3);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	cout << "\ncount? " << stack.Count() << endl;
	stack.Push(4);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Push(5);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	cout << "\nisEmpty? " << stack.IsEmpty() << endl;
	stack.Clear();
	stack.Print();
	stack.Push(1);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Push(2);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Push(3);
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Pop();
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Pop();
	stack.Print();
	cout << "\ntop? " << stack.Top() << endl;
	stack.Pop();
	stack.Print();
	stack.Pop();
	stack.Print();

	cout << "\nisEmpty? " << stack.IsEmpty() << endl;
	return 0;
}
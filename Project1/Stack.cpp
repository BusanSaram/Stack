#include "Stack.h"

void Stack::Clear()
{
	if (index == 0) {
		return;
	}
	else {
		for(int i = index; i > 0; i--) {
			data[i] = 0;
		}
		index = 0;
	}
}

int Stack::Count()
{
	return index;
}

bool Stack::IsEmpty()
{
	if (index == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Stack::Push(int _data)
{
	if (index == MaxCount) {
		return false;
	}
	else {
		data[index] = _data;
		index++;
	}
	return true;
}

void Stack::Pop()
{
	if (index != 0) {
		index--;
		data[index] = 0;
	}
}

int Stack::Top()
{
	return data[index-1];
}


Stack::Stack()
{
}

Stack::~Stack()
{
}

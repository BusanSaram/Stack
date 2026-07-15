#include "Stack.h"

void Stack::Clear()
{
		for(int i = 0; i < index; i++) {
			data[i] = 0;
		}
		index = 0;

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
	if (index < MaxCount) {
		data[index] = _data;
		index++;
		return true;
	}
	return false;
}

void Stack::Pop()
{
	if (index != 0) {
		index--;
		data[index] = 0;   // 이제 index는 유효 범위 안 (0 ~ MaxCount-1)
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

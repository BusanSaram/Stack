#include "Stack.h"

Stack::Stack(int _capacity)
{
	capacity = _capacity;
	data = new int[capacity];
	index = 0;
}

Stack::~Stack()
{
	delete[] data;
}

void Stack::Resize()
{
	int newCapacity = capacity * 2;
	int* newData = new int[newCapacity];
	for (int i = 0; i < index; i++) {
		newData[i] = data[i];
	}
	delete[] data;
	data = newData;
	capacity = newCapacity;
}

void Stack::Clear()
{
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
	if (index == capacity) {
		Resize();
	}
	data[index] = _data;
	index++;
	return true;
}

void Stack::Pop()
{
	if (index != 0) {
		index--;
	}
}

int Stack::Top()
{
	return data[index-1];
}

void Stack::Print()
{
	cout << "\nStack" << endl;
	for(int i = 0; i< index; i++){
		cout<< data[i] << endl;
	}
}


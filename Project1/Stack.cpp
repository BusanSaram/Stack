#include "Stack.h"

Stack::Stack(int _capacity)
{
	capacity = _capacity;
	data = new int[capacity];
	index = 0; // 어차피 capacity와 다르게 index는 값이 있냐 없냐를 판단하는 용도이므로 0으로 초기화
}

Stack::~Stack()
{
	delete[] data;// data는 배열이니까 앞에 []을 쓴다.
}


void Stack::Resize()
{
	int newCapacity = capacity * 2;// 2배로 늘이는 것이 시간복잡도에 좋다. 하나씩 늘리면 시간복잡도가 O(n^2)가 되지만 2배로 늘리면 O(n)이다.
	int* newData = new int[newCapacity];

	for (int i = 0; i < index; i++){
		newData[i] = data[i];
	}

	delete[] data;
	data = newData;
	capacity = newCapacity;
}

void Stack::Clear()
{
	index = 0;
	/* 어차피 값을 덮어쓰기 때문에 굳이 0으로 초기화할 필요가 없다.
	for (int i = 0; i < capacity; i++) {
		data[i] = 0;
	}
	*/
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
	//resize후에 바로 다시 값을 넣어주기 때문에 if문 밑에 data[index] = _data; index++; return true; 를 넣어주면 된다.
}

void Stack::Pop()
{
	if (index != 0) {
		//data[index] = 0; 이것도 어차피 덮어쓰기 때문에 굳이 0으로 초기화할 필요가 없다.
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


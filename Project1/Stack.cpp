#include "Stack.h"

Stack::~Stack() {
	Clear();
}

void Stack::Clear()
{
	if (index == 0) {
		return;
	}
	else {
		for (int i = 0; i < index; i++) {
			data[i] = 0;
		}
		delete[] data;
		index = 0;
	}
}

int Stack::Count()
{
	return index;
}

bool Stack::IsEmpty()
{
	return index == 0;
}

bool Stack::Push(int _data)
{
	index++;
	int* newNode = new int[index]; // 1칸 늘리고 배치
	newNode[index - 1] = _data; // 만약에 늘리고 5칸이 있다고 하면, 0,1,2,3,4이고 index는 5이므로 5-1 = 4이고 그래서 newNode[index - 1] = _data; 맨 마지막 칸에 _data를 넣음
	if (data == nullptr) {
		data = newNode; // 만약에 1칸 늘리고 아무것도 없다면 바로 data에 넣어도 된다.
	}
	else {
		for (int i = 0; i < index - 1; i++) {
			newNode[i] = data[i]; //하지만 data안에 값이 하나라도 있으면 data 안에 있는 모든 값들은 싹다 넣는다.
		}
		delete[] data; //그리고 메모리 누수때문에 delete하고
		data = newNode; // data에 다시 newNode를 넣는다.
	}
	return true;
}

void Stack::Pop()
{
	if (index == 0) { // 0인지 체크 
		return;
	}
	index--; //빼고 
	if (index == 0) { // 0인지 체크 
		delete data; 
		data = nullptr; // 0이면 메모리 정리
	}
	else{ // 아니면 
		int* newNode = new int[index]; // 새노드 만들어서
		for (int i = 0; i < index; i++) {
			newNode[i] = data[i]; //data에 있는 것을 임시적으로 넣고
		}
		delete[] data; //data 없애고 
		data = newNode; // 새노드 연결
	}
}

int Stack::Top()
{
	return data[index-1];
}



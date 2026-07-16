#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
	int* data = nullptr;
	int index = 0;
public:
	void Clear(); // 모두 초기화
	int Count(); // 현재 stack에 쌓여진 데이터 개수 
	bool IsEmpty(); // 비워져 있는지 확인
	bool Push(int _data); // 데이터를 추가
 	void Pop(); // 맨 위 데이터를 제거
	int Top(); // 맨위 값을 반환
public:
	~Stack();
};


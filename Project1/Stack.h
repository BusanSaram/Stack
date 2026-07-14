#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5 

class Stack
{
private:
	int data[MaxCount] = {};
	int index = 0;
public:
	void Clear(); // 모두 초기화
	int Count(); // 현재 stack에 쌓여진 데이터 개수 
	bool IsEmpty(); // 비워져 있는지 확인
	bool Push(int _data); // 데이터를 추가
 	void Pop(); // 맨 위 데이터를 제거
	int Top(); // 맨위 값을 반환
	void Print(); // stack에 쌓여진 데이터 출력
public:
	Stack(); // 생성자 
	~Stack(); //소멸자
};


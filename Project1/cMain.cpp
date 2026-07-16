#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<int> numbers;

	numbers.push(1);
	numbers.push(2);
	numbers.push(3); // LIFO
	
	//그래서 top에서 나중에 들어온 순서대로 pop이 된다
	for (int i = 0; i < 3; i++) {
		cout << numbers.top() << endl;
		numbers.pop();
	}
	
	return 0;
}
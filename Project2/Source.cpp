#include "Stack.h"
#include "Stack.cpp"

int main() {
	Stack<int> s;
	s.push(3);
	s.push(5);

	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.empty() << endl;


	//while (!s.empty()) {
	//	cout << s.top() << endl;
	//	s.pop();
	//}
	system("pause");
	return 0;
}
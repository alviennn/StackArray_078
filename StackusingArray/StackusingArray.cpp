#include <iostream>
#include <string>

using namespace std;
class StackArray {
private:
	int stack_array[5];
	int top;

public:
	// constructor
	StackArray() {
		top = -1;
	} 
	int push(int element) {
		if (top == 4) {
			cout << "Member of data exceed the limit" << endl;
			return 0;
		}

		top++; // step 2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahakan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1a
			return; //1b
		}
	}
};
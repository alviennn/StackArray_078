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
};
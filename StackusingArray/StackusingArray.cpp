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
	void push() {
		int element;
		cout << "Enter an Element : ";
		cin >> element;
		if (top == 4) {
			cout << "Member of data exceed the limit" << endl;
			return ;
		}

		top++; // step 2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahakan(pushed)" << endl;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1a
			return; //1b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step2
		top--;
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray data;
	char ch;

	while (true) {
		cout << endl << "MENU";
		cout << endl << "1. Push Data";
		cout << "2. Pop Data" << endl;
		cout << "3. Display" << endl;
		cout << "4. EXIT" << endl;
		cout << "Enter your choice";
		cin >> ch;

		switch (ch) {
		case '1': {
			
			s.push();
			break;
		}
		case'2':
			if (s.empty()) {

			}
		}

	}

}
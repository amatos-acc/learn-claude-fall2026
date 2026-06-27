#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	if (b == 0) {
		cout << "Error: Cannot divide by 0.\n";
		return 0;
	}

	return a / b;
}

int main() {
	int num1;
	int num2;
	string op;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Enter your operation (+,-,*,/): ";
	cin >> op;

	if (op == "+") {
		cout << "Result: " << add(num1, num2) << "\n";
	} else if (op == "-") {
		cout << "Result: " << subtract(num1, num2) << "\n";
	} else if (op == "*") {
		cout << "Result: " << multiply(num1, num2) << "\n";
	} else {
		cout << "Result: " << divide(num1, num2) << "\n";
	}

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int multiply(int a, int b) {
	return a * b;
}

void greet(string name) {
	cout << "Hello " << name << "\n";
}

int main() {
	int result = multiply(3, 5);
	string name = "Alex";
	greet(name);
	cout << "Result: " << result;
	return 0;
}

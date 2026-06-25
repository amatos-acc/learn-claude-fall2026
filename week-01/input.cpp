#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	cout << "What is your name? ";
	getline(cin, name);
	cout << "Your name is: " << name;
	return 0;
}

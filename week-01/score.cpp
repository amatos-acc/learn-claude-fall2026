#include <iostream>

using namespace std;

int main() {
	int score;
	cout << "What is your test score? ";
	cin >> score;
	if (score >= 90) {
		cout << "You got an A on the test.";
	} else if (score >= 70) {
		cout << "You passed the test.";
	} else {
		cout << "You failed the test.";
	}
	return 0;
}

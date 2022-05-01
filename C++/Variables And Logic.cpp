#include <iostream>
#include <string>

using namespace std;

// for the most part this is the same if not simpler than base C

int main() {
	float num1, num2;
	cout << "Enter number one: ";
	cin >> num1;
	cout << "Enter number two: ";
	cin >> num2;

	float sum = num1 + num2;
	cout << "Sum is " << to_string(sum) << "\n";

	if (sum < 10) {
		cout << "Less than 10";
	}
	else {
		cout << "Greater than 10";
	}
	return 0;
}
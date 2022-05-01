#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "-----|| This is a small text adventure game written in C++ ||----- \nThis is just so I can learn file saving, if/else statements and logic \n";
	cout << "and just some general stuff, there will be a C port aswell\n\n";

	system("pause");

	string name;

	system("CLS");
	cout << " Enter Your Name Adventurer! -- ";
	getline(cin, name);

	cout << "Hello, " << name << "\n\n";

	system("pause");

	return 0;
}
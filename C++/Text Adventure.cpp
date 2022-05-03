#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// does the cool typewriter text effect
void typewriteLN(string text) {
	int length = text.size();
	for (int i = 0; i < length; i++)
	{
		cout << text[i];
		Sleep(30);
	}
}

int main() {
	cout << "-----|| This is a small text adventure game written in C++ ||----- \nThis is just so I can learn file saving, if/else statements and logic \n";
	cout << "and just some general stuff, there will be a C port aswell\n\n";

	system("pause");

	string name;

	system("CLS");
	cout << " Enter Your Name Adventurer! -- ";
	getline(cin, name);

	typewriteLN(("Hello, " + name + "! We are in great trouble!\n\n"));

	Sleep(1000);

	typewriteLN("You must travel accross the lands to defeat zalza, the evil demon king! \n");
	Sleep(700);
	typewriteLN("If this mission fails... we will surely be destroyed.");
	Sleep(500);
	typewriteLN(" now... ");
	Sleep(700);
	typewriteLN("let's start the perilous journey to cheri. \nThe city zalza rules...");
	cin.get();
	Sleep(5000);
	system("CLS");
	typewriteLN("You awake to a forest, this forest consists only of cherry blossoms"
		" \nand berry bushes, with snow in between your feet, snowflakes falling onto your nose");

	return 0;
}
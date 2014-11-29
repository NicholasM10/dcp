#include <iostream>
#include <string>

int sChoice();
void beepitfgt();
using namespace std;

string s; // string 0
// string s1; // string 1

bool helpUser = true;
int main()
{
	cout << "*** Welcome to  Dumb Console Program 0.0.1, please, type 'commands' for help. ***" << endl;
	cin >> s;
	sChoice();
}

int sChoice()
{
	while (true)
	{
		if (s == "commands" || s == "command" || s == "cmd" || s == "help" || s == "HELP ME RIGHT NOW!" || s == "heeeeeeeeeeeeeelp")
		{
			helpUser = true;
			cout << "COMMANDS: calculator, beep" << endl;
			cin >> s;
		}
		/////////////
		else if (s == "beep" || s == "beepit" || s == "Beep" || s == "BEEP" && helpUser == true) // "beep" COMMAND
		{
			for (int beepCounter = 0; beepCounter <= 2; beepCounter++)
			{
				cout << "\a" << endl;
			}
			cin >> s;
		}
		/////////////
		else if (s == "calculator" || s == "calc" || s== "Calculator" || s == "I need calculator" || s == "good calculator"
			|| "not dumb calculator" ) // Calculator
		{
			int calcNum1, calcNum2;
			int calcResult = 0;
			cout << "Welcome to DCP's great calculator 0.1" << endl;
			cout << "Enter first number!" << endl;
			cin >> calcNum1;
			cout << "Enter +, -, or *" << endl;
			cin >> s;
			cout << "Enter second number" << endl;
			cin >> calcNum2;
			if (s == "+")
			{
		   calcResult = calcNum1 + calcNum2;

		   
			}
			if (s == "-")
			{
				calcResult = calcNum1 - calcNum2;
			}

			if (s == "*")
			{
				calcResult = calcNum1 * calcNum2;
			}
			cout << "That would be... " << calcResult << endl;
		}

		else
		{
			cout << "What?!" << endl; // Unrecorgnised command
			cin >> s;
		}
	}
}
// function for beeping later.
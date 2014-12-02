#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
	START:
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
		else if (s == "calculator" || s == "calc" || s == "Calculator" || s == "I need calculator" || s == "good calculator"
			|| s == "not dumb calculator") // Calculator
		{
			int calcNum1, calcNum2;
			int calcResult = 0;
			cout << "Welcome to DCP's great calculator 0.1" << endl;
			cout << "Enter first number!" << endl;
			cin >> calcNum1;
			cout << "Enter +, -, *, or /" << endl;
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

			if (s == "/")
			{
				calcResult = calcNum1 / calcNum2;
			}
			cout << "That would be... " << calcResult << endl;
		}

		if (s == "randomsentence" || s == "randomSentence" || s == "RANDOMSENTENCE" || s == "say something") // This is what I was currently working on
		{
			int randomSentence = 1 + (rand() % 7);
			srand(time(0));
			for (int sentenceCounter = 0; sentenceCounter <= 2; sentenceCounter++)
			{
				switch (randomSentence)
				{
				case 1:
					cout << "Why do French have so many civil wars? So they can win one every now and again." << endl;
					break;
				case 2:
					cout << "Hervey spots a brown bear." << endl;
					break;
				case 3:
					cout << "I CAN'T COME UP WITH ANYTHING" << endl;
					break;
				case 4:
					cout << "use 'command' to see command list." << endl;
					break;
				case 5:
					cout << "Do not take life too seriously. You will never get out of it alive." << endl;
					break;
				case 6:
					cout << "DM DM DM FC FC FC FC" << endl;
					break;
				default:
					cout << "Alex Colette puts on his hat as he walks away." << endl;
				}
				//goto START;
				cin >> s;
			}
			
		}
		else
		{
			cout << "What?!" << endl; // Unrecorgnised command
			cin >> s;
		}
	}
	return 0;
}
// function for beeping later.
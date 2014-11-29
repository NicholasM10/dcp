#include <iostream>
#include "ConsoleColor.h"
#include <string>

int sChoice();
void beepitfgt();
using namespace std;

string s; // string 0
// string s1; // string 1

bool helpUser = true;
int main()
{
	cout << green << "*** Welcome to  Dumb Console Program 0.0.0, please, type 'commands' for help. ***" << endl;
	cin >> s; 
	sChoice();
}

int sChoice()
{
	{
	BEEP:
		while (true){
			if (s == "commands" || s == "command" || s == "cmd" || s == "help" || s == "HELP ME RIGHT NOW!" || s == "heeeeeeeeeeeeeelp")
			{
				helpUser = true;
				cout << green << "COMMANDS: calculator, beep" << endl; // Ignore calculator for now.
				cin >> s;
			}

			else if (s == "beep" || s == "beepit" || s == "Beep" || s == "BEEP" && helpUser == true)
			{
				for (int beepCounter = 0; beepCounter <= 2; beepCounter++){
					cout << "\a" << endl;
				}
				while (true)
				{
					cin >> s;
					goto BEEP;
				}
			}
			else
			{
				cout << red << "What?!" << endl;
				return 0;
			}
		}
		while (true)
		{
			system("PAUSE");
		}
	}
}
// function for beeping later.

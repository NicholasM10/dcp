#include <iostream>
#include "ConsoleColor.h"
#include <string>

int sChoice();
void beepitfgt();

using namespace std;

string s; // string 0
string s1; // string 1

boolean helpUser = false;
int main()
{
	cout << green << "*** Welcome to  Dumb Console Program 0.0.0, please, type 'commands' for help. ***" << endl;
	cin >> s; 
	sChoice();
}

int sChoice()
{
	
	{
		if (s == "commands" || s == "command" || s == "cmd" || s == "help" || s == "HELP ME RIGHT NOW!" || s == "heeeeeeeeeeeeeelp")
		{
			helpUser = true;
			cout << green << "COMMANDS: calculator, beep" << endl; // Ignore calculator for now.
		}
		else if (s == "beep" && helpUser == true)
		{
			while (helpUser == true)
			{
				cin >> s1;
			}
			for (int beepCounter = 0; beepCounter != 2; beepCounter++){
				cout << "\a" << endl;
				break;
			}
		}
		else 
		{
			cout << red << "What?!" << endl;
	
			while (true)
			{
				system("PAUSE");
			}
			return 0;
		}
	}
}

void beepitfgt()
{
	
}


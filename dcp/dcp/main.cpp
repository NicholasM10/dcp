#include <iostream>
#include "ConsoleColor.h"
#include <string>
int sChoice();
void beepitfgt();

using namespace std;

string s;
string s1;

int main()
{
	cout << green << "*** Welcome to  Dumb Console Program 0.0.0, please, type 'commands' for help. ***" << endl;
	cin >> s;
	sChoice();
	cin >> s1;
}

int sChoice()
{
	
	{
		if (s == "commands" || s == "command" || s == "cmd" || s == "help" || s == "HELP ME RIGHT NOW!" || s == "heeeeeeeeeeeeeelp")
		{

			cout << green << "COMMANDS: calculator, beep" << endl;

		}
		if (s == "beep") // Needs to be worked on.
		{
			for (int beepCounter = 0; beepCounter != 2; beepCounter++){
				cout << "\a" << endl;
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


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int sChoice();
int calculator();
void randomSentence();
void CommandMoney();

std::string s;
short money = 0;
short moneyTypedInCounter = 0;
bool helpUser = true;

int main()
{
	std::cout << "*** Welcome to  Dumb Console Program 0.1, please, type 'commands' for help. ***" << std::endl;
	std::cin >> s;
	sChoice();
}

int sChoice()
{
	while (true) {
		if (s == "commands" // commands
			|| s == "command"
			|| s == "cmd"
			|| s == "help"
			|| s == "heeeeeeeeeeeeeelp") {
			std::cout << "COMMANDS: calculator, beep, randomsentence, money, shop" << std::endl;
		}
		else if (s == "beep"
			|| s == "beepit"
			|| s == "Beep"
			|| s == "BEEP") {
			std::cout << "\a";
			std::cout << "*BEEP*" << std::endl;
		}
		else if (s == "calculator" // calculator
			|| s == "calc"
			|| s == "Calculator") {
			calculator();
		}
		else if (s == "randomsentence" //random sentence
			|| s == "randomSentence"
			|| s == "RANDOMSENTENCE") {
			randomSentence();
		}

		else if (s == "money"
			|| s == "balance"
			|| s == "mon"){
			CommandMoney();
		}

		else if (s == "shop"
			|| s == "buy")
		{
			std::cout << "Welcome to shop! here you can spend your money. (type \"money\" for more information)." << std::endl;
			std::cout << "Available items in shop: nothing." << std::endl;
		}

		else {
			std::cout << "What?! I don't know what the heck is " << "\"" << s << "\"." << std::endl;
		}
		std::cin >> s;
	}
	return 0;
}
int calculator()
{
	int calcNum1, calcNum2;
	int calcResult = 0;
	std::cout << "Welcome to DCP's great calculator 1.0" << std::endl;
	std::cout << "Enter first number!" << std::endl;
	std::cin >> calcNum1;
	std::cout << "Enter +, -, *, or /" << std::endl;
	std::cin >> s;
	std::cout << "Enter second number" << std::endl;
	std::cin >> calcNum2;
	if (s == "+")
		calcResult = calcNum1 + calcNum2;
	if (s == "-")
		calcResult = calcNum1 - calcNum2;
	if (s == "*")
		calcResult = calcNum1 * calcNum2;
	if (s == "/"){
		if (calcNum2 != 0)
			calcResult = calcNum1 / calcNum2;
		if (calcNum2 == 0)
			std::cout << "Can't divide 0!" << std::endl;
	}
	std::cout << "That would be... " << calcResult << std::endl;
	return calcResult;
}

void randomSentence()
{
	int randomSentence = 1 + (rand() % 7);
	srand(time(0));
	switch (randomSentence) {
	case 1:
		std::cout << "Why do French have so many civil wars? So they can win one every now and again." << std::endl;
		break;
	case 2:
		std::cout << "Hervey spots a brown bear." << std::endl;
		break;
	case 3:
		std::cout << "You found 2 Dollars on floor." << std::endl;
		money += 2;
		break;
	case 4:
		std::cout << "use 'command' to see command list." << std::endl;
		break;
	case 5:
		std::cout << "Do not take life too seriously. You will never get out of it alive." << std::endl;
		break;
	case 6:
		std::cout << "DM DM DM FC FC FC FC" << std::endl;
		break;
	default:
		std::cout << "Alex Colette puts on his hat as he walks away." << std::endl;
	}
}
void CommandMoney()
{

	while (moneyTypedInCounter == 0){
		std::cout << "In this console you recieve \"Console Money\"! you can spend it in other commands" << std::endl;
		std::cout << "This sounds dumb! But that's why this console is called dumb!" << std::endl;
		moneyTypedInCounter++;
	}
	std::cout << "Your balance is: " << money << " Dumb Dollars (DD)" << std::endl;
}
//lib
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>

//namespace on std 
using namespace std;
//promenlive
string start_manu, start_tutorial, command,commandtwo,position;
bool door;
bool STREETmove, HOUMmove, SHOPmove;
int kill , live , respect , money , day ;
//всеки път когато се маха от живота да се направи такаче ако живота е нула да има gameover.



void Tutorial() {
	


}



void Loading() {

	system("CLS");
	cout << "Loading";
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 2; i++)
		{
			Sleep(500);
			cout << ".";
		}
	}
}

int main() {

	
	SetConsoleTitleA("Termain!");
	Loading();
	system("CLS");

	cout << "Wellcome to Termain. \n";
	cout << "\n";
	cout << "Play\n";
	cout << "Exit \n";
	cin >> start_manu;

	if (start_manu == "Play" || start_manu == "play") {
		system("CLS");
	}

	else if (start_manu == "Exit" || start_manu == "exit") {
		system("CLS");
		return 0;
	}

	cout << "Do you want go trough the tutorial. \n";
	cout << "\n";
	cout << "yes/no\n";
	cin >> start_tutorial;

	if (start_tutorial == "yes" || start_tutorial == "Yes") {
		system("CLS");
		Tutorial();
	}
	else if (start_tutorial == "no" || start_tutorial == "No") {
		system("CLS");

	}
	live + 3;
	day + 1;
	system("CLS");

	//start history
	position = "Your House";

	cout << "You wake up in your house \n";
	cout << "\n";
	cout << "\n";
	cout << "->" << "Open door. \n";
	printf("You->");
	cin >> command;
	if (command == "open door" || command == "Open door")
	{
		door = true;
		if (door == true) {

			position = "Street";

		}
	}
	cout << "\n\n\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "You wake up in your house \n";
	cout << "\n";
	cout << "\n";
	cout << "->" << "Open door. \n";
	printf("You->");
	cin >> command;
	if (command == "open door" || command == "Open door")
	{
		door = true;
		if (door == true) {

			position = "Street";

		}
	}
	cout << "\n\n\n";

	//cout << "-------------------------------------------------------------------\n";
	//cout << "Comming soon \n";

	//cout << "your resurse \n";
	//cout << "kill" << kill << endl;
	//cout << "day" << day << endl;
	//cout << "live" << live << endl;
	//cout << "money" << money << endl;
	//cout << "respect" << respect << endl;
	//Sleep(1000);



}


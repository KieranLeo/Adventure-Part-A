
//Libraries
#include <string>
#include <iostream>

using namespace std;

int main()
{
//INITIALISE variables
	string playerName = "";
	string room1Name = "Graveyard";
	string room1Desc = "A muddy and wet grim-dark graveyard, oveerseen by an eldritch castle.";
	int playerStamina = 100;

//DISPLAY the title of the program.
	cout << "<{]=-=============-=[}>" << endl;
	cout << "     Welcome to ..." << endl;
	cout << "  Eldritch Labyrinth" << endl;
	cout << "<{]=-=============-=[}>" << endl;

//DISPLAY a message to the player asking their name.
	cout << "What is your name adventurer?" << endl;

//READ the player's response into the playerName variable
	cin >> playerName;

//DISPLAY a greeting to the player, using the playerName variable
	cout << "Hello there " << playerName << ", this is a dangerous place! Let us see where the path takes you." << endl;

//DISPLAY the name of the room where the player currently is, using the room1Name variable
	cout << "You first step into the: " << room1Name << "." << endl;

//DISPLAY the description of the room where the player currently is, using the room1Desc variable
	cout << "Description: " << room1Desc << endl;

//DISPLAY the player's current stamina, using the playerStamina variable
	cout << "Stamina: " << playerStamina << endl;
}

#include <iostream> //should I include .h file first? 
#include <cstring> //need? VS seems to throw different warnings depending on which/how many .cpp's are including cstring
#include "FunctionsHeader.h"

using namespace std;

void GetFileName(char* cFileName)
{
	strcpy(cFileName, "songs.txt");
}

int CallMenu()
{
	bool bValidInput;
	int iMenu_Result;

	bValidInput = true;

	while (bValidInput == true)
	{
		cout << "1) Display all songs" << endl;
		cout << "2) Add new song" << endl;
		cout << "3) Remove song" << endl;
		cout << "4) Search song by artist" << endl;
		cout << "5) Search song by album" << endl;
		cout << "6) Save all and Quit" << endl << endl;
		cout << "Enter Choice: ";
		cin >> iMenu_Result;
		cin.clear();
		cin.ignore(100, '\n');

		if (iMenu_Result == 1)
		{
			cout << "You Chose Option 1. " << endl << endl;
			return iMenu_Result;
		}
		else if (iMenu_Result == 2)
		{
			cout << "You Chose Option 2. " << endl << endl;
			return iMenu_Result;
		}
		else if (iMenu_Result == 3)
		{
			cout << "You Chose Option 3. " << endl << endl;
			return iMenu_Result;
		}
		else if (iMenu_Result == 4)
		{
			cout << "You Chose Option 4. " << endl << endl;
			return iMenu_Result;
		}
		else if (iMenu_Result == 5)
		{
			cout << "You Chose Option 5. " << endl << endl;
			return iMenu_Result;
		}
		else if (iMenu_Result == 6)
		{
			cout << "You Chose Option 6. " << endl << endl;
			return iMenu_Result;
		}
		else
		{
			cout << "Input error. Please choose an option from the menu." << endl << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}
	}
	return (0);
}

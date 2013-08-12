//********************************************************************************************
//League Counter Picker
//Main file.
//Copyright - Plex
//********************************************************************************************

#include <iostream>
#include <string>
#include "ChampFunctions.h"

using namespace std;

int main()
{
	//Variables
	string champselect;
	
	//Main Calling Function
	cout << "Enter champion you wish to counter:";
	cin >> champselect;

	if (champselect == "Ahri")
		Ahri();
	if (champselect == "Akali")
		Akali();
	if (champselect == "Anivia")
		Anivia();
	if (champselect == "Annie")
		Annie();
	if (champselect == "Brand")
		Brand();
	if (champselect == "Cassiopeia")
		Cassiopeia();
	if (champselect == "Chogath")
		Chogath();
	if (champselect == "Diana")
		Diana();
	if (champselect == "Elise")
		Elise();
	if (champselect == "Ezreal")
		Ezreal();
	if (champselect == "Fiddlesticks")
		Fiddlesticks();
	if (champselect == "Fizz")
		Fizz();
	system("PAUSE");
	return 0;
}
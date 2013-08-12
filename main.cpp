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
		ChampFuncs.Ahri();
	if (champselect == "Akali")
		ChampFuncs.Akali();
	if (champselect == "Anivia")
		ChampFuncs.Anivia();
	if (champselect == "Annie")
		ChampFuncs.Annie();
	if (champselect == "Brand")
		ChampFuncs.Brand();
	if (champselect == "Cassiopeia")
		ChampFuncs.Cassiopeia();
	if (champselect == "Chogath")
		ChampFuncs.Chogath();
	if (champselect == "Diana")
		ChampFuncs.Diana();
	if (champselect == "Elise")
		ChampFuncs.Elise();
	if (champselect == "Ezreal")
		ChampFuncs.Ezreal();
	if (champselect == "Fiddlesticks")
		ChampFuncs.Fiddlesticks();
	if (champselect == "Fizz")
		ChampFuncs.Fizz();
	system("PAUSE");
	return 0;
}
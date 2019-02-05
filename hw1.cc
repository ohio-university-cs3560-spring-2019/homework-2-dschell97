/*
	Daniel Schell
	ds008016@ohio.edu

	description: implementing the replace function

	28 January 2019
*/
#include "hw1.h"

string replace(string replacee, const string& search, const string& replaced)
{	//declares a counter
	size_t n = 0;
	
	//while there is still a string coming in
	while((n = replacee.find(search, n)) != string::npos) 
	{	//replace the choosen word with second choosen word
		replacee.replace(n, search.length(), replaced);
		//adds the length to the counter
		n += replaced.length();
	}
	//returns the new string
	return replacee;
}

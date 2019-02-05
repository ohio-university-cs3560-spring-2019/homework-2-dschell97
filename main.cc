/*
	Daniel Schell
	ds008016@ohio.edu

	description: string replacer

	28 January 2019
*/
#include "hw1.h"

int main(int argc, char**argv)
{	//declaring strings
	string a = argv[1];
	string b = argv[2];

	string sent_1;
	string sent_2;

	//gets the text file input
	getline(cin, sent_1);
	sent_2 = replace(sent_1, a, b);
	//outputs changes
	cout << sent_2 << endl;
}

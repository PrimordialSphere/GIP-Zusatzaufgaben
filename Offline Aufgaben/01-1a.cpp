//
//  main.cpp
//  Offline-Aufgabe 04-05
//
//  Created by Oliver Oschmann on 01.01.18.
//  Copyright © 2018 Oliver Oschmann. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


string palindromCheck(string &text) {
	unsigned long k = 0;

	unsigned int i = 0;

	while (i < text.length()) {

		if (text.at(i) == ' ') {  k++; }
		else if (text.at(i) == '!' || text.at(i) == '?') {}
		else if (text.at(i) == '0' || text.at(i) == '1' || text.at(i) == '2' || text.at(i) == '3' || text.at(i) == '4' || text.at(i) == '5' || text.at(i) == '6' || text.at(i) == '7' || text.at(i) == '8' || text.at(i) == '9') {
			k++;
		}
		else if (text.at(i) >= 'a' && text.at(i) <= 'z')
		{
			k = k + 2;
		}
		else if (text.at(i) >= 'A' && text.at(i) <= 'Z')
		{
			k = k + 3;
		}
		else
		{
		
			k++;
		}

		i++;
	}
	string text2(k, ' ');
	i = 0;
	int j = 0;
	while (i < text.length())
	{
		if (text.at(i) == ' ') { text2.at(j) = '_'; j++; }
		else if (text.at(i) == '!' || text.at(i) == '?') {}
		else if (text.at(i) == '0' || text.at(i)  == '1' || text.at(i)  == '2' || text.at(i) == '3' || text.at(i) == '4' || text.at(i) == '5' || text.at(i) == '6' || text.at(i) == '7' || text.at(i) == '8' || text.at(i) == '9') {
			text2.at(j) = '.';
			j++;
		}
		else if (text.at(i) >= 'a' && text.at(i) <= 'z')
		{
			text2.at(j) = text.at(i);
			j++;
			text2.at(j) = text.at(i);
			j++;
		}
		else if (text.at(i) >= 'A' && text.at(i) <= 'Z')
		{
			text2.at(j) = text.at(i);
			j++;
			text2.at(j) = text.at(i);
			j++;
			text2.at(j) = text.at(i);
			j++;
		}
		else
		{
			text2.at(j) = text.at(i);
			j++;
		}


		i++;
	}

	return text2;

}

int main() {
	string text;
	string j;

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	j = palindromCheck(text);
	cout << "Der Text nach der Umwandlung: " << j<<endl;


	system("PAUSE");
}

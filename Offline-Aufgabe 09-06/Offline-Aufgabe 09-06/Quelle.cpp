//
//  main.cpp
//  Offline-Aufgabe 09-06
//
//  Created by Oliver Oschmann on 13.01.18.
//  Copyright © 2018 Oliver Oschmann. All rights reserved.
//

#include <iostream>
using namespace std;

char char1[20];
char char2[20];


char* my_strconcat(const char * ptr1, const char * ptr2) {
	char *char3 = (char *)malloc(sizeof(char) * 40);
	int i = 0;
	if (ptr1[0] != '\0') {
		while (true) {
			char3[i] = ptr1[i];
			if (ptr1[i + 1] == '\0') { break; }
			i += 1;
		}
		i += 1;
	}
	int j = 0;
	while (true) {
		char3[i] = ptr2[j];
		if (ptr2[j + 1] == '\0') { break; }
		i += 1;
		j += 1;
	}
	char3[i += 1] = '\0';

	
	return char3;
	

}

int main() {
	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(char1, 20);
	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(char2, 20);

	cout << "Ergebnis my_strconcat(): ";

	char * result = my_strconcat(char1, char2);
	cout << result<< endl;
	system("PAUSE");

}


#include <string>
#include <iostream>
#include <iomanip>
using namespace std;








int main() {
	string string1, string2, string3, string4;
	int x = 0;
	int zaehlMal = 0;
	do {
		if (x == 0) {
			cout << "Textzeile = ? ";
			getline(cin, string1);
			
			if (string1 == "") { break; }
			x++;
		}
		if (x == 1) {
			cout << "Textzeile = ? ";
			getline(cin, string2);
			
			if (string2 == "") { break; }
			x++;
		}
		if (x == 2) {
			cout << "Textzeile = ? ";
			getline(cin, string3);
			
			if (string3 == "") { break; }
			x++;
		}
		if (x == 3) {
			cout << "Textzeile = ? ";
			getline(cin, string4);
			
			if (string4 == "") { break; }
			x++;
		}

	} while (x < 4);

	unsigned int y = string1.length();
	if (string2.length() > y) { y = string2.length(); }
	if (string3.length() > y) { y = string3.length(); }
	if (string4.length() > y) { y = string4.length(); }

	

	if (zaehlMal != x) {
		cout << setfill('#') << setw(y);
		cout << string1 << endl;
		zaehlMal++;
	}
	if (zaehlMal != x) {
		cout << setfill('#') << setw(y);
		cout << string2 << endl;
		zaehlMal++;
	}
	if (zaehlMal != x) {
		cout << setfill('#') << setw(y);
		cout << string3 << endl;
		zaehlMal++;
	}
	if (zaehlMal != x) {
		cout << setfill('#') << setw(y);
		cout << string4 << endl;
		zaehlMal++;
	}
	system("PAUSE");
}
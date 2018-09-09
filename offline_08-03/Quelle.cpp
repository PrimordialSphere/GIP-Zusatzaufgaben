#include<iostream>
#include<string>

using namespace std;

struct T_Morse_Data
{
	char letter;
	std::string morse_code;
};

int main() {

	const T_Morse_Data morse_data[] = {
		{ 'a', ".-" },
	{ 'b', "-..." },
	{ 'c', "-.-." },
	{ 'd', "-.." },
	{ 'e', "." },
	{ 'f', "..-." },
	{ 'g', "--." },
	{ 'h', "...." },
	{ 'i', ".." },
	{ 'j', ".---" },
	{ 'k', "-.-" },
	{ 'l', ".-.." },
	{ 'm', "--" },
	{ 'n', "-." },
	{ 'o', "---" },
	{ 'p', ".--." },
	{ 'q', "--.-" },
	{ 'r', ".-." },
	{ 's', "..." },
	{ 't', "-" },
	{ 'u', "..-" },
	{ 'v', "...-" },
	{ 'w', ".--" },
	{ 'x', "-..-" },
	{ 'y', "-.--" },
	{ 'z', "--.." },
	{ '0', "-----" },
	{ '1', ".----" },
	{ '2', "..---" },
	{ '3', "...--" },
	{ '4', "....-" },
	{ '5', "....." },
	{ '6', "-...." },
	{ '7', "--..." },
	{ '8', "---.." },
	{ '9', "----." },
	// Leerzeichen zur Worttrennung werden im Morsecode
	// durch einen Slash '/' umgeben von Leerzeichen
	// dargestellt ...
	// (Alternative: Trennung durch 3 Leerzeichen)
	// Hier bei uns, um die Testläufe eindeutiger zu
	// machen: Trennung mittels drei Slashes
	{ ' ', "///" },
	{ '.', ".-.-.-" },
	{ ',', "--..--" },
	{ ':', "---..." },
	{ '?', "..--.." },
	{ '-', "-....-" },
	{ '/', "-..-." },
	{ '@', ".--.-." },
	{ '=', "-...-" }
	};
	const int morse_data_len = 47;
	string eingabe;
	string ausgabe;
	int k = 0;
	int begin = 65;
	int end = 90;
	int add = 32;
	char correctMe;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);

	for (unsigned int j = 0; j < eingabe.length(); j++) {
		correctMe = eingabe.at(j);

		if (correctMe >= begin && correctMe <= end) { correctMe = correctMe + add; eingabe.at(j) = correctMe; }
	}

	for (int i = 0; i < eingabe.length(); i++)
	{
		k = 0;
		while (eingabe.at(i) != morse_data[k].letter) { k++; if (k == 44) { break; } }
		ausgabe += morse_data[k].morse_code;
		ausgabe += "#";
	}
	cout << ausgabe << endl;
	system("PAUSE");
}
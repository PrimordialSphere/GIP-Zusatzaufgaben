#include <iostream>
#include <string>
using namespace std;



void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil) {




	int i = eingabe.length();
	int k = eingabe.length();
	for (int j = 0; j < i; j++) {
		if (eingabe.at(j) == zeichen) { k = j; j= i+1;  }
	}
	int l = -1;
	int n = 0; 
	for (int m=0; m<i;m++)
	{
		if (m < k) { erster_teil += eingabe.at(m); }
		else if (m > k) { zweiter_teil += eingabe.at(m); n++; }

	}
}

int main()
{
	string eingabe, erster_teil, zweiter_teil;
	char zeichen; 
	cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> zeichen; 

	spalte_ab_erstem(zeichen, eingabe, erster_teil, zweiter_teil);
	cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil<<endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil<<endl;
	system("PAUSE");

}

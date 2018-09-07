#include <iostream>
#include<string>
using namespace std;


struct Person
{
	string nachname, vorname;
	int alter;
	char geschlecht;
};

Person personen[100] = {
{ "Musterfrau1", "Petra1", 18, 'w' },
{ "Mustermann1", "Klaus1", 18, 'm' },
{ "Mustermaedchen1", "Lisa1", 1, 'w' },
{ "Musterjunge1", "Jan1", 1, 'm' },
{ "Musterfrau2", "Petra2", 19, 'w' },
{ "Mustermann2", "Klaus2", 19, 'm' },
{ "Mustermaedchen2", "Lisa2", 2, 'w' },
{ "Musterjunge2", "Jan2", 2, 'm' },
{ "Musterfrau3", "Petra3", 20, 'w' },
{ "Mustermann3", "Klaus3", 20, 'm' },
{ "Mustermaedchen3", "Lisa3", 3, 'w' },
{ "Musterjunge3", "Jan3", 3, 'm' },
{ "Musterfrau4", "Petra4", 21, 'w' },
{ "Mustermann4", "Klaus4", 21, 'm' },
{ "Mustermaedchen4", "Lisa4", 4, 'w' },
{ "Musterjunge4", "Jan4", 4, 'm' },
{ "Musterfrau5", "Petra5", 22, 'w' },
{ "Mustermann5", "Klaus5", 22, 'm' },
{ "Mustermaedchen5", "Lisa5", 5, 'w' },
{ "Musterjunge5", "Jan5", 5, 'm' },
{ "Musterfrau6", "Petra6", 23, 'w' },
{ "Mustermann6", "Klaus6", 23, 'm' },
{ "Mustermaedchen6", "Lisa6", 6, 'w' },
{ "Musterjunge6", "Jan6", 6, 'm' },
{ "Musterfrau7", "Petra7", 24, 'w' },
{ "Mustermann7", "Klaus7", 24, 'm' },
{ "Mustermaedchen7", "Lisa7", 7, 'w' },
{ "Musterjunge7", "Jan7", 7, 'm' },
{ "Musterfrau8", "Petra8", 25, 'w' },
{ "Mustermann8", "Klaus8", 25, 'm' },
{ "Mustermaedchen8", "Lisa8", 8, 'w' },
{ "Musterjunge8", "Jan8", 8, 'm' }
};
int anzahl_personen = 32;

void filter(Person p[], int laenge) {
	unsigned int option;
	unsigned int summe =0;
	cout << "Ihre Auswahl:" << endl;
	cout << "1 - Weibliche Erwachsene" << endl;
	cout << "2 - Maennliche Erwachsene" << endl;
	cout << "3 - Weibliche Kinder" << endl;
	cout << "4 - Maennliche Kinder" << endl;
	cout << "? ";
	cin >> option;

	if (option == 1) {
		for (int i=0; i < laenge; i++) {
			if (p[i].geschlecht == 'w'&&p[i].alter >= 18) {
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe += 1;
			}
		}
		
	}
	else if (option == 2) {
		for (int i = 0; i < laenge; i++) {
			if (p[i].geschlecht == 'm'&&p[i].alter >= 18) {
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe += 1;
			}
		}
		
	}
	else if (option == 3) {
		for (int i = 0; i < laenge; i++) {
			if (p[i].geschlecht == 'w'&&p[i].alter < 18) {
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe += 1;
			}
		}
	
	}
	else if (option == 4) {
		for (int i = 0; i < laenge; i++) {
			if (p[i].geschlecht == 'm'&&p[i].alter < 18) {
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe += 1;
			}	
		}
		
	}
	cout << "Summe: " << summe << endl;
}

int main() {
	string input;

	do
	{
		cout << "Eine weitere Person eingeben (j/n)? ";
		getline(cin, input);
	} while (input != "j" && input != "n");

	if (input == "j") {
		do
		{

			cout << "Bitte den Nachnamen der " << anzahl_personen + 1 << ". Person eingeben: ? ";
			getline(cin, personen[anzahl_personen].nachname);



			cout << "Bitte den Vornamen der " << anzahl_personen + 1 << ". Person eingeben: ? ";
			getline(cin, personen[anzahl_personen].vorname);

			cout << "Bitte das Alter der " << anzahl_personen + 1 << ". Person eingeben: ? ";
			cin >> personen[anzahl_personen].alter;
			cout << "Bitte das Geschlecht der " << anzahl_personen + 1 << ". Person eingeben: ? ";
			cin >> personen[anzahl_personen].geschlecht;

			anzahl_personen += 1;
			cin.clear();
			cin.ignore();
			do
			{
				cout << "Eine weitere Person eingeben (j/n)? ";
				getline(cin, input);
			} while (input != "j" && input != "n");

		} while (input != "n");
	}

	filter(personen, anzahl_personen);






	system("PAUSE");


}
/*	23.09.2020 Unterricht Programmierung Benutzereingabe
1. Eingabe: Abfragen nach Vornamen und Nachnamen
2. Eingabe: danach frage ob noch weitere Benutzer eingegeben werden sollen
3. Ausgabe: Nachname. (Zwei Buchstaben des Vornamens)
			Ausgabe als Liste.
 */
#include <string>
#include <iostream>
using namespace std;

void main() {
	cout << "Bitte geben Sie Einen Benutzernamen ein" << endl;
	string Benutzer;
	string puffer;
	char nextUser = 0;
		do {
			cout << "Bitte geben sie einen Benutzer ein" << endl;
			cout << "Vornamen:";
			cin >> puffer;
			Benutzer = Benutzer + puffer + '.';
			cout << "Namen:";
			cin >> puffer;
			Benutzer = Benutzer + puffer.substr(0, 2) + '\n';
			cout << "Wollen sie einen weitern Benutzer eingeben? mit y/n:";
			cin >> nextUser;
		} while (nextUser!='n'); 
	cout << Benutzer <<endl;
}
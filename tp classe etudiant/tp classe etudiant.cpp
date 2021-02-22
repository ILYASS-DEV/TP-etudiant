// tp classe etudiant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Etudiant.h"
using namespace std;
int Etudiant::n = 0;

int main()
{
	Etudiant E("etud1", 3);
	cout << "Creation d'un objet Etudiant E avec 3 notes" << endl;
	E.saisie();
	cout << "Affichage de l'etudiant E:" << endl;
	E.affichage();
	cout << endl;
	cout << "Copie de l'etudiant E dans E1" << endl;
	Etudiant E1(E);
	cout << "L'affichage de l'etudiant E1:" << endl;
	E1.affichage();
	cout << endl;
	Etudiant E2("etud2", 2);
	cout << "Creation d'un objet Etudiant E2 avec 2 notes" << endl;
	E2.saisie();
	

	cout << endl << "La moyenne de l'etudiant E est : " << E.moyenne() << endl;

	if (E.admis())
	{
		cout << "l'etudiant E est admis " << endl;
	}
	else
	{
		cout << "l'etudiant E n'est pas admis " << endl;
	}

	if (E.comparer(E2))
	{
		cout << "Les Etudiants E et E2 ont la meme moyenne " << endl;
	}
	else
	{
		cout << "Les Etudiants E et E2 n'ont pas la meme moyenne " << endl;
	}

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

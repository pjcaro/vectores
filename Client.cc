// Include de l'application
#include "Vecteur.h"

int
main(int argc, char **argv)
{

	cout << "PROGRAMME DE TEST" << endl;

	// Constructeurs
	vecteur v1(3);
	vecteur v2 = v1;
//	vecteur v3;

	v1[0] = 2;
	v1[1] = 4;
	v1[2] = 6;


	/*v2 = v1;*/
//	cout << "v2 = v1 :	" << v2 << endl;
	cout << "V1: " << v1 << endl;

	cout << "V2: " << v2 << endl;


	// v2++;
	// cout << "v2++ :	" << v2 << endl;

//	v3 = v1 + v2;
//	cout << "v3 = v1 + v2 :	" << v3 << endl;

	// cout << "V1 :" << v1[0] << endl;
	// cout << "V1 :" << v1[1] << endl;
	// cout << "V1 :" << v1[2] << endl;

	cout << "SORTIE TEST" << endl;
}

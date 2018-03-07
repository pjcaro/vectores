#ifndef VECTEUR_H
#define VECTEUR_H
//
// Type vecteur
//
#include <iostream>

using namespace std;

//
// Type vecteur de int
//
class vecteur
{
private:
	int dim;
	float *tab;

public:


// Constructeurs par defaut(void) , avec la taille du vect.(int), par copie(vecteur&)
	vecteur();
	vecteur(int d);

// Destructeur
	~vecteur();

// Acces a la taille du vecteur
 	int longueur(void);

// acces au element []
	float& operator[](int);

//	affectation : =(vecteur), =(int)
	vecteur& operator=(vecteur&);
	vecteur& operator=(int);


// incrementation/decr. : ++(void), ++(int), --(void)
	vecteur& operator++();
	vecteur& operator++(int);
	vecteur& operator--();

// op. booleens : ==(vecteur&), <, >, <=, >=

	vecteur& operator==(vecteur&);
	vecteur& operator<(vecteur&);
	vecteur& operator>(vecteur&);
	vecteur& operator<=(vecteur&);
	vecteur& operator>=(vecteur&);



// op. binaires : +(vecteur&), -

	vecteur& operator+ (vecteur&);
	vecteur& operator- (vecteur&);

// produit scalaire: *(vecteur&)

	vecteur& operator* (vecteur&);


// produit par un scalaire: v * n, n * v
	vecteur operator*(int);
//friend vecteur operator*(int, vecteur&);

// auto-adition : +=(vecteur&), -=
	vecteur operator+=(vecteur&);
	vecteur operator-=(vecteur&);

// Operateurs d'entree/sortie: <<, >>
friend ostream& operator<< (ostream&, vecteur&);
friend istream& operator>> (istream&, vecteur&);

};

#endif // VECTEUR_H


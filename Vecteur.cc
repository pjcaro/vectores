// Type vecteur
#include "Vecteur.h"

// Constructeurs
	vecteur::vecteur(int d)
	{
	  dim = d;
	  tab = new float[dim];
	}

	vecteur::~vecteur()
	{
		// delete tab;
	}




// Destructeur

// Nombre d'elements
//int vecteur::longueur(void)
//{
//}

// Acces aux elements
	float& vecteur::operator[](int i)
	{
		return tab[i];
	}

// affectation : =(vecteur), =(int)

// incrementation/decr. : ++, ++(int), --
	vecteur& vecteur::operator=(vecteur& v){
		if(this == &v)
			delete [] tab;
		dim = v.dim;
		tab = new float [dim];
		for (int i = 0; i < dim; i++)
			tab[i] = v.tab[i];
		return *this;
	}

	// vecteur& vecteur::operator++(void){
	// 	for (int i = 0; i < dim; i++)
	// 		++this[i];
	// 	return *this;
	// }


// op. booleens : ==, <, >, <=, >=

// op. binaires : +, -

// produit scalaire : *

// produit par un scalaire: n * v, v * n

// auto-adition : +=, -=

// Operateurs d'entree/sortie: <<, >>
ostream& operator<< (ostream& o, vecteur& a)
{
	 int i;
	  o<<"\n ( ";
	  for (i=0;i<a.dim;i++)
	       o<<a[i]<<" ";
	  o<<" ) ";

 return o;
}

istream& operator>> (istream& i, vecteur& a)
{
	return i;
}

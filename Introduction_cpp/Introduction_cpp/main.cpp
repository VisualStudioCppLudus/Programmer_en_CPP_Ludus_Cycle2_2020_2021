#include <iostream>
#include"CPoint.h"
#include "CCercle.h"
#include "CComplexe.h"


using namespace std;

//void fct(CPoint p);


int main() {


	//Conversions de type

	int n_entier=5;
	double dbl_z=10.f;

	//Conversions implicites
	//n_entier = dbl_z;
	//dbl_z = n_entier;

	//Conversion explicites
	//dbl_z = (double)n_entier;
	//n_entier = (int)dbl_z;

	//C++ normes
	//dbl_z = static_cast<int>(n_entier);
	//dynamic_cast<>()
	//const_cast<>()
	//reinterpret_cast<>()


	CPoint a(3, 4), b(5, 7);
	int n_n1, n_n2;

	n_n1 = (int)a; //appel explicite de int()
	//ou n_n1=static_cast<int>(a);

	

	n_n2 = b; //appel implicite de int()

	
	fct(a);

	//appel implicite expression.
	n_n2 = a + 2;

	//fct(4);

	//Conversion d'un type de classe en un autre type de classe
	CComplexe c;
	c = b;
	c.affiche();

	return 0;
}



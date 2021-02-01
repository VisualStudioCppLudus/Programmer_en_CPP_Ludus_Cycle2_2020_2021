#include <iostream>
#include <string.h>
#include "CPointcol.h"

using namespace std;


int main() {


	//Compatibilité entre classe de base et classe dérivée
	CPoint a;
	CPointcol b;
	a = b;
	

	a.affiche();
	b.affiche();
	
	CPoint *pa=nullptr;
	CPointcol *pb=nullptr;


	pa = &a;

	pb = &b;

	pa = pb;


	//pour pa; j'appelle la méthode affiche de CPOint alors que la ref de pa = ref de pb(de type pointcol)
	pa->affiche();
	pb->affiche();

	pb = (CPointcol*)pa;

	pa->affiche();
	pb->affiche();



	//Constructeur de copie 


	CPointcol c(b);
	CPointcol e(a);

	c.setColor(10);

	CPointcol d;

	//assignation, surcharge opérateur =
	d = c;







return 0;
}




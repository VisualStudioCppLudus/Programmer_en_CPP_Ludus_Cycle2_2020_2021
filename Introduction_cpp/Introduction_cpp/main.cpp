#include"CPoint.h"
#include <iostream>


using namespace std;

int main() {


	
	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	CPoint pt2(8, 9,"pivot"); //appel du constructeur avec parametres
	
	CPoint tabPoint[100];

	for (int i = 0; i < 100; i++)
		tabPoint[i] = pt2;
	



	return 0;
}
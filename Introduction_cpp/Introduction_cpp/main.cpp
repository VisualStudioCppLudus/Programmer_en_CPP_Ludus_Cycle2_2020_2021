#include"CPoint.h"
#include <stdio.h>

int main() {

	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	CPoint pt2(8, 9); //appel du constructeur avec parametres
	



	printf("x : %d", pt.getnX());
	printf("y : %d", pt.getnY());


	return 0;
}
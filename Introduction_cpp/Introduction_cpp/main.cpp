#include"CPoint.h"
#include <stdio.h>

int main() {

	//Instance de classe CPoint
	CPoint pt;

	//initilisation
	//pt.init();

	pt.setnX(15);
	pt.setnY(25);

	//appel methode publique affichePoint()
	//pt.affichePoint();

	printf("x : %d", pt.getnX());
	printf("y : %d", pt.getnY());


	return 0;
}
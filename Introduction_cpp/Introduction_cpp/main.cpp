#include <iostream>
#include <string.h>
#include "CPointcol.h"


using namespace std;



int main() {


	CPoint p1;

	CPointcol pColor(5,8,255);

	CPointcol pColor2(5,8,255,"test");

	pColor.setColor(255);

	/*cout << "couleur : " << pColor.getColor() << endl;

	cout << "x : " << pColor.getnX() <<"y : "<<pColor.getnY()<< endl;*/


	pColor.affiche();

	

return 0;
}




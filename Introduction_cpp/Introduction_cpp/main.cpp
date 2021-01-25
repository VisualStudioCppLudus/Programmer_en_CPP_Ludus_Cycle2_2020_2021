#include <iostream>
#include <string.h>
#include "TCPoint.h"

using namespace std;



int main() {

	//template classe TCPoint
	TCPoint<int> pointInt(3, 8);

	TCPoint<double> pointDbl(3.f, 9.f);

	pointInt.affiche();

	pointDbl.affiche();

	tableau <TCPoint<int>, 10> t;


return 0;
}




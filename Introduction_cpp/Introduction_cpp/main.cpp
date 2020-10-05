#include"CPoint.h"
#include <iostream>


using namespace std;

int main() {


	string strTypePoint = "shhshd";
	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	CPoint pt2(8, 9,strTypePoint); //appel du constructeur avec parametres
	
	int n_X;
	int n_Y;

	char car = strTypePoint[1];


	//ou std::cout
	cout << "Entrez le premier entier" << endl;
	cin >> n_X;

	//ou std::cout
	cout << "Entrez le second entier" << endl;
	cin >> n_Y;

	pt2.setnX(n_X);
	pt2.setnY(n_Y);
	
	cout << "X : " << n_X << endl;
	cout << "Y : " << n_Y << endl;




	return 0;
}
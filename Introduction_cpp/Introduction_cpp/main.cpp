#include"CPoint.h"
#include "CCercle.h"
#include <iostream>


using namespace std;

void echangePoint(CPoint&, CPoint&);


void echangePoint(CPoint*, CPoint*);

const int TAILLE = 100;


int main() {


	
	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	CPoint pt2(8, 9,"pivot"); //appel du constructeur avec parametres
	
	//CPoint *tabPoint=new CPoint[TAILLE];


	/*for (int i = 0; i < 100; i++)
		tabPoint[i] = pt2;
	
	delete [] tabPoint;*/


	pt.deplacePoint(2, 3);

	CPoint pt3(8, 9, "point3");

	if (pt2.coincidePoint(pt3)) {

		cout << "Coincide" << endl;

	}
	else {

		cout << "Ne coincide pas" << endl;
	}


	if (pt2.coincidePoint(pt)) {

		cout << "Coincide" << endl;

	}
	else {

		cout << "Ne coincide pas" << endl;
	}




	cout << "pt.x : " << pt.getnX() << " pt.y : " << pt.getnY() << endl;
	cout << "pt2.x : " << pt2.getnX() << " pt2.y : " << pt2.getnY() << endl;
	

	echangePoint(pt, pt2);

	cout << "pt.x : " << pt.getnX() << " pt.y : " << pt.getnY() << endl;
	cout << "pt2.x : " << pt2.getnX() << " pt2.y : " << pt2.getnY() << endl;

	cout << CPoint::val_cpt();


	CCercle cercle(10, 12, 8.8);


	pt.coincide(cercle);

	return 0;
}


void echangePoint(CPoint &pt, CPoint &pt1) {

	CPoint ptTmp;

	ptTmp.setnX(pt.getnX());
	ptTmp.setnY(pt.getnY());

	pt.setnX(pt1.getnX());
	pt.setnY(pt1.getnY());

	pt1.setnX(ptTmp.getnX());
	pt1.setnY(ptTmp.getnY());


}

void echangePoint(CPoint *pt, CPoint *pt1) {

	CPoint ptTmp;

	ptTmp.setnX(pt->getnX());
	ptTmp.setnY(pt->getnY());

	pt->setnX(pt1->getnX());
	pt->setnY(pt1->getnY());

	pt1->setnX(ptTmp.getnX());
	pt1->setnY(ptTmp.getnY());


}


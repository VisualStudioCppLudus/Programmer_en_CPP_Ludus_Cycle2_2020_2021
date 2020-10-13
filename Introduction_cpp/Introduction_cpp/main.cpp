#include"CPoint.h"
#include "CCercle.h"
#include <iostream>


using namespace std;

void echangePoint(CPoint&, CPoint&);


void echangePoint(CPoint*, CPoint*);

const int TAILLE = 100;


int main() {


	

	CPoint pt3(8, 9, "point3");

	

	CPoint pt4(pt3); //Appel du constructeur par copie

	CPoint pt5=pt3; //Appel du constructeur par copie

	//Fonction membre operator + (valeur)
	//pt5 = pt3 + pt4;

	//Fonction membre operator + (pointeur)
	/*CPoint* pt6;
	pt6 = pt3 + pt4;*/

	//Fonction amie operateur +
	pt5 = pt4 + pt3;

	pt5 = pt4++; //notation postfixee

	pt5 = ++pt4; //notation prefixee


	/*CPoint pt6;
	//Objet tempo
	pt6= CPoint(8, 2, "test");*/


	/*cout << pt5;
	
	cin >> pt5;

	cout << pt5;*/



	CCercle c(10,15,12);

	cout << c[0].getnX();
	cout << c[0].getnY();



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


#pragma once
#include <iostream>
#include "CPoint.h"

class CComplexe {

	double dbl_reel;
	double dbl_imag;


public :

	CComplexe(double r = 0, double i = 0) { dbl_reel = r; dbl_imag = i; }
	friend CPoint::operator CComplexe();
	void affiche()const { std::cout << dbl_reel << "+" << dbl_imag << std::endl; }


};

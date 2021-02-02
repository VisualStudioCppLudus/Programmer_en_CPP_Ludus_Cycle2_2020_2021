#include "CPoint.h"
#include "CCercle.h"
#include "CComplexe.h"

#include <iostream>


int  CPoint::cpt = 0;



//Constructeur


CPoint::CPoint(int m_nX, int m_nY , string m_strType):m_nX(m_nX), m_nY(m_nY)
{


	this->m_strType = new char[100];
	strcpy_s(this->m_strType, 100, const_cast<char*>(m_strType.c_str()));

	

	cpt++;
		
}

CPoint::CPoint(int m_nX, int m_nY)
{
	this->m_nX = m_nX;
	this->m_nY = m_nY;
	///this->m_strType = "pivot";
	this->m_strType = new char[100];
	strcpy_s(this->m_strType, 100, "pivot");

	

	cpt++;
}

CPoint::~CPoint()
{
	cout << "Destruction d'un CPoint" << endl;
	delete[] m_strType;
	cpt--;
}

//Constructeur par copie
CPoint::CPoint(const CPoint& pt)
{
	this->m_nX = pt.m_nX;
	this->m_nY = pt.m_nY;
	this->m_strType = new char[100];
	strcpy_s(this->m_strType, 100, pt.m_strType);
}

//Assesseurs
int CPoint::getnX() const
{
	return this->m_nX;
}

int CPoint::getnY() const
{
	return this->m_nY;
}

//Mutateurs
void CPoint::setnX(int m_nX)
{
	this->m_nX = m_nX;
}

void CPoint::setnY(int m_nY)
{
	this->m_nY = m_nY;
}

void CPoint::deplacePoint(int n_X, int n_Y)
{
	this->m_nX = this->m_nX + n_X;
	this->m_nY = this->m_nY + n_Y;
}

bool CPoint::coincidePoint(const CPoint &pt)
{
	if (this->m_nX == pt.m_nX && this->m_nY == pt.m_nY)
	{
		return true;
	}
	else {
		return false;
	}
}

/*void CPoint::affiche() const
{
	cout << " x : " << m_nX<< endl;
	cout << " y : " << m_nY<< endl;
}*/



int CPoint::val_cpt()
{
	
	return cpt;
}




//Conversion de point en int()


CPoint::operator int() const {

	return m_nX;
}



CPoint::operator CComplexe()
{ 
	CComplexe r;
	r.dbl_reel = m_nX;
	r.dbl_imag = m_nY;

	return r;


}


void fct(int n_n)
{
	cout << "appel fct avec argument : " << n_n << endl;
}



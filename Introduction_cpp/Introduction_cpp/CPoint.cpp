#include "CPoint.h"


int  CPoint::cpt = 0;



//Constructeur
/*CPoint::CPoint()
{
	this->m_nX = 0;
	this->m_nY = 0;

	this->m_strType = "pivot";

}*/

CPoint::CPoint(int m_nX, int m_nY , string m_strType):m_nX(m_nX), m_nY(m_nY)
{

	/*this->m_nX = m_nX;
	this->m_nY = m_nY;
	this->m_strType = m_strType;*/

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
	delete[] m_strType;
	cpt--;
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

bool CPoint::coincidePoint(CPoint &pt)
{
	if (this->m_nX == pt.m_nX && this->m_nY == pt.m_nY)
	{
		return true;
	}
	else {
		return false;
	}
}

int CPoint::val_cpt()
{
	
	return cpt;
}

bool coincide(CPoint& pt, CPoint& pt2)
{
	if (pt.m_nX == pt2.m_nX && pt.m_nY == pt2.m_nY)
	{
		return true;
	}
	else {
		return false;
	}
}

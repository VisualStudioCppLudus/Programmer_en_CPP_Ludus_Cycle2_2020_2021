#include "CPoint.h"


//Constructeur
CPoint::CPoint()
{
	this->m_nX = 0;
	this->m_nY = 0;

	this->m_strType = "pivot";

}

CPoint::CPoint(int m_nX, int m_nY , string m_strType)
{

	this->m_nX = m_nX;
	this->m_nY = m_nY;
	this->m_strType = m_strType;

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

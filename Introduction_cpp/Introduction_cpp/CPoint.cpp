#include "CPoint.h"
#include <stdio.h>

void CPoint::affichePoint() const
{
	
	printf("x :%d\n", getnX());
	printf("y :%d\n", getnY());
}

//Constructeur
CPoint::CPoint()
{
	this->m_nX = 0;
	this->m_nY = 0;

}

CPoint::CPoint(int m_nX, int m_nY)
{

	this->m_nX = m_nX;
	this->m_nY = m_nY;

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

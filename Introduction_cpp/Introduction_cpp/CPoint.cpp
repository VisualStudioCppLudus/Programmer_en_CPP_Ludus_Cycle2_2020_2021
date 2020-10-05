#include "CPoint.h"
#include <stdio.h>

void CPoint::affichePoint() const
{
	
	printf("x :%d\n", getnX());
	printf("y :%d\n", getnY());
}

//Assesseurs
int CPoint::getnX() const
{
	return m_nX;
}

int CPoint::getnY() const
{
	return m_nY;
}

//Mutateurs
void CPoint::setnX(int n_val)
{
	m_nX = n_val;
}

void CPoint::setnY(int n_val)
{
	m_nY = n_val;
}

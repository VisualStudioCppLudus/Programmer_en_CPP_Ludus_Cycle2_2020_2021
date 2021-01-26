#include "CPointcol.h"
#include <iostream>


using namespace std;

CPointcol::CPointcol(short n_cl)
{
	m_ncouleur = n_cl;
	//this->m_ncouleur;

}

CPointcol::CPointcol(int n_x, int n_y, short n_cl):CPoint(n_x, n_y)
{
	m_ncouleur = n_cl;
}

CPointcol::CPointcol(int n_x, int n_y, short n_cl, string s_strType): CPoint(n_x,n_y,s_strType)
{
	m_ncouleur = n_cl;
}

void CPointcol::setColor(short n_cl)
{
	m_ncouleur = n_cl;
}

int CPointcol::getColor() const
{
	return m_ncouleur;
}

void CPointcol::affiche() const
{
	cout << "Couleur du point : " << m_ncouleur << endl;
	CPoint::affiche();

}

CPointcol::~CPointcol()
{
	cout << "Destruction d'un CPointcol" << endl;
}



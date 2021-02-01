#include "CPointcol.h"
#include <iostream>


using namespace std;

CPointcol::CPointcol(short n_cl) :CPoint(0, 0, "test")
{
	
	m_ncouleur = n_cl;
	//this->m_ncouleur;

}

CPointcol::CPointcol(int n_x, int n_y, short n_cl):CPoint(n_x, n_y,"test")
{
	m_ncouleur = n_cl;
}

CPointcol::CPointcol(int n_x, int n_y, short n_cl, string s_strType): CPoint(n_x,n_y,s_strType)
{
	m_ncouleur = n_cl;
}

CPointcol::CPointcol(const CPointcol& p):CPoint(p)
{
	m_ncouleur = p.m_ncouleur;
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

CPointcol CPointcol::operator=(const CPointcol& p)
{
	CPoint* pt;
	const CPoint* pt2;
	cout << "operateur = Cpointcol" << endl;
	pt = this;//conversion pointeur sur CPointcol en pointeur sur CPoint
	pt2 = &p;//idem
	*pt = *pt2;//affectation de la partie point de p
	this->m_ncouleur = p.m_ncouleur;//affectation de la partie propre a pointcol
	return *this;
}

CPointcol::~CPointcol()
{
	cout << "Destruction d'un CPointcol" << endl;
}



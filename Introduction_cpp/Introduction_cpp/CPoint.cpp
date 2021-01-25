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

bool CPoint::coincide(const CCercle& c)
{
	if (this->m_nX == c.m_Centre.m_nX && this->m_nY == c.m_Centre.m_nY) 
	{
		return true;
	}else{
		return false;
	}
}

int CPoint::val_cpt()
{
	
	return cpt;
}

CPoint CPoint::operator=(const CPoint& pt)
{
	this->m_nX = pt.m_nX;
	this->m_nY = pt.m_nY;
	this->m_strType = new char[100];
	strcpy_s(this->m_strType, 100, pt.m_strType);

	return *this;
}





/*CPoint* CPoint::operator+(const CPoint &pt)
{

	this->m_nX = this->m_nX + pt.m_nX;
	this->m_nY = this->m_nY + pt.m_nY;
	return this;
}*/

/*CPoint* CPoint::operator+(const CPoint pt)
{
	
	this->m_nX = this->m_nX + pt.m_nX;
	this->m_nY = this->m_nY + pt.m_nY;
	return this;
}*/


/*CPoint CPoint::operator+(const CPoint pt)
{
	CPoint p;
	p.m_nX = this->m_nX + pt.m_nX;
	p.m_nY= this->m_nY + pt.m_nY;
	return p;
}*/



/*CPoint operator+(const CPoint p1, const CPoint p2)
{
	CPoint ptemp;
	ptemp.m_nX = p1.m_nX + p2.m_nX;
	ptemp.m_nY = p1.m_nY + p2.m_nY;
	return ptemp;
}*/

/*CPoint operator+(const CPoint &p1, const CPoint &p2)
{
	CPoint ptemp;
	ptemp.m_nX = p1.m_nX + p2.m_nX;
	ptemp.m_nY = p1.m_nY + p2.m_nY;
	return ptemp;
}*/

std::ostream& operator<<(std::ostream& os, const CPoint& pt)
{
	return os << pt.m_nX <<" "<<pt.m_nY<<" "<<pt.m_strType<< std::endl;
}

std::istream& operator>>(std::istream& is, CPoint& pt)
{
	is >> pt.m_nX;
	is >> pt.m_nY;
	is >> pt.m_strType;
	return is;
}


CPoint CPoint::operator++() //notation prefixee
{
	m_nX++;
	m_nY++;

	return *this;

}

CPoint CPoint::operator++(int n)//notation postfixe
{
	CPoint p = *this;
	m_nX++;
	m_nY++;

	return p;

}



/*bool coincide(CPoint& pt, CPoint& pt2)
{
	if (pt.m_nX == pt2.m_nX && pt.m_nY == pt2.m_nY)
	{
		return true;
	}
	else {
		return false;
	}
}*/



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



void fct(CPoint p)
{
	cout << "appel fct(point)" << endl;

}

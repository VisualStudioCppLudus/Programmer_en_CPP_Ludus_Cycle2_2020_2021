#pragma once
#ifndef CPOINT_H
#define CPOINT_H

#include <string>

using namespace std;

class CCercle;
class CComplexe;

class CPoint
{

private:
	//Données membres
	int m_nX;
	int m_nY;

	//string m_strType;

	char* m_strType;

	static int cpt;

	


public:

	
	

	//pas de fct init
	/*inline void init() {
		m_nX = 0;
		m_nY = 0;
	}*/

	
	

	//Constructeur avec parametres
	CPoint(int n_valx, int n_valy, string m_strType);

	//Constructeur defaut
	CPoint(int n_valx=0, int n_valy=0);

	~CPoint();


	//Constructeur par copie
	CPoint(const CPoint&);

	//Get
	int getnX() const;
	int getnY()const;

	//Set
	void setnX(int n_val);
	void setnY(int n_val);

	//procedure deplace point
	void deplacePoint(int n_X, int n_Y);

	//procedure coincidePoint
	bool coincidePoint(const CPoint &pt);

	//Procedure affiche
	void affiche()const;



	//Fonction membre de la classe CPoint amie de la classe CCercle
	bool coincide(const CCercle& c);


	static int val_cpt();

	//Surcharge opérateur + 
	//CPoint operator+(const CPoint);
	
	//Surcharge operateur + (pointeur)
	//CPoint * operator+(const CPoint);

	//Surcharge operateur + et passage par ref
	//CPoint * operator+(const CPoint&);


	//surcharge operateur + fct amie
	//friend CPoint operator+(const CPoint, const CPoint);

	//surcharge operateur + fct amie et passage par ref
	//friend CPoint operator+(const CPoint &,const CPoint &);

	//Surcharge = (assignation de CPoint)
	CPoint operator=(const CPoint&);

	CPoint operator++();

	CPoint operator++(int n);


	//Surcharge flux de sortie (cout)
	friend std::ostream& operator<<(std::ostream& os, const CPoint& pt);

	//Surcharge flux entrée (cin) 
	friend std::istream& operator>>(std::istream& is, CPoint& pt);

	//Conversion type point => int()
	operator int() const;

	friend void fct(int n_n);//appel implicite fct

	
	//Conversion d'un type de classe en un autre type de classe
	operator CComplexe();//conversion point=> complexe

	//Surcharge de l'operateur <
	int operator<(CPoint)const ;


};

#endif // !CPOINT_H




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
	virtual void affiche() const =0;


	static int val_cpt();

	

	//Conversion type point => int()
	operator int() const;

	friend void fct(int n_n);//appel implicite fct

	
	//Conversion d'un type de classe en un autre type de classe
	operator CComplexe();//conversion point=> complexe



};

#endif // !CPOINT_H




#pragma once
#ifndef CPOINT_H
#define CPOINT_H

#include <string>

using namespace std;

class CPoint
{

private:
	//Données membres
	int m_nX;
	int m_nY;

	string m_strType;

	


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




	//Get
	int getnX() const;
	int getnY()const;

	//Set
	void setnX(int n_val);
	void setnY(int n_val);

	//procedure deplace point
	void deplacePoint(int n_X, int n_Y);

	//procedure coincidePoint
	bool coincidePoint(CPoint &pt);


};

#endif // !CPOINT_H




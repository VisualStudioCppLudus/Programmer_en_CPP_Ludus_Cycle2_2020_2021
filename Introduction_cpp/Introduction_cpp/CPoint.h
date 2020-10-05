#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CPoint
{

private:
	//Données membres
	int m_nX;
	int m_nY;
	


public:



	//pas de fct init
	/*inline void init() {
		m_nX = 0;
		m_nY = 0;
	}*/

	//Constructeur
	CPoint();

	//Constructeur avec parametres
	CPoint(int n_valx, int n_valy);

	



	//Get
	int getnX() const;
	int getnY()const;

	//Set
	void setnX(int n_val);
	void setnY(int n_val);


};

#endif // !CPOINT_H




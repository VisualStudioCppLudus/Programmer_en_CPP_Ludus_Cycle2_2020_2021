#pragma once
#include "CPoint.h"
#include "CCoul.h"

class CPointcol : public CPoint,public CCoul {


public :


	/*CPointcol(short n_cl = 0);
	CPointcol(int n_x,int n_y, short n_cl);
	CPointcol(int n_x,int n_y, short n_cl,string s_strType);*/
	CPointcol(int n_x, int n_y, short n_cl);
	CPointcol(const CPointcol&);
	void setColor(short n_cl);
	int getColor()const;
	void affiche()const;

	//Surcharge = (assignation de CPointcol)
	CPointcol operator=(const CPointcol&);

	~CPointcol();



};

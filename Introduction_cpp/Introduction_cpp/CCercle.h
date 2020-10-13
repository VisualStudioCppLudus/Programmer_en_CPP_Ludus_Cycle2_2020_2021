#pragma once

#pragma once
#include "CPoint.h"


class CCercle {

	float m_fltRayon;
	CPoint m_Centre;

public :

	CCercle(int nX, int nY, float fltR);

	~CCercle();

	friend bool CPoint::coincide(const CCercle& c);




};


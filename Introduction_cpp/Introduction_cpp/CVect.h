#pragma once

class CVect_limite;

class CVect {

	int m_nelem;
	int* m_nAdr;

public :
	CVect(int);
	~CVect();

	int& operator[](int);


};
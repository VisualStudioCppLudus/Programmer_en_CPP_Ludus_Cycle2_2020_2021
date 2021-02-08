#pragma once

class CVect_limite
{
public:
	int m_nHors; // valeur indice hors limites(public) 
	int m_ncode_erreur=0;
public:
	CVect_limite(int n_i) {

		m_nHors = n_i;
	}
	~CVect_limite() {


	}

private:

};


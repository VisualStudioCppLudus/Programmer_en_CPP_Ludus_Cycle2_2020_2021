#pragma once
#include <iostream>

using namespace std;

class CCoul {

	short couleur;

public :
	CCoul(int cl) {

		couleur = cl;

	}

	~CCoul(){
		cout << "Destucteur de CCoul" << endl;
	}

	void affiche()const {

		cout << "Couleur : " << couleur << endl;
	}


};

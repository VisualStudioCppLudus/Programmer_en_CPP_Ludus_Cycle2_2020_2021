#pragma once

#include <iostream>

using namespace std;

template <class T> class TCPoint {


	T m_x;
	T m_y;

public :
	TCPoint(T abs = 0, T ord = 0);

	T  getX() const {
		return this->m_x;
	}
	T  getY() const {
		return this->m_y;
	}

	void setX(T abs) {

		this->m_x = abs;
	}

	void setY(T ord) {
		this->m_y = ord;
	}
	void affiche() const;


};

template<class T>
inline TCPoint<T>::TCPoint(T abs, T ord)
{
	setX(abs);
	setY(ord);
	
}

template<class T>
void TCPoint<T>::affiche()const {

	cout << "x : " << this->getX() << " y : " << m_y<< endl;

}


template <class T=float, int n=5> class tableau {

	T tab[n];

public:

	//....

};
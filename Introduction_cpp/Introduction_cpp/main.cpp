#include <iostream>
#include <string.h>
#include "CVect.h"
#include "CVect_limite.h"

using namespace std;

int main() {

	
	try {
		CVect v(10);

		v[11] = 5; /* indice trop grand*/

	}
	catch (CVect_limite l) {
		
		
		cout << "Exception limit" << l.m_nHors<< endl;
		//exit(-1);
		//execute une fonction modifiant l.m_ncode_erreur
		if (l.m_ncode_erreur == 0) {

			cout << "traitement...." << endl;
		}
		
	}

	cout << "on continue" << endl;


	

return 0;
}











/*

int gobal_var = 42;
void changeReferenceValue(int*& pp)
{
	pp = &gobal_var;
}


int var = 23;
int* ptr_to_var = &var;



cout << "Passing a Reference to a pointer to function" << endl;

cout << "Before :" << *ptr_to_var << endl; // display 23 

changeReferenceValue(ptr_to_var);

cout << "After :" << *ptr_to_var << endl; // display 42 

*/
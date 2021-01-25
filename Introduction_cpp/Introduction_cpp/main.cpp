#include <iostream>
#include "CPoint.h"
#include <string.h>

using namespace std;


/*int minimum(int n_a, int n_b);
float minimum(float flt_a, float flt_b);*/

//prototype template
template <class T> T minimum(T a, T b);
const char* minimum(const char* adr1, const char* adr2);

//template <class T, class U> fct(T a, T* b, U c);


int main() {

	minimum(10, 8);
	minimum(12.f, 5.f);

	const char* adr1 = "hello";
	const char* adr2 = "world";

	cout << minimum(adr1, adr2) << endl;

	CPoint pt(3,4);
	CPoint pt2(1,2);

	cout << minimum(pt, pt2) << endl;




return 0;
}

/*template <class T, class U> fct(T a, T* b, U c) {




}*/

//template <typename T>.....
//export 
template <class T> T minimum(T a, T b) {

	if (a < b)
		return a;
	else
		return b;

}

//Specialisation de minimum pour char *
const char* minimum(const char* adr1, const char* adr2) {

	if (strcmp(adr1, adr2) < 0)
		return adr1;
	else
		return adr2;


}

//minimum avec deux integer
/*int minimum(int n_a, int n_b) {

	if (n_a < n_b)
		return n_a;
	else
		return n_b;

}

//minimum avec deux float

float minimum(float flt_a,float flt_b) {


	if (flt_a < flt_b)
		return flt_a;
	else
		return flt_b;

}*/



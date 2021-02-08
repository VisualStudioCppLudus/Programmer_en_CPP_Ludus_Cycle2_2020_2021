#include "CVect.h"
#include "CVect_limite.h"

CVect::CVect(int n_n)
{
    m_nAdr = new int[m_nelem = n_n];
}

CVect::~CVect()
{
    delete m_nAdr;
}

int& CVect::operator[](int n_i)
{
    if (n_i<0 || n_i>m_nelem) {

        CVect_limite l(n_i);
        throw (l); //déclenche une exception de type vect_limite;
    }
    return m_nAdr[n_i];
}

/**
 * Project Untitled
 */


#ifndef _CDESCUENTO_H
#define _CDESCUENTO_H
#include "cCliente.h"

class cDescuento {
public: 

float GET_PORCENTAJE();
string GET_OBRASOCIAL();
cDescuento(float porcentaje, string obraSocial);
~cDescuento();

private: 
    float porcentaje;
    string obraSocial;
};

#endif //_CDESCUENTO_H
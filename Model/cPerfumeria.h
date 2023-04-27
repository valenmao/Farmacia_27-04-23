/**
 * Project Untitled
 */


#ifndef _CPERFUMERIA_H
#define _CPERFUMERIA_H

#include "cProducto.h"
#include "ePerfumeria.h"


class cPerfumeria: public cProducto {
public: 
    
ePerfumeria GET_TIPO();
    
cPerfumeria( float _precio, string _nombre, int _cantidad, string _marca, ePerfumeria _tipoProduct);

~cPerfumeria();
private: 
    ePerfumeria tipoProducto;
};

#endif //_CPERFUMERIA_H
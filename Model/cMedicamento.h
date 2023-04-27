/**
 * Project Untitled
 */


#ifndef _CMEDICAMENTO_H
#define _CMEDICAMENTO_H

#include "cProducto.h"



class cMedicamento: public cProducto {

private:
    int dosis;
    bool ventaLibre;

public: 
    
    cMedicamento(float _precio, string _nombre, int _cantidad, string _marca, int _dosis, bool _ventaLibre);
    ~cMedicamento();


};

#endif //_CMEDICAMENTO_H
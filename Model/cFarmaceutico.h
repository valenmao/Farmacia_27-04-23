/**
 * Project Untitled
 */


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H

#include "cEmpleado.h"


class cFarmaceutico: public cEmpleado {
public: 

void cFarmaceutico(void string, void string, void int, void const string, void string);
    
cDescuento GET_LISTADESCUENTOS();
    
cReceta GET_RECETA();
    
cProducto GET_MEDICAMENTO();
 
void ExplicarDosificacion(void cReceta, void cProducto);

void RecomendarRemedios(void cCliente);

void ExpenderReceta(void cReceta);
 
float ChequearDescuentos(void cReceta, void cDescuentos);
    
~cFarmaceutico();
};

#endif //_CFARMACEUTICO_H
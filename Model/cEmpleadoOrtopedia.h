/**
 * Project Untitled
 */


#ifndef _CEMPLEADOORTOPEDIA_H
#define _CEMPLEADOORTOPEDIA_H

#include "cEmpleado.h"


class cEmpleadoOrtopedia: public cEmpleado {

public:

    cEmpleadoOrtopedia(string nombre, string apellido, int numerEmpleado, const string DNI, string contacto);

    structLesion GET_LESION();

    void Asesorar(cCliente cliente);

    void RecomendarProductos(cCliente cliente);
    ~cEmpleadoOrtopedia();
};

#endif //_CEMPLEADOORTOPEDIA_H
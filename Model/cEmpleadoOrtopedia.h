/**
 * Project Untitled
 */


#ifndef _CEMPLEADOORTOPEDIA_H
#define _CEMPLEADOORTOPEDIA_H

#include "cEmpleado.h"


class cEmpleadoOrtopedia: public cEmpleado {

public:

    /**
     * @param string
     * @param string
     * @param int
     * @param const string
     * @param string
     */
    cEmpleadoOrtopedia(string nombre, string apellido, int numerEmpleado, const string DNI, string contacto);

    structLesion GET_LESION();

    /**
     * @param cCliente
     */
    void Asesorar(cCliente cliente);

    /**
     * @param cCliente
     */
    void RecomendarProductos(cCliente cliente);
    ~cEmpleadoOrtopedia();
};

#endif //_CEMPLEADOORTOPEDIA_H
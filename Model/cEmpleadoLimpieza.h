/**
 * Project Untitled
 */


#ifndef _CEMPLEADOLIMPIEZA_H
#define _CEMPLEADOLIMPIEZA_H

#include "cEmpleado.h"


class cEmpleadoLimpieza: public cEmpleado {
private:
    int truno;

public:

    void SET_TURNO(void int);

    int GET_TURNO();

    cEmpleadoLimpieza(string nombre, string apellido, int numeroEmpleado,const string DNI,string contacto, int turno);
    ~cEmpleadoLimpieza();
};

#endif //_CEMPLEADOLIMPIEZA_H
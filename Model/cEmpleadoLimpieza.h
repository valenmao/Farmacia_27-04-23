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

    /**
     * @param int
     */
    void SET_TURNO(void int);

    int GET_TURNO();

    /**
     * @param string
     * @param string
     * @param int
     * @param const string
     * @param string
     * @param int
     */
    cEmpleadoLimpieza(string nombre, string apellido, int numeroEmpleado,const string DNI,string contacto, int turno);
    ~cEmpleadoLimpieza();
};

#endif //_CEMPLEADOLIMPIEZA_H
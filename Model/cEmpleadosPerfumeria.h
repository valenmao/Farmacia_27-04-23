/**
 * Project Untitled
 */


#ifndef _CEMPLEADOSPERFUMERIA_H
#define _CEMPLEADOSPERFUMERIA_H

#include "cEmpleado.h"


class cEmpleadosPerfumeria: public cEmpleado {
public: 

cEmpleadosPerfumeria(string nombre, string apellido, int numeroEmpleado, const string DNI, string contacto);

~cEmpleadosPerfumeria();

void Asesorar(cCliente cliente);
    

};

#endif //_CEMPLEADOSPERFUMERIA_H
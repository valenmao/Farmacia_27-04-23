/**
 * Project Untitled
 */


#ifndef _CEMPLEADOSPERFUMERIA_H
#define _CEMPLEADOSPERFUMERIA_H

#include "cEmpleado.h"


class cEmpleadosPerfumeria: public cEmpleado {
public: 
    
/**
 * @param string
 * @param string
 * @param int
 * @param const string
 * @param string
 */
cEmpleadoPerfumeria(string nombre, string apellido, int numeroEmpleado, const string DNI, string contacto);
    
/**
 * @param cCliente
 */
void Asesorar(cCliente cliente);
    
 ~cEmpleadoPerfumeria();
};

#endif //_CEMPLEADOSPERFUMERIA_H
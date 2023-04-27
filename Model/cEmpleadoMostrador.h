/**
 * Project Untitled
 */


#ifndef _CEMPLEADOMOSTRADOR_H
#define _CEMPLEADOMOSTRADOR_H

#include "cEmpleado.h"


class cEmpleadoMostrador: public cEmpleado {

private: 
    unsigned int numActual;
    
public:

    /**
     * @param string
     * @param string
     * @param int
     * @param const string
     * @param string
     * @param unsigned int
     */
    void cEmpleadoMostrador(string nombre, string apellido,int numerEmpleado,const string DNI, string contacto,unsigned int numActual);

    cCliente GET_CLIENTE();

    /**
     * @param unsigned int
     */
    void SET_NUMACTUAL(unsigned int numero);

    /**
     * @param unsigned int
     */
    void LlamarNumSiguiente(unsigned int numero);

    /**
     * @param cCliente
     */
    void EnviarClienteOtroEmp(cCliente cliente);
    ~cEmpleadoMostrador();
};

#endif //_CEMPLEADOMOSTRADOR_H
/**
 * Project Untitled
 */


#ifndef _CEMPLEADOCAJA_H
#define _CEMPLEADOCAJA_H

#include "cEmpleado.h"


class cEmpleadoCaja: public cEmpleado {
public: 
    
/**
 * @param string
 * @param string
 * @param int
 * @param const string
 * @param string
 */
 cEmpleadoCaja(string nombre, string apellido,int numeroEmpleado,const string DNI, string contacto);
    
eMetodo GET_METODOPAGO();
    
eFormato GET_FORMATO();
    
cCarrito GET_CARRITO();
    
/**
 * @param float
 */
void Cobrar( float precioTotal);
    
/**
 * @param cCarritoExtras
 * @param cCliente
 */
cTicketdecompra AgregarTicketCaja(cCarrito carrito, cCliente cliente);
~cEmpleadoCaja();
};

#endif //_CEMPLEADOCAJA_H
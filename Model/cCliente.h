/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H
#include "Headers.h"
#include "eNecesidad.h"
#include "eMetodo.h"
#include "cReceta.h"
#include "cCarrito.h"
#include "cNumeroCliente.h"
#include "cFactura.h"

struct sLesion {
    string zona;
    unsigned int gravedad;
}; typedef struct sLesion slesion;

class cCliente {
private:
    string nombre;
    string apellido;
    string contacto;
    eMetodo metodoPago;
    structLesion lesion;
    eNecesidad necesidad;
    const stirng DNI;
public: 
 cCliente(string nombre,string apellido,string contacto, eMetodo metodoPago,  sLesion lesion, eNecesidad necesidad, const string DNI);
    
cCarrito GET_CARRITO();

void AgregarProductosPerfumeria(cProducto prodPerfumeria, int cantidad);

void AgregarGolosinas(cProducto golosinas, int cantidad);
~cCliente();
};

#endif //_CCLIENTE_H
/**
 * Project Untitled
 */


#include "cCliente.h"


 cCliente::cCliente(string nombre, string apellido, string contacto, eMetodo metodoPago, sLesion lesion, eNecesidad necesidad, const string DNI) {

}

cCarrito cCliente::GET_CARRITO() {
    return this->carrito;
}

 void cCliente::AgregarProductosPerfumeria(cProducto prodPerfumeria,int cantidad ) {
    return;
}

void cCliente::AgregarGolosinas(cProducto golosinas, int cantidad) {
    return;
}

cCliente::~cCliente() {

}
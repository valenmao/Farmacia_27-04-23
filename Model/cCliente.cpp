/**
 * Project Untitled
 */


#include "cCliente.h"

/**
 * cCliente implementation
 */


/**
 * @param string
 * @param string
 * @param string
 * @param eMetodo
 * @param struct
 * @param eNecesidad
 * @param const string
 */
 cCliente::cCliente(string nombre, string apellido, string contacto, eMetodo metodoPago, sLesion lesion, eNecesidad necesidad, const string DNI) {

}

/**
 * @return cCarrito
 */
cCarrito cCliente::GET_CARRITO() {
    return this->carrito;
}

/**
 * @param cProducto
 * @param int 
 * @return void
 */
 void cCliente::AgregarProductosPerfumeria(cProducto prodPerfumeria,int cantidad ) {
    return;
}

/**
 * @param cProducto
 * @param int
 * @return void
 */
void cCliente::AgregarGolosinas(cProducto golosinas, int cantidad) {
    return;
}

cCliente::~cCliente() {

}
/**
 * Project Untitled
 */


#ifndef _CCARRITO_H
#define _CCARRITO_H
#include "cProducto.h"

class cCarrito {

private:
    float precioCarrito;
    int cantidad;

public: 
    cCarrito(float _precioTotal, int _cantidad);
    ~cCarrito();
    
    cProducto GET_LISTAPRODUCTOS();
    
/**
 * @param float
 */
    void SET_PRECIOCARRITO(float _precioNuevo);
    
/**
 * @param float
 * @param int
 */

/**
 * @param cProductos
 * @param int
 */
    void AgregarProductos(cProductos _product, int _cant);
    
/**
 * @param cProductos
 * @param int
 */
    void EliminarProductos(cProductos _product, int _cant );



};

#endif //_CCARRITO_H
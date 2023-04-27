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

    void SET_PRECIOCARRITO(float _precioNuevo);
    
    void AgregarProductos(cProductos _product, int _cant);

    void EliminarProductos(cProductos _product, int _cant );

};

#endif //_CCARRITO_H
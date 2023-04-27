/**
 * Project Untitled
 */


#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H
#include "cTicketdecompra.h"
#include "cDescuento.h"
#include "cCliente.h"

class cEmpleado {

protected: 
    string nombre;
    string apellido;
    int numeroEmpleado;
    const string DNI;
    string contacto;
public:

    /**
     * @param cCliente
     */
    void AtenderCliente(cCliente cliente);

    /**
     * @param cProducto
     * @param int
     * @param float
     */
    float CalculaMontoACobrar(cProducto producto, int cantidad, float precio);

    /**
     * @param float
     * @param cProducto
     * @param cCliente
     * @param int
     */
    cTicketdecompra EmitirTicket(float precio, cProducto producto, cCliente cliente, int cantidad);

    /**
     * @param ccProducto
     * @param cCarrito
     */
    void AgregarProductoCarrito(cProducto producto, cCarrito carrito);

    /**
     * @param cCliente
     */
    void PasarClienteaCaja(cCliente cliente);

    /**
     * @param string
     * @param string
     * @param int
     * @param const string
     * @param string
     */
    cEmpleado(string nombre, string apellido, int numeroEmpleado, const string DNI, string contacto);
    ~cEmpleado();
    

};

#endif //_CEMPLEADO_H
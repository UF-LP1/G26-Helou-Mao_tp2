/**
 * Project Untitled
 */


#include "cCliente.h"


cCliente::cCliente(string nombre, string apellido, string contacto, eMetodo metodoPago, sLesion lesion, eNecesidad necesidad, const string dni) :DNI(dni)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->contacto = contacto;
    this->metodoPago = metodoPago;
    this->lesion = lesion;
    this->necesidad = necesidad;

}

cCliente::~cCliente() {

}

cCarrito cCliente::GET_CARRITO() {
    return;
}

void cCliente::AgregarProductosPerfumeria(cProducto prodPerfumeria, int cantidad) {
    return;
}

void cCliente::AgregarGolosinas(cProducto golosinas, int cantidad) {
    return;
}


/**
 * Project Untitled
 */


#ifndef _CEMPLEADOCAJA_H
#define _CEMPLEADOCAJA_H

#include "cVendedor.h"
#include "eMetodo.h"


class cEmpleadoCaja : public cVendedor {
private:
    double plataCaja;
public:
    cEmpleadoCaja(string dni);
    cEmpleadoCaja(string nombre, string apellido, int numeroEmpleado, const string dni, string contacto, double plataCaja);
    ~cEmpleadoCaja();
    cTicketdecompra Cobrar(cCliente &cliente);
    void emitirFactura(double precio, cCliente& cliente);
    bool chequearSaldoDisponible(cCliente cliente, double montoAPagar);
    
    double CalculaMontoACobrar(cCarrito oCarrito);
};

#endif //_CEMPLEADOCAJA_H


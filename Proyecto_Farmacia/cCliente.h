/**
 * Project Untitled
 */

#ifndef _CCLIENTE_H
#define _CCLIENTE_H

#include "eNecesidad.h"
#include "eMetodo.h"
#include "cReceta.h"
#include "cCarrito.h"
#include "cFactura.h"


class cCliente {
private:
    static int cantClientes;
    int numeroClientes;
    cFactura miFactura;
    cCarrito miCarrito;
    string nombre;
    string apellido;
    string contacto;
    eMetodo metodoPago;
    double saldoDisponible;
    double efectivodisponible;
    const string DNI;
    bool facturaFisica;
    double saldoMPago;
    cReceta miReceta;
public:
    cCliente(cCarrito _miCarrito, string nombre, string apellido, string contacto, eMetodo metodoPago,double saldoDisponible, double efectivoDisponible,  const string dni, bool facturaFisica,double MP, cReceta receta);
    cCliente(cCarrito _miCarrito, string nombre, string apellido, string contacto, eMetodo metodoPago, double saldoDisponible, double efectivoDisponible,  const string dni, bool facturaFisica, double MP);
    cCliente(string nombre, string apellido, string contacto, eMetodo metodoPago, double saldoDisponible, double efectivoDisponible,  const string dni, bool facturaFisica, double MP);
    ~cCliente();
    int GET_NUMEROCLIENTE();
    cCarrito *GET_CARRITO();
    bool GET_FORMATO();
    eMetodo GET_METODO();
    void SET_FACTURA(cFactura nuevaFactura);
    void AgregarProductosPerfumeria(cPerfumeria *prodPerfumeria, int cantidad);
    void AgregarGolosinas(cGolosinas* golosinas, int cantidad);
    string GET_DNI();
    cFactura *GET_FACTURA();
    string GET_APELLIDO();
    string GET_NOMBRE();
    double GET_SALDO_DISPONIBLE();
    double GET_EFECTIVO_DISPONIBLE();
    double GET_SALDO_MP();
    void SET_MP(double *saldoMP);
    void SET_SALDO(double *saldoDisponible);
    void SET_EFECTIVO(double *efectivoDisponible);
    cReceta GET_RECETA();
    cCliente& operator=(const cCliente&);
    void pagar(double montoTotal);
};

#endif //_CCLIENTE_H

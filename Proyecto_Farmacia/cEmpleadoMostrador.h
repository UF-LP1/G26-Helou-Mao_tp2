/**
 * Project Untitled
 */


#ifndef _CEMPLEADOMOSTRADOR_H
#define _CEMPLEADOMOSTRADOR_H

#include "cEmpleado.h"


class cEmpleadoMostrador : public cEmpleado {

private:
    unsigned int numActual;
    vector<cCliente> misClientes;

public:
   
    cEmpleadoMostrador(string nombre, string apellido, int numerEmpleado, const string dni, string contacto, unsigned int numActual);
    ~cEmpleadoMostrador();
  
    void SET_NUMACTUAL(unsigned int numero);
    void LlamarNumSiguiente(unsigned int numero);
    void EnviarClienteOtroEmp(cCliente _cliente);
    void agregarCliente(cCliente nuevoCliente);

};

#endif //_CEMPLEADOMOSTRADOR_H
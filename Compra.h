
#ifndef COMPRA_H
#define COMPRA_H

#include <iostream>

#include "Fecha.h"
#include "Producto.h"
#include "Direccion.h"

class Compra{
    public:
        Compra();
        Compra(Producto, Fecha);

        void setProd(Producto);
        void setFechaEnv(Fecha);

        Producto getProd();
        Fecha getFechaEnv();

        void realizarCompra(Producto);

    private:
        Producto producto;
        Fecha fechaEnvio;
};

Compra::Compra(){
    producto.setNombre("Producto");
}

Compra::Compra(Producto prod, Fecha fec){
    producto = prod;
    fechaEnvio = fec;
}

Producto Compra::getProd(){
    return producto;
}

Fecha Compra::getFechaEnv(){
    return fechaEnvio;
}




#endif //COMPRA_H
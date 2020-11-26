#ifndef USUARIO_H
#define USUARIO_H

#include "Direccion.h"

class Usuario{
    public:
        Usuario();
        Usuario(std::string, Direccion);

        void setName(std::string);
        void setDomicilio(int, std::string, std::string, std::string, std::string);

        std::string getName() const;
        Direccion getDomicilio() const;

        void imprimeUsuario();
        void registrarUsuario();

    private:
        std::string nombre;
        Direccion domicilio;
};

Usuario::Usuario(){
    nombre = "Sin nombre";
    domicilio.setCalle("Calle");
    domicilio.setCiudad("Ciudad");
    domicilio.setColonia("Colonia");
    domicilio.setCp("Cp");
    domicilio.setNum(1);
}

Usuario::Usuario(std::string nom, Direccion dom){
    nombre = nom;
    domicilio = dom;
}

void Usuario::setName(std::string nom){
    nombre = nom;
}

void Usuario::setDomicilio(int n, std::string ca, std::string co, std::string ci, std::string cp){
    domicilio.setNum(n);
    domicilio.setCalle(ca);
    domicilio.setColonia(co);
    domicilio.setCiudad(ci);
    domicilio.setCp(cp);
}

std::string Usuario::getName() const{
    return nombre;
}

Direccion Usuario::getDomicilio() const{
    return domicilio;
}

void Usuario::imprimeUsuario(){
    std::cout << nombre << std::endl;
    domicilio.imprimirDireccion();
}

#endif //USUARIO_H
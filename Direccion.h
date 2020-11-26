//Autor Jonathan Joaquin Quirino Carrasco

#ifndef DIRECCION_H
#define DIRECCION_H
#include <iostream>
#include <string>

class Direccion{
    public:
        Direccion();
        Direccion(int, std::string, std::string, std::string, std::string);

        int getNum() const;
        std::string getCalle() const;
        std::string getColonia() const;
        std::string getCiudad() const;
        std::string getCp() const;

        void setNum(int);
        void setCalle(std::string);
        void setColonia(std::string);
        void setCiudad(std::string);
        void setCp(std::string);

        void imprimirDireccion();

    private:
    int num;
    std::string calle;
    std::string colonia;
    std::string ciudad;
    std::string cp;

};

Direccion::Direccion(){
    num = 0;
    cp = "00000";
}

Direccion::Direccion(int n, std::string ca, std::string co, std::string ci, std::string _cp){
    num = n;
    calle = ca;
    colonia = co;
    ciudad = ci;
    cp = _cp;
}

int Direccion::getNum() const{
    return num;
}

void Direccion::setNum(int n){
    num = n;
}

std::string Direccion::getCalle() const{
    return calle;
}

void Direccion::setCalle(std::string ca){
    calle = ca;
}

std::string Direccion::getColonia() const{
    return colonia;
}

void Direccion::setColonia(std::string co){
    colonia = co;
}

std::string Direccion::getCiudad() const{
    return ciudad;
}

void Direccion::setCiudad(std::string ci){
    ciudad = ci;
}

std::string Direccion::getCp() const{
    return cp;
}

void Direccion::setCp(std::string _cp){
    cp = _cp;
}


void Direccion::imprimirDireccion(){
    std::cout << calle << " #" << num << ", " << colonia << ". " << ciudad << " " << cp;
}


#endif //DIRECCION_H
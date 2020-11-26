//Autor Jonathan Joaquin Quirino Carrasco

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>

class Producto{
    public:
        Producto();
        Producto(std::string, double, int, std::string);

        void setNombre(std::string);
        void setPrecio(double);
        void setDisp(int);
        void setDesc(std::string);

        std::string getNombre();
        double getPrecio();
        int getDisp();
        std::string getDesc();

        void imprimeProducto();

        void checarDisponibles(std::string);

    private:
        std::string nombre;
        double precio;
        int disp;
        std::string desc;
};

Producto::Producto(){
    nombre = "Producto";
    precio = 0.0;
    disp = 0;
    desc = "Descripcion";
}

Producto::Producto(std::string name, double price, int dispo, std::string descr){
    nombre = name;
    precio = price;
    disp = dispo;
    desc = descr;
}

void Producto::setNombre(std::string name){
    nombre  = name;
}

void Producto::setPrecio(double price){
    precio = price;
}

void Producto::setDisp(int dispo){
    disp = dispo;
}

void Producto::setDesc(std::string descr){
    desc = descr;
}

std::string Producto::getNombre(){
    return nombre;
}

double Producto::getPrecio(){
    return precio;
}

int Producto::getDisp(){
    return disp;
}

std::string Producto::getDesc(){
    return desc;
}


void Producto::imprimeProducto(){
    
    std::cout << nombre << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Descripcion: " << std::endl;
    std::cout << desc << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Unidades en stock: " << disp << std::endl;
}

#endif //PRODUCTO_H
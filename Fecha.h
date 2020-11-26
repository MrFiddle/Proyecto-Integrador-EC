
#ifndef FECHA_H
#define FECHA_H

#include <iostream>

class Fecha{
    public:
        Fecha();
        Fecha(int, int, int);

        int getDia();
        int getMes();
        int getAnio();

        void setDia(int);
        void setMes(int);
        void setAnio(int);

        void imprimeFecha();

    private:
        int dd;
        int mm;
        int aa;
};

Fecha::Fecha(){
    dd = 1;
    mm = 1;
    aa = 2020;
}

Fecha::Fecha(int d, int m, int a){
    dd = d;
    mm = m;
    aa = a;
}

int Fecha::getDia(){
    return dd;
}

int Fecha::getMes(){
    return mm;
}

int Fecha::getAnio(){
    return aa;
}

void Fecha::setDia(int d){
    dd = d;
}

void Fecha::setMes(int m){
    mm = m;
}

void Fecha::setAnio(int a){
    aa = a;
}

void Fecha::imprimeFecha(){
    std::cout << dd << "/" << mm << "/" << aa << "\n";
}

#endif //FECHA_H
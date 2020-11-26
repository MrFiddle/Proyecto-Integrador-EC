#include <iostream>
using namespace std;

#include "Direccion.h"
#include "Producto.h"
#include "Usuario.h"

int main(){

    char opc = 'a';
    do
    {
        cout << "Eres un cliente nuevo o antiguo? (S/N): ";
        cin >> opc;
    } while (opc != 'S' && opc != 's' && opc != 'N' && opc != 'n');

    Usuario user;
    string name;
    cout << "Escribe tu nombre: ";

    if (opc == 's' || opc == 'S'){
        //aqui se busca en un archivo el nombre, si no esta, decirle al usuario que intente de nuevo
        cout << "Quien eres? " << endl;
        cout << "hola";
    }else{
        //se registra al nuevo usuario y se le piden todos sus atributos
        cout << "Registrate, por favor" << endl;
    }
    
    


      do{
        cout << "Inicio" << endl;
        cout << "-------------" << endl;
        cout << "1. Consulta de productos" << endl;
        cout << "2. Consulta de productos por categoria" << endl;
        cout << "3. Realizar una compra" << endl;
        cout << "4. Salir" << endl;
        
        cin >> opc1;
    switch(opc){
      case '1':
        cout << "Entraste a opcion 1"<<endl;
        break;
      case '2':
        cout << "Entraste a opcion 2"<<endl;
        break;
      case '3':
        cout << "Entraste a opcion 3"<<endl;
        break;
      case '4':
        cout << "Saliendo del programa"<<endl;
        break;
      default:
        cout << "Opcion invalida";
    }
  }while(opc != '4');

    // Direccion d1;
    // d1.setNum(69);
    // d1.setCalle("El Fuerte");
    // d1.setColonia("A lado del ICO");
    // d1.setCiudad("Mazatlan");
    // d1.setCp("82157");

    // d1.imprimirDireccion();

    // Producto p1;
    // p1.setNombre("Laptop Gamer");
    // p1.setPrecio(24000);
    // p1.setDesc("Laptop gamer de gama media alta");
    // p1.setDisp(60);

    // p1.imprimeProducto();

    // Usuario user;

    // string nombre;
    // int num;
    // string calle;
    // string colonia;
    // string ciudad;
    // string cp;

    // cout << "Cual es tu nombre? ";
    // cin >> nombre;
    // cout << "Direccion de Envio" << endl;
    // cout << "--------------" << endl;
    // cout << "Calle: ";
    // cin >> calle;
    // cout << "# de exterior: ";
    // cin >> num;
    // cout << "Colonia: ";
    // cin >> colonia;
    // cout << "Ciudad: ";
    // cin >> ciudad;
    // cout << "CP: ";
    // cin >> cp;

    // user.setName(nombre);
    // user.setDomicilio(num, calle, colonia, ciudad, cp);
    // user.imprimeUsuario();
}
#include <iostream>
using namespace std;

class Persona{
   // atributos de Persona = nombres, apellidos,direccion,telefono
   protected :	string nombres,apellidos,direccion,fecha_nacimiento;
                int telefono;

      Persona (){

   }

   Persona (string nom,string ape,string dic,int tel,string fn){
         nombres = nom;
         apellidos = ape;
         direccion= dic;
         telefono = tel;
         fecha_nacimiento = fn;
   }
   // crud = crear,leer,actualizar,borrar
   void crear ();
   void leer ();
   void actualizar ();
   void borrar ();

};

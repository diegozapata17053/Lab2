#include <iostream>

/*2. Declare una estructura global con 6 miembros de distinto tipo y en este orden (con sus miembros inicializados):
* int
* char
* float
* char
* double
 * int
 */
struct datos1
{
 int val1;
 char val2;
 float val3;
 char val4;
 double val5;
 int val6;
}varstruct1;

 /* Declare otra estructura global con 6 miembros de distinto tipo y en este orden (con sus miembros inicializados):
 * int
 * int
 * float
 * char
 * char
 * double
 */
 struct datos2
 {
    int val7;
    int val8;
    float val9;
    char val10;
    char val11;
    double val12;
 }varstruct2;

struct datos1 *ptr;
struct datos2 *ptr2;


int main ()
{
    
/*1. Declare una cadena de caracteres llamada my_string utilizando un puntero */
  char *my_string = "C A D E N A _ V I S U A L";

std::cout<<"Cadena my_string: "<<my_string<<std::endl;
std::cout<< "Aqui va la cadena my_string "<<my_string<<std::endl;


//Declare punteros a cada una de las estructuras e imprima en pantalla el valor de sus miembros haciendo uso
//del operador ->

 ptr = &varstruct1;
 ptr->val1 = 1;
     std::cout << "OperaciC3n con -> val1: " << ptr->val1 << std::endl; 
 ptr->val2 ='d';
     std::cout << "OperaciC3n con -> val2: " << ptr->val2 << std::endl; 
 ptr->val3 =2.2;
     std::cout << "OperaciC3n con -> val3: " << ptr->val3 << std::endl; 
 ptr->val4 ='e';
     std::cout << "OperaciC3n con -> val4: " << ptr->val4 << std::endl; 
 ptr->val5 =3.4567;
     std::cout << "OperaciC3n con -> val5: " << ptr->val5 << std::endl; 
 ptr->val6 =4;
     std::cout << "OperaciC3n con -> val6: " << ptr->val6 << std::endl; 

ptr2 = &varstruct2;
 ptr2->val7 = 5;
     std::cout << "OperaciC3n con -> val7: " << ptr2->val7 << std::endl; 
 ptr2->val8 =6;
     std::cout << "OperaciC3n con -> val8: " << ptr2->val8 << std::endl; 
 ptr2->val9 =3.3;
     std::cout << "OperaciC3n con -> val9: " << ptr2->val9 << std::endl; 
 ptr2->val10 ='f';
     std::cout << "OperaciC3n con -> val10: " << ptr2->val10 << std::endl; 
 ptr2->val11 ='g';
     std::cout << "OperaciC3n con -> val11: " << ptr2->val11 << std::endl; 
 ptr2->val12 =8.123456;
     std::cout << "OperaciC3n con -> val12: " << ptr2->val12 << std::endl; 
    
//Luego imprima de nuevo el valor de los miembros de la estructura pero esta vez haga uso de "type casting",
//operadores y aritmetica de punteros

std::cout << "type casting val1: " << *((int*)ptr+0) << std::endl;
std::cout << "type casting val2: " << *((char*)ptr+4) << std::endl;
std::cout << "type casting val3: " << *((float*)ptr+2) << std::endl;
std::cout << "type casting val4: " << *((char*)ptr+12) << std::endl;
std::cout << "type casting val5: " << *((double*)ptr+2) << std::endl;
std::cout << "type casting val6: " << *((int*)ptr+6) << std::endl;

///////////////////////////////////////////////////////////////////////

std::cout << "type casting val7: " << *((int*)ptr2+0) << std::endl;
std::cout << "type casting val8: " << *((int*)ptr2+1) << std::endl;
std::cout << "type casting val9: " << *((float*)ptr2+2) << std::endl;
std::cout << "type casting val10: " << *((char*)ptr2+12) << std::endl;
std::cout << "type casting val11: " << *((char*)ptr2+13) << std::endl;
std::cout << "type casting val12: " << *((double*)ptr2+2) << std::endl;

//Calcule el tamaC1o de cada estructura con la funcion sizeof() y explique en un comentario sus observaciones
//acerca del resultado obtenido respecto a los tamanios de las estructuras



return 0;

}



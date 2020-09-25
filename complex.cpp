#include "complex.h"

//Metodos get e set
void Complex::setReal(float r){
    real = r;
}
float Complex::getReal(){
    return real;
}
void Complex::setImaginario(float i){
    imaginario = i;
}
float Complex::getImaginario(){
    return imaginario;
}

//Construtor parametrizado
Complex::Complex (float real, float imaginario){
    setReal(real);
    setImaginario(imaginario);
}


/* 
//Construtor copia
Complex::Complex(Complex &z){
    real = z.getReal();
    imaginario = z.getImaginario();
}
 */


//sobrecarga do operador de adição
Complex Complex::operator+ (Complex &z) {
    float r = real + z.real;
    float i = imaginario + z.imaginario;
    return Complex(r, i);
}

//sobrecarga do operador de multiplicação
Complex Complex::operator* (Complex &z) {
    float r = ((real * z.real) - (imaginario - z.imaginario));
    float i = ((real * z.imaginario)+(imaginario * z.real));
    return Complex(r, i);
}

//sobrecarga do operador de inserção
std::ostream& operator<< (std::ostream &saida, Complex const &z) {
    saida << "z = " << z.real << "+" << z.imaginario << "i";
    return saida;
}
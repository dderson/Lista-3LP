#ifndef COMPLEX_H
#define COMPLEX_H
#include <ostream>

class Complex {
    private:
        float real;
        float imaginario;
    
    public:
        float getReal();
        void setReal(float real);
        float getImaginario();
        void setImaginario(float imaginario);

        Complex (float real, float imaginario);
       /*  Complex (Complex &z); */
        Complex operator+ (Complex &z);
        Complex operator* (Complex &z);
        friend std::ostream& operator<< (std::ostream &o, Complex const &z);

};

#endif
#include "Fixed.hpp"

int main(void)
{   
    Fixed a;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
     

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;

    std::cout << a << " == " << b << "---" << (a == b)<< std::endl;
    std::cout << a << " == " << a << "---" << (a == a)<< std::endl;
    std::cout << a << " != " << b << "---" << (a != b)<< std::endl;
    std::cout << a << " != " << a << "---" << (a != a)<< std::endl;
    std::cout << a << " >= " << b << "---" << (a >= b)<< std::endl;
    std::cout << a << " <= " << b << "---" << (a <= b)<< std::endl;
    std::cout << a << " > " << b << "---" << (a > b)<< std::endl;
    std::cout << a << " < " << b << "---" << (b > a)<< std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    a = 2.0f;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << a + b << std::endl;
    std::cout << b + a << std::endl;

    std::cout << a - b << std::endl;
    std::cout << b - a << std::endl;

    std::cout << a * b << std::endl;
    std::cout << b * a << std::endl;

    std::cout << a / b << std::endl;
    std::cout << b / a << std::endl;

    std::cout << "Maximo de " << a << " y " << b << " = " << Fixed::max(a, b) << std::endl;
    std::cout << "Mínimo de " << a << " y " << b << " = " << Fixed::min(a, b) << std::endl;

   return 0;
}
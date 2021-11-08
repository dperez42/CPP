/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:50:14 by daniel            #+#    #+#             */
/*   Updated: 2021/11/08 12:47:43 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void) : _fixed_point(0)
{   
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point = 0;
    return ;
}
// Takes a integer and converts it to correspondant fixed(8) point value
Fixed::Fixed(int const nb_int)
{
    std::cout << "Int constructor called" << nb_int << std::endl;
    this->_fixed_point = nb_int << this->_number_bits;
    return ; 
}
// Takes a float and converts it to correspondant fixed(8) point value
Fixed::Fixed(float const nb_float)
{
    std::cout << "Float constructor called " << nb_float << std::endl;
    int power = pow(2, this->_number_bits);
    this->_fixed_point = (int)roundf(nb_float*power);
    return ;  
}
// Copy a(b)        
Fixed::Fixed(Fixed  const &instance)
{   
    std::cout << "Copy constructor called " << std::endl;
    *this = instance;
    return ;
}
//Destructor
Fixed::~Fixed()
{   
    std::cout << "Destructor called " << std::endl;
    return ;
}

//Getter
int Fixed::getRawBits() const
{
     return(this->_fixed_point);
}
//Setter
void Fixed::setRawBits(int raw)
{
    this->_fixed_point = raw;
    return ;
}
//Functions
float Fixed::toFloat(void) const
{
    int power = pow(2, this->_number_bits);
    float result = (float)this->_fixed_point/power;
    return (result);    
}

int Fixed::toInt(void) const
{
    return(roundf(this->toFloat()));
}

//Operators
Fixed &Fixed::operator=(Fixed const &instance)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_fixed_point = instance.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &instance)
{
    return (std::cout << instance.toFloat());
}
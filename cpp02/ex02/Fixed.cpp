/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:50:14 by daniel            #+#    #+#             */
/*   Updated: 2021/11/08 12:48:06 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{   
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point = 0;
    return ;
}

Fixed::Fixed(int const nb_int)
{
    std::cout << "Int constructor called" << nb_int << std::endl;
    this->_fixed_point = nb_int << this->_number_bits;
    return ; 
}

Fixed::Fixed(float const nb_float)
{
    std::cout << "Float constructor called " << nb_float << std::endl;
    int power = pow(2, this->_number_bits);
    this->_fixed_point = (int)roundf(nb_float*power);
    return ;  
}
        
Fixed::Fixed(Fixed  const &instance)
{   
    std::cout << "Copy constructor called " << std::endl;
    *this = instance;
    return ;
}

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




Fixed const &Fixed::max(Fixed const &a,  Fixed  const &b)
{
    if (a > b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a,  Fixed  &b)
{
    if (a > b)
        return a;
    return b;
}

Fixed const &max(Fixed const &a,  Fixed  const &b)
{
    return (Fixed::max(a,b));
}

Fixed &max(Fixed &a,  Fixed  &b)
{
    return (Fixed::max(a,b));
}

Fixed const &Fixed::min(Fixed const &a,  Fixed  const &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a,  Fixed  &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed const &min(Fixed const &a,  Fixed  const &b)
{
    return (Fixed::min(a,b));
}

Fixed &min(Fixed &a,  Fixed  &b)
{
    return (Fixed::min(a,b));
}


//Operators
Fixed &Fixed::operator=(Fixed const &instance)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_fixed_point = instance.getRawBits();
    return *this;
}

Fixed   Fixed::operator+(Fixed const &instance) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() + instance.getRawBits());
    return (result);
}

Fixed   Fixed::operator-(Fixed const &instance) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() - instance.getRawBits());
    return (result);
}
       

Fixed   Fixed::operator*(Fixed const &instance) const
{
    Fixed result(this->toFloat() * instance.toFloat());
    return (result);
}

Fixed   Fixed::operator/(Fixed const &instance) const
{
    Fixed result(this->toFloat() / instance.toFloat());
    return (result);
}

Fixed	&Fixed::operator++( void )
 {
 	this->_fixed_point++;
 	return (*this);
 }
 
 Fixed	Fixed::operator++( int )
 {
 	Fixed	old(*this);
 	++(*this);
 	return (old);
 }
 
 Fixed	&Fixed::operator--( void )
 {
 	this->_fixed_point--;
 	return (*this);
 }
 
 Fixed	Fixed::operator--( int )
 {
 	Fixed	old(*this);
 
 	--(*this);
 	return (old);
 }

bool	Fixed::operator>( const Fixed &instance ) const
 {
 	return (this->getRawBits() > instance.getRawBits());
 }
 
 bool	Fixed::operator<( const Fixed &instance ) const
 {
 	return (this->getRawBits() < instance.getRawBits());
 }
 
 bool	Fixed::operator>=( const Fixed &instance ) const
 {
 	return (this->getRawBits() >= instance.getRawBits());
 }
 
 bool	Fixed::operator<=( const Fixed &instance ) const
 {
 	return (this->getRawBits() <= instance.getRawBits());
 }
 
 bool	Fixed::operator==( const Fixed &instance ) const
 {
 	return (instance.getRawBits() == this->getRawBits());
 }
 
 bool	Fixed::operator!=( const Fixed &instance ) const
 {
 	return (this->getRawBits() != instance.getRawBits());
 }


std::ostream &operator<<(std::ostream &o, Fixed const &instance)
{
	o << instance.toFloat();
	return o;
}
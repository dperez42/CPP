/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:50:14 by daniel            #+#    #+#             */
/*   Updated: 2021/10/17 17:21:12 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{   
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point = 0;
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

Fixed &Fixed::operator=(Fixed const &instance)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_fixed_point = instance.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits() nember function called " << std::endl;
    return(this->_fixed_point);
}

void Fixed::setRawBits(int raw)
{
    std::cout << "setRawBits(int raw) nember function called " << std::endl;
    this->_fixed_point = raw;
    return ;
}
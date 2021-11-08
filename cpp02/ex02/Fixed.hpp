/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:43:47 by daniel            #+#    #+#             */
/*   Updated: 2021/11/03 19:33:05 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        //constructor
        //default
        Fixed();
        //initialize
        Fixed(int const nb_int);
        Fixed(float const nb_float);
        Fixed(Fixed const &instance);
        //destructor
        ~Fixed();
        //operator 
        Fixed   &operator=(Fixed const &instance);
        Fixed   operator+(Fixed const &instance) const;
        Fixed   operator-(Fixed const &instance) const;
        Fixed   operator*(Fixed const &instance) const;
        Fixed   operator/(Fixed const &instance) const;
        Fixed   &operator++(void);
        Fixed   operator++( int );
        Fixed   &operator--(void);
        Fixed   operator--(int);
        bool	operator>( const Fixed &rhs ) const ;
        bool	operator<( const Fixed &rhs ) const ;
        bool	operator>=( const Fixed &rhs ) const ;
        bool	operator<=( const Fixed &rhs ) const ;
        bool	operator==( const Fixed &rhs ) const ;
        bool	operator!=( const Fixed &rhs ) const ;
            
        int getRawBits(void) const;
        //setter
        void setRawBits(int raw);
         
        float toFloat(void) const;
        int toInt(void) const;
        
       
        static Fixed &max(Fixed &a,  Fixed  &b);
        static Fixed const &max(Fixed const &a,  Fixed  const &b);
        static Fixed &min(Fixed &a,  Fixed  &b);
        static Fixed const &min(Fixed const &a,  Fixed  const &b);
   
    private:
        int                 _fixed_point;
        const static int    _number_bits = 8;
        
};

Fixed const &max(Fixed const &a,  Fixed  const &b);
Fixed &max(Fixed &a,  Fixed  &b);
Fixed const &min(Fixed const &a,  Fixed  const &b);
Fixed &min(Fixed &a,  Fixed  &b);
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif
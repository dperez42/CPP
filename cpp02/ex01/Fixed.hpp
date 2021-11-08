/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:43:47 by daniel            #+#    #+#             */
/*   Updated: 2021/11/03 18:00:24 by dperez-z         ###   ########.fr       */
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
        //Defaut
        Fixed();
        //Initialize
        Fixed(int const nb_int);
        Fixed(float const nb_float);
        Fixed(Fixed const &instance);
        //destructor
        ~Fixed();
        //operator overload '='
        Fixed   &operator=(Fixed const &instance);
        

        //getter
        int getRawBits(void) const;
        
        //setter
        void setRawBits(int raw);
         
        //functions
        float toFloat(void) const;
        int toInt(void) const;
        
    private:
        int                 _fixed_point;
        const static int    _number_bits = 8;
        
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif


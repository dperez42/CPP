/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:43:47 by daniel            #+#    #+#             */
/*   Updated: 2021/11/03 17:33:13 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        //constructors
        //Default
        Fixed(void);
        //Initialize
        Fixed(Fixed const &instance);
        //destructor
        ~Fixed();
        
        //operator overload '='
        Fixed   &operator=(Fixed const &instance);
        //getter
        int getRawBits(void) const;
        //setter
        void setRawBits(int raw);
        
    private:
        int                 _fixed_point;
        const static int    _number_bits = 8;
        
};

#endif
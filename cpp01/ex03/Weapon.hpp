/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:14:01 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:14:02 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon 
{
    private :
        std::string type;
    public :
        Weapon( void );
        Weapon( std::string type );
        ~Weapon( void );
        std::string getType(void) const;
        void    setType(std::string type);
    private :
        std::string _type;
};

#endif 
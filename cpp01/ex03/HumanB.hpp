/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:13:50 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 16:57:29 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        void attack(void);
        HumanB ( std::string name, Weapon &weapon);
        HumanB ( std::string name );
        void    setName( std::string name );
        std::string getName( void ) const;
        void    setWeapon( Weapon &weapon );
        std::string getWeapon( void ) const;
    private:
        std::string name;
        Weapon *weapon;
};

#endif
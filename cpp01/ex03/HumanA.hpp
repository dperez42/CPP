/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:13:43 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:13:44 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

    public:
        void attack( void );
        HumanA( std::string name, Weapon &weapon );
        void    setName( std::string name );
        std::string getName( void ) const;
        void    setWeapon( Weapon &weapon );
        std::string getWeapon( void ) const;
    private:
        std::string name;
        Weapon &weapon;
};

#endif
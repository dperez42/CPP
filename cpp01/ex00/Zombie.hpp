/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:15:02 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:15:03 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

// LIBS
# include <iostream>

// PROTOTYPES
class Zombie;

// CLASS DEFINITIONS
class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        //Set

        //Get

        // Additionnal
        void    announce();

        // Exceptions
    
    private:
        std::string _zombie_name;
};
#endif
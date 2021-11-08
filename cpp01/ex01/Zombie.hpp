/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:14:54 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:14:55 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

// LIBS
# include <iostream>

// PROTOTYPES
class Zombie;
Zombie *zombieHorde(int N, std::string name);

// CLASS DEFINITIONS
class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        //Set
        void setName(std::string name);
        //Get

        // Additionnal
        void    announce();

        // Exceptions
    
    private:
        std::string _zombie_name;
};

#endif
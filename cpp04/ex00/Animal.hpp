/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:25:42 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:25:43 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cmath>

class Animal
{
    protected:
        std::string     type;
    public:
        //constructor
        Animal(void);
        Animal(std::string  Type);
        Animal(Animal const &instance);

        //Destructor
        virtual ~Animal();
        
        //operator 
        Animal   &operator=(Animal const &instance);

        //Functions
        std::string getType(void) const;
        void setType(std::string const Type);
        virtual void   makeSound(void) const;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:26:02 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:26:05 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        //constructor
        Dog(void);
        Dog(std::string  type);
        Dog(Dog const &instance);

        //Destructor
        ~Dog();
        
        //operator 
       Dog  &operator=(Dog const &instance);

        //Functions
        virtual void  makeSound(void) const;
    //private:
};

#endif
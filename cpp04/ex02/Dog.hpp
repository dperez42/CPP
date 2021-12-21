/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:23 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:24 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *myBrain;
    public:
        //constructor
        Dog(void);
        Dog(std::string  type);
        Dog(Dog const &instance);

        //Destructor
        virtual ~Dog();
        
        //operator 
       Dog  &operator=(Dog const &instance);

        //Functions
      virtual void  makeSound(void) const;
      void  saveIdea(std::string idea, int nb);
      std::string getIdea(int nb); 
    //private:
};

#endif
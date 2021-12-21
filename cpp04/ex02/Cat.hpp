/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:14 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:15 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *myBrain;
    public:
        //constructor
        Cat(void);
        Cat(std::string  type);
        Cat(Cat const &instance);

        //Destructor
        virtual ~Cat();
        
        //operator 
        Cat  &operator=(Cat const &instance);

        //Functions
        virtual void makeSound() const;
        void  saveIdea(std::string idea, int nb);
        std::string getIdea(int nb); 
    //private:
};

#endif
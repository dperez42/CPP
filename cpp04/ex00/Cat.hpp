/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:25:50 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:25:51 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        //constructor
        Cat(void);
        Cat(std::string  type);
        Cat(Cat const &instance);

        //Destructor
        ~Cat();
        
        //operator 
       Cat  &operator=(Cat const &instance);

        //Functions
        virtual void makeSound() const;
    //private:
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:26:31 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:26:34 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        //constructor
        WrongCat(void);
        WrongCat(std::string  type);
        WrongCat(WrongCat const &instance);

        //Destructor
        ~WrongCat();
        
        //operator 
       WrongCat  &operator=(WrongCat const &instance);

        //Functions
        void makeSound();      
};

#endif
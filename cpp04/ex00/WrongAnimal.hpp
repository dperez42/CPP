/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:26:21 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:26:23 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cmath>

class WrongAnimal
{
    protected:
        std::string     type;
    public:
        //constructor
        WrongAnimal(void);
        WrongAnimal(std::string  Type);
        WrongAnimal(WrongAnimal const &instance);

        //Destructor
        virtual ~WrongAnimal();
        
        //operator 
        WrongAnimal   &operator=(WrongAnimal const &instance);

        //Functions
        std::string getType(void) const;
        void setType(std::string const Type);
        
        void   makeSound(void);
};

#endif
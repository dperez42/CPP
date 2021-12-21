/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:27:54 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:27:55 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{   
    this->type = "Unnamed";
    std::cout << "\033[0m" << "🐮 Default \033[1;31mAnimal \033[0mConstructor called name: " << this->type << std::endl;
    return ;
}

Animal::Animal(std::string  Type)
{   
    this->type = Type;
    std::cout << "\033[0m" << "🐮 Init \033[1;31mAnimal \033[0mConstructor called name: \033[0m" << this->type << std::endl;
    return ;
}

Animal::Animal(Animal  const &instance)
{   
    std::cout << "\033[0m" << "🐮 Copy \033[1;31mAnimal \033[0mConstructor called \033[0m" << std::endl;
    *this = instance;
    return ;
}

Animal::~Animal()
{   
    std::cout << "\033[0m" << "🐮 Destructor \033[1;31mAnimal \033[0mcalled name: " << this->type << std::endl;
    return ;
}

//Operators
Animal   &Animal::operator=(Animal const &instance)
{
    std::cout << "\033[0m" << "🐮 Assignation \033[1;31mAnimal \033[0m Operator called" << std::endl;
    this->type = instance.getType();
    return *this;
}

//Functions
void Animal::makeSound() const
{
     std::cout << "\033[0m" << "🐮 \033[1;31mAnimal \033[0msounds GRRR " << std::endl;
}
//Getters and Setters
std::string Animal::getType(void) const
{ return(this->type);}
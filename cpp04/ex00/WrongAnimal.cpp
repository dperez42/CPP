/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:26:16 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:26:17 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{   
    this->type = "Unnamed";
    std::cout << "\033[1;31m" << "🐮  Default Constructor Animal called name: " << this->type << "\033[0m" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string  Type)
{   
    this->type = Type;
    std::cout << "\033[1;31m" << "🐮  Init Constructor Animal called name: " << this->type << "\033[0m" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance)
{   
    std::cout << "\033[1;31m" << "🐮  Copy Constructor Animal called \033[0m" << std::endl;
    *this = instance;
    return ;
}

WrongAnimal::~WrongAnimal()
{   
    std::cout << "\033[1;31m" << "🐮  Destructor Animal \033[1;31mcalled name: " << this->type << "\033[0m" << std::endl;
    return ;
}

//Operators
WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &instance)
{
    std::cout << "\033[1;31m" << "🐮  Assignation Operator Animal called \033[0m" << std::endl;
    this->type = instance.getType();
    return *this;
}

//Functions
void WrongAnimal::makeSound()
{
     std::cout << "\033[1;31m" << "🐮  Animal sounds GRRR \033[0m" << std::endl;
}
//Getters and Setters
std::string WrongAnimal::getType(void) const
{ return(this->type);}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:26:26 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:26:28 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{   
    this->type = "Cat";
    std::cout << "\033[1;32m" << "🐱 Default constructor Cat called name: " << this->type << "\033[0m" << std::endl;
    return ;
}

WrongCat::WrongCat(std::string  type)
{   
    this->type = "Cat";
    std::cout << "\033[1;32m" << "🐱 Init Constructor Cat called name: " << this->type << "\033[0m" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat  const &instance)
{   
    std::cout << "\033[1;32m" << "🐱 Copy Constructor Cat called \033[0m" << std::endl;
    *this = instance;
    return ;
}

WrongCat::~WrongCat()
{   
    std::cout << "\033[1;32m" << "🐱 Destructor Cat called name: " << this->type << "\033[0m" << std::endl;
    return ;
}

//Operators
WrongCat  &WrongCat::operator=(WrongCat const &instance)
{
    std::cout << "\033[1;32m" << " 🐱 Assignation Operator Cat called \033[0m" << std::endl;
    this->type = instance.getType();
    return *this;
}

//Functions
void WrongCat::makeSound() 
{
     std::cout << "\033[1;32m" << "🐱 Cat sounds MIAU \033[0m" << std::endl;
}


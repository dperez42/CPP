/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:25:46 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:25:47 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{   
    this->type = "Cat";
    std::cout << "\033[0m" << "🐱 Default \033[1;32mCat \033[0m Constructor called name: " << this->type << std::endl;
    return ;
}

Cat::Cat(std::string  type)
{   
    this->type = "Cat";
    std::cout << "\033[0m" << "🐱 Init \033[1;32mCat \033[0m Constructor called name: " << this->type << std::endl;
    return ;
}

Cat::Cat(Cat  const &instance)
{   
    std::cout << "\033[0m" << "🐱 Copy \033[1;32mCat \033[0m Constructor called " << std::endl;
    *this = instance;
    return ;
}

Cat::~Cat()
{   
    std::cout << "\033[0m" << "🐱 Destructor \033[1;32mCat \033[0mcalled name: " << this->type << std::endl;
    return ;
}

//Operators
Cat  &Cat::operator=(Cat const &instance)
{
    std::cout << "\033[0m" << " 🐱 Assignation \033[1;32mCat \033[0mOperator called " << std::endl;
    this->type = instance.getType();
    return *this;
}

//Functions
void Cat::makeSound() const
{
     std::cout << "\033[0m" << "🐱 \033[1;32mCat\033[0m sounds MIAU " << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:25:55 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:25:58 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{   
    this->type = "Dog";
    std::cout << "\033[0m" << "🐶 Default \033[1;33mDog\033[0m Constructor called name: " << this->type << std::endl;
    return ;
}

Dog::Dog(std::string  type)
{   
    this->type = "Dog";
    std::cout << "\033[0m" << "🐶 Init \033[1;33mDog\033[0m Constructor called name: " << this->type << std::endl;
    return ;
}

Dog::Dog(Dog  const &instance)
{   
    std::cout << "\033[0m" << "🐶 Copy \033[1;33mDog\033[0m Constructor called " << std::endl;
    *this = instance;
    return ;
}

Dog::~Dog() 
{   
    std::cout << "\033[0m" << "🐶 Destructor \033[1;33mDog\033[0m called name: \033[0m" << this->type << "\033[0m" << std::endl;
    return ;
}

//Operators
Dog  &Dog::operator=(Dog const &instance)
{
    std::cout << "\033[0m" << "🐶 Assignation \033[1;33mDog\033[0m Operator called " << std::endl;
    this->type = instance.getType();
    return *this;
}
//Functions
void Dog::makeSound() const
{
     std::cout << "\033[0m" << "🐶 \033[1;33mDog\033[0m sounds WOUFF " << std::endl;
}

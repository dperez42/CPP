/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:26:10 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:26:12 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

std::cout<<"----- testing clase -------------"<<std::endl;
Animal* ani = new Animal();
Animal* j = new Dog();
Animal* i = new Cat();
std::cout<<"\n"<<std::endl;
std::cout << ani->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout<<std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
ani->makeSound();
std::cout<<std::endl;
delete ani;
delete j;
delete i;
std::cout<<"\n----- end testing ----------------"<<std::endl;

std::cout<<"----- testing wrong clase --------"<<std::endl;

WrongAnimal *wrong_animal = new WrongCat();
wrong_animal->makeSound();
delete wrong_animal;
std::cout<<"----- end testing ----------------"<<std::endl;
return 0;
}
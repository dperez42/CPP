/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:27 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:28 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

//Animal ani;

Dog dog1;
dog1.saveIdea("dog1_idea0",0);
std::cout << "Idea 0 in dog1: " << dog1.getIdea(0) << " " << std::endl;
std::cout << "Making a deep copy dog1 to dog2" << std::endl;
Dog dog2;
dog2 = dog1;
std::cout << "Idea 0 in dog2: " << dog2.getIdea(0) << " " << std::endl;
std::cout << "Idea 0 in dog2: " << dog2.getIdea(0) << " " << std::endl;
std::cout << "Changing the idea 0 in dog1 to new idea" << std::endl;
dog1.saveIdea("dog1_new_idea",0);
std::cout << "Idea 0 in dog1: " << dog1.getIdea(0) << " " << std::endl;
std::cout << "Idea 0 in dog2: " << dog2.getIdea(0) << " " << std::endl;

std::cout<<"----- end testing ----------------"<<std::endl;
system("leaks main");
return 0;
}
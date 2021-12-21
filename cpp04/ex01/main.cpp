/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:27:40 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 14:10:00 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

Animal* myarray[10];
int c;
c = 0;
while (c < 5)
{
    myarray[c] = new Dog();
    c++;
};
c = 5;
while (c < 10)
{
    myarray[c] = new Cat();
    c++;
};
c = 0;
while (c < 10)
{
    delete myarray[c];
    //myarray[c].;
    c++;
}




//delete [] myarray;


std::cout<<"----- testing brain -------------"<<std::endl;
Brain brain1;

brain1.saveIdea("1 idea", 1); 
std::cout << brain1.getIdea(1) << std::endl;
std::cout << brain1.getIdea(0) << std::endl;

Brain* brain2 = new Brain();
brain2->saveIdea("2 idea", 1); 
std::cout << brain2->getIdea(1) << std::endl;

Brain brain3;
brain3 = brain1;
std::cout << brain3.getIdea(1) << std::endl;

Brain brain4(*brain2);
std::cout << brain4.getIdea(1) << std::endl;
delete brain2;
std::cout<<"----- end testing brain -------------"<<std::endl;



//Animal* meta = new Animal();



Animal* dog0 = new Dog();
//dog0->saveIdea ("dog 0 idea",0);
//dog0->saveIdea ("dog 0 idea",10000);
//std::cout << dog0 ->getIdea(0) << " " << std::endl;

Animal* dog;
dog = dog0;
//std::cout << dog ->getIdea(0) << " " << std::endl;


Dog dog1;
dog1.saveIdea("dog1 idea0",0);
std::cout << "Idea 0 in dog1: " << dog1.getIdea(0) << " " << std::endl;

std::cout << "Making a deep copy dog1 to dog2" << std::endl;
Dog dog2;
dog2 = dog1;
std::cout << "Idea 0 in dog2: " << dog2.getIdea(0) << " " << std::endl;

std::cout << "Changing the idea 0 in dog1 to new idea" << std::endl;
dog1.saveIdea("dog1 new idea",0);
std::cout << "Idea 0 in dog1: " << dog1.getIdea(0) << " " << std::endl;
std::cout << "Idea 0 in dog2: " << dog2.getIdea(0) << " " << std::endl;

delete dog0;


/*
Animal* i = new Cat();
std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
*/
/*
j->makeSound();
j->saveIdea("1 idea", 1);
std::cout << j->getIdea(1) << std::endl;
j->saveIdea("1 idea", 200);
std::cout << j->getIdea(-1) << std::endl;
*/
//meta->makeSound();
//delete meta;

//delete dog;
//delete i;
std::cout<<"----- end testing ----------------"<<std::endl;

return 0;
}
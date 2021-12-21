/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:43 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 14:25:14 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
	ICharacter* me = new Character("me");
    
	AMateria* tmp;						
    tmp = src->createMateria("ice");	//Creo material tipo ICE
    me->equip(tmp);  					//Equipa a ICharacter con tmp lo mete en la lista 
    tmp = src->createMateria("cure");	//Creo material tipo CURE
    me->equip(tmp);						//Equipa a ICharacter con tmp lo mete en la lista

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);						//Use el material [0] contra BOB
    me->use(1, *bob);						//Use el material [1] contra BOB
    delete bob;
    delete me;
    delete src;

    std::cout << "-----------  ----------" << std::endl;
	{
		Character toto("Toto");
		Character titi("Titi");
		AMateria *ice1=new Ice();
		AMateria *cure1=new Cure();
		MateriaSource src;
		
		src.learnMateria(ice1->clone());
		src.learnMateria(cure1->clone());
		src.learnMateria(ice1->clone());
		
		AMateria *ice2=src.createMateria("ice");
		AMateria *cure2=src.createMateria("cure");
		AMateria *ice3=src.createMateria("ice");
		AMateria *cure3=src.createMateria("cure");
		AMateria *ice4=src.createMateria("ice");
		AMateria *cure4=src.createMateria("cure");
		AMateria *ice5=src.createMateria("ice");
		AMateria *cure5=src.createMateria("cure");

		std::cout << "-----------  Equipe toto with 5 ud Ice > toto.equip(ice1);----------" << std::endl;
		toto.equip(ice1);
		toto.equip(ice2);
		toto.equip(ice3);
		toto.equip(ice4);
		toto.equip(ice5);
		std::cin.ignore();
		std::cout << "-----------  Equipe titi with 5 ud Cure > titi.equip(cure1);----------" << std::endl;
		titi.equip(cure1);
		titi.equip(cure2);
		titi.equip(cure3);
		titi.equip(cure4);
		titi.equip(cure5);
		std::cin.ignore();
		std::cout << "-----------  Unequipe toto number 3 (ice) > toto.unequip(3); ----------"  << std::endl;
		toto.unequip(3);
		std::cin.ignore();
		std::cout << "-----------  Unequipe titi number 2 (cure) (twice) and a material out of the list > titi.unequip(2);----------" << std::endl;
		titi.unequip(2);
		titi.unequip(2);
		toto.unequip(13);
		std::cin.ignore();
		std::cout << "-----------  Trying to use material detete before (nothing happens) > toto.use(3, titi); ----------" << std::endl;
		toto.use(3, titi);
		titi.use(2, toto);
		std::cin.ignore();

		std::cout << "-----------  Calling destructors ----------" << std::endl;
		delete ice4;
		delete ice5;
		delete cure3;
		delete cure5;
		std::cin.ignore();
	}
	std::cout << "------------- Coping Characters  ------------------------ " << std::endl;
	{
		Character obj("Toto");
		Character obj1(obj);
		Character obj2;
	
		obj2=obj;
		std::cout << "obj: " << obj.getName() << " obj1: "
			<< obj1.getName() << " obj1:"
			<< obj2.getName() << " " << std::endl;
		std::cin.ignore();
	}
	std::cout << "----------- Deep Copy ------------------ " << __LINE__ << std::endl;
	{
		Character new_Peter("NewPeter");
		Character new_Bob;
		AMateria *new_ice=new Ice();
		AMateria *new_cure=new Cure();
		new_Peter.equip(new_ice);
		new_Peter.equip(new_cure);
		new_Bob = new_Peter;
		new_Bob.setName("NewBob");
		std::cout << "----------- new_Peter to new_Bob ------------------ " << std::endl;
		new_Peter.use(0, new_Bob);
		new_Peter.use(1, new_Bob);
		std::cout << "----------- new_Bob to new_Peter ------------------ " << std::endl;
		new_Bob.use(0, new_Peter);
		new_Bob.use(1, new_Peter);
		std::cin.ignore();
	}

	ICharacter* prueba= new Character("prueba");
	prueba->
	prueba->setName("pepe");
	delete prueba;
    return 0; 
}
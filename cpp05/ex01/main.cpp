/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:48 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 09:17:08 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
		
	{
		std::cout << "check ortho in Bureaucrat" << std::endl;
		std::cin.ignore();
		Bureaucrat bob("Bob",50);
		std::cout << bob;
		Bureaucrat bob1(bob);
		std::cout << bob1;
		Bureaucrat bob2("tmp",70);
        std::cout << bob2;
		bob2 = bob;
		std::cout << bob2;
	}

	{
		std::cout << "check ortho in form" << std::endl;
		std::cin.ignore();
		Form fbob("Bob",50,75);
		std::cout << fbob;
		Form fbob1(fbob);
		std::cout << fbob1;
		Form fbob2("tmp",70, 100);
        std::cout << fbob2;
		fbob2 = fbob;
		std::cout << fbob2;
	}

	std::cout << "---- Using try/catch increment in forms --------" << std::endl;
	std::cin.ignore();
	{
		try
		{
			Form form4("form4", 200, 50);
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			Form form5("form5", -1, 50);
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			Form form6("form6", 100, 250);
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
		try
		{
			Form form7("form7", 100, -250);
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
 
	{
		std::cout << "\nSigned a form with grade enought\n" << std::endl;
		std::cin.ignore();
		Bureaucrat bob("Bob",50);
		std::cout << bob;
		Form form10("form10", 100, 50);
		std::cout << form10;
		try
		{
			form10.beSigned(bob);
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
		std::cout << form10;

		std::cout << "\nSigned a form without enought grade \n" << std::endl;
		std::cin.ignore();
		Bureaucrat fred("Fred",120);
		std::cout << fred;
		Form form11("form11", 100, 50);
		std::cout << form11;
		try
		{
			form11.beSigned(fred);
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
		std::cout << form11;
	}

	{
		std::cout << "\nSigned a form with grade enought\n" << std::endl;
		Bureaucrat john("John",50);
		std::cout << john;
		Form form11("form11", 100, 50);
		std::cout << form11;
		john.signForm(form11);
		std::cout << form11;

		std::cout << std::endl;
		Bureaucrat jony("Jony",150);
		std::cout << jony;
		Form form12("form12", 100, 50);
		std::cout << form12;
		jony.signForm(form12);
		std::cout << form12;
		std::cout << std::endl;
	}





	/*
	{
		Bureaucrat bob("Bob",50);
		std::cout << bob;
		Bureaucrat bob1(bob);
		std::cout << bob1;
		Bureaucrat bob2("tmp",70);
        std::cout << bob2;
		bob2 = bob;
		std::cout << bob2;
	}
    
	std::cout << "---- Trying increment Grade --------" << std::endl;
	{
		Bureaucrat jack("Jack",75);
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
	}
    
	std::cout << "---- Trying decrement Grade --------" << std::endl;
	{
		Bureaucrat james("James",75);
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
	}
    
	std::cout << "---- Using try/catch increment --------" << std::endl;
	{
		try
		{
			Bureaucrat toto("Toto",1);
			std::cout << toto;
			toto.incrementGrade();
			std::cout << toto;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
    
	std::cout << "---- Using try/catch decrement --------" << std::endl;
	{
		try
		{
			Bureaucrat titi("Titi",150);
            std::cout << titi;
			titi.decrementGrade();
			std::cout << titi;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
    */
   
	return (0);
}
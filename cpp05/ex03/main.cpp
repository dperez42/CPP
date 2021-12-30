/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:53:58 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 10:29:53 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
 #include "PresidentialPardonForm.hpp"
 #include "RobotomyRequestForm.hpp"
 #include "ShrubberyCreationForm.hpp"
 #include "Intern.hpp"

 int	main(void)
 {
 	Intern		intern1;
 	Bureaucrat	paul("Paul", 3);
	Bureaucrat	teddy("Teddy", 150);
 	Form		*form;

	std::cout << "Create: " << paul << std::endl;
	std::cout << "Create: " << teddy << std::endl;
	std::cout << "\033[1;32m" << "------------------ Creating forms-------------------" << "\033[0m"  << std::endl;
 	
	form = NULL;
	try
	{ form = intern1.makeForm("this one doesn't exist", "Justin"); }
	catch (std::exception const & e)
	{ std::cout << e.what() << std::endl;	}
		
 	if (form)
 		delete form;
 	try
	{ form = intern1.makeForm("presidential pardon", "Maynard"); }
	catch (std::exception const & e)
	{ std::cout << e.what() << std::endl;}
	if (form)
 		delete form;

 	try
	{
		 	form = intern1.makeForm("shrubbery creation", "Danny");
	}
	catch (std::exception const & e)
	{ std::cout << e.what() << std::endl;}
	
	if (form)
 		delete form;
 	try
	{
	 form = intern1.makeForm("robotomy request", "Adam");
	}
	catch (std::exception const & e)
	{ std::cout << e.what() << std::endl;}
	std::cout << "\033[1;32m" << "\nSigning the form by Paul-------------------" << "\033[0m" << std::endl;
	form->beSigned(paul);
 	
	std::cout << "\033[1;32m" << "Executing the form-------------------" << "\033[0m"  << std::endl;
	std::cout << "Paul wants to execute and has rank enought" << std::endl;
	try { 
		form->execute(paul);
	} catch (std::exception &e)
	{
		std::cout << "Form not execute because: " << e.what() << std::endl;
	}
	
	std::cout << "\033[1;32m" << "Teddy wants to execute but has no rank enought" << "\033[0m" << std::endl;
	try {
		form->execute(teddy);
	} catch (std::exception &e)
	{
		std::cout << "Form not execute because: " << e.what() << std::endl;
	}
 	if (form)
 		delete form;
 }
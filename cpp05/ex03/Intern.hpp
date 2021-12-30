/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:40:51 by daniel            #+#    #+#             */
/*   Updated: 2021/12/28 10:16:19 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
 # define INTERN_HPP
 # include <iostream>
 # include "PresidentialPardonForm.hpp"
 # include "RobotomyRequestForm.hpp"
 # include "ShrubberyCreationForm.hpp"
 class Intern
 {
 
	public:
	
		Intern( void );
		Intern( const Intern &src );
		~Intern( void );
	
		Intern	&operator=( const Intern &rhs );
	
		Form	*makeForm(const std::string &formName, const std::string &target) const;
		class NotExitsFormException : public std::exception
		{
			public:
				NotExitsFormException();
				virtual const char* what(void) const _NOEXCEPT;
		};
	private:
	
		typedef struct	s_formList
		{
			std::string	formName;
			Form		*formType;
		}				t_formList;
 };
 #endif
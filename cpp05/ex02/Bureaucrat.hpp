/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:11 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/21 18:42:23 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
        Bureaucrat();
        void _checkGrade(int grade);
    public:
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &instance);
        virtual ~Bureaucrat();
        //Operator 
        Bureaucrat &operator=(Bureaucrat const &instance);
        //Getters
        std::string const getName() const;
        int getGrade() const;
        //Functions
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        bool executeForm( const Form &form ) const;
        class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				virtual const char* what(void) const _NOEXCEPT;
		};	
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				virtual const char* what(void) const _NOEXCEPT;
		};	
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const & element);

# endif
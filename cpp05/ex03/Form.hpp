/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:44 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 09:12:31 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool     _signed;
        int   const   _grade_to_signed;
        int   const   _grade_to_execute;
        Form();
        void _Form(int grade);
        void _checkGrade(int grade);
    public:
        Form(std::string name, int grade_to_signed, int grade_to_execute);
        Form(Form const &instance);
        virtual ~Form();
        //Operator
        Form &operator=(Form const &instance);
        //Getters
        std::string const getName() const;
        int getGrade_To_Signed() const;
        int getGrade_To_Execute() const;
        bool IsSigned() const;

       
        //Functions
        void beSigned(Bureaucrat const &agent);
        virtual void	execute( const Bureaucrat &executor ) const = 0;
        void	checkisSigned( void ) const;
        void	checkExecutability( const Bureaucrat &executor ) const;
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
		class CantExecuteFormException : public std::exception
		{
			public:
				CantExecuteFormException();
				virtual const char* what(void) const _NOEXCEPT;
		};
        class CantExecuteNotSignedException : public std::exception
		{
			public:
				CantExecuteNotSignedException();
				virtual const char* what(void) const _NOEXCEPT;
		};
};

std::ostream &operator<<(std::ostream &os, Form const & element);

# endif
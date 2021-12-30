/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:52:54 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/21 19:07:54 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target), Form("ShrubberyCreationForm",72,45)
{    return; };

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &instance): _target(instance._target), Form("ShrubberyCreationForm",72,45)
{
     *this = instance;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{};

//operators

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &instance)
{
    this->_target = instance._target;
    return(*this);
};


//getters
std::string const ShrubberyCreationForm::getTarget() const
{ return (this->_target);};

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
 {
    //try 
    //{	
        checkisSigned();
        checkExecutability(executor);
        std::string	    fileName;
        std::string    str;
        fileName  = this->_target + "_shrubbery";
		str = "find . -print | sed -e 's;[^/]*/;|____;g;s;____|; |;g' > " + fileName;
		const char * c = str.c_str();
		system(c);
    //}
    //catch (std::exception const & e)
    //{
    //    std::cout << this->_name << " cannot execute " << this->getName() << " because " << e.what() <<std::endl ;
    //}
 }




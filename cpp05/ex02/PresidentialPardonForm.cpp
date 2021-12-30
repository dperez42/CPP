/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:52:33 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 09:43:12 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target), Form("PresidentialPardonForm",25,5)
{};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &instance): _target(instance._target), Form("PresidentialPardonForm",25,5)
{
    *this = instance;
}

PresidentialPardonForm::~PresidentialPardonForm()
{};

//operators

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &instance)
{
    this->_target = instance._target;
    return(*this);
};


//getters
std::string const PresidentialPardonForm::getTarget() const
{ return (this->_target);};

void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
 {
        checkisSigned();
        checkExecutability(executor);
        std::cout << "\033[1;32m" << this->_target << " has been pardoned by Zafod Beeblebrox." << "\033[0m" << std::endl;
 }




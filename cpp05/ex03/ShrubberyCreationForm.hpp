/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:53:00 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/21 18:19:58 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    private:
        std::string _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &instance);
        virtual ~ShrubberyCreationForm(void);
        //Operator
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &instance);

        std::string const getTarget(void) const;
        //Functions
        virtual void execute(Bureaucrat const & executor) const;
};
# endif
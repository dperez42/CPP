/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:02 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:03 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{   
    std::cout << "\033[0m" << "🧠 Default \033[1;35mBrain\033[0m Constructor called" << std::endl;
    return ;
}

Brain::Brain(Brain  const &instance)
{   
    std::cout << "\033[0m" << "🧠 Copy \033[1;35mBrain\033[0m Constructor called " << std::endl;
    *this = instance;
    return ;
}

Brain::~Brain()
{   
    std::cout << "\033[0m" << "🧠 Destructor \033[1;35mBrain\033[0m called" << "\033[0m" << std::endl;
    return ;
}

//Operators
Brain  &Brain::operator=(Brain const &instance)
{
    std::cout << "\033[0m" << "🧠 Assignation \033[1;35mBrain\033[0m Operator called " << std::endl;
    int i;
    i = 0;
    while (i < 100)
    {
        this->ideas[i] = instance.ideas[i];
        i++;
    }
    return *this;
}
void  Brain::saveIdea(std::string idea, int nb)
{
    if (nb < 0 || nb > 99)
    {
        std::cout << "Error: Save idea outside my brain. " << std::endl;
        return;
    }
    this->ideas[nb] = idea; 
}
std::string Brain::getIdea(int nb)
{
    if (nb < 0 || nb > 99)
    {
        //std::cout << "Error: My brain not. " << std::endl;
        return ("Error: Retrieving an idea outside my brain. ");
    }
    //if (this->ideas[nb] == "" no idea)
    return(this->ideas[nb]); 
}

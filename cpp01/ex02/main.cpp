/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:14:28 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 16:46:27 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name; 
    std::string &stringREF = name; 

    std::cout << " ---- &name -------" << std::endl;
    std::cout << &name << std::endl;        
    //display the address of the string by using stringPTR.
    std::cout << " ---- stringPTR -------" << std::endl;
    std::cout << stringPTR << std::endl; 
    //display the address of the string by using stringREF. 
    std::cout << " ---- &stringREF -------" << std::endl;  
    std::cout << &stringREF << std::endl; 
    
    //display the string using the pointer.
    std::cout << " ---- *stringPTR -------" << std::endl;
    std::cout << *stringPTR << std::endl;  
    //display it using the reference.
    std::cout << " ---- stringREF -------" << std::endl;
    std::cout << stringREF << std::endl;   
}
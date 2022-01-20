/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:06:25 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/12 19:56:36 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750

 int	main(int, char** )
 {
     std::cout << "----------------- first test  -----------------------" << std::endl;
     {
 	
        Array<int> numbers1;
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
       
        
            Array<int> tmp = numbers;
            Array<int> test(tmp);
            numbers1 = numbers;
        

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
     }
     
     std::cout << "----------------- second test -----------------------" << std::endl;
     std::cin.ignore();
     {
        Array<int>			intArray;
        Array<std::string>	stringArray(10);
        Array<std::string>	otherStringArray;
    
        stringArray[0] = "Hi";
        stringArray[1] = "Hello";
        stringArray[2] = "How are you?";
        stringArray[3] = "Fine and you?";
        stringArray[4] = "Doing great thanks!";
        stringArray[5] = "You're very welcome";
        std::cout << "intArray.size() = " << intArray.size() << std::endl;
        std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
        otherStringArray = stringArray;
        otherStringArray[3] = "I'm good, how about you?";
    
        try
        {
            std::cout << stringArray[59] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    
        try
        {
            std::cout << stringArray[-3] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
     }
     
 	return 0;
 }
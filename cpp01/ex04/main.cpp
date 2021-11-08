/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:57:30 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 17:43:20 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

//Use of references
void	getdatas(std::string &filestream, std::string &s1, std::string &s2)
{
	std::cout << "Digit name of FILESTREAM: ";
	std::getline(std::cin, filestream);
	std::cout << "Digit s1: ";
	std::getline(std::cin, s1);
	std::cout << "Digit s2: ";
	std::getline(std::cin, s2);
}

void	my_replace(std::ifstream &file, std::ofstream &ofs, std::string &s1, std::string &s2)
{
	int flag;
	int i;
	int j;
	
	std::string line;
	while (getline(file, line))
	{	
		flag = 0;
		int l_line = line.length();
		i = 0;
		while (i < l_line)
		{
			j = 0;
			while (line[i + j] == s1[j])
			{
				if (j+1 == s1.length())
				{
					ofs << s2;
					i = i + j;
					flag = 1;
					break;
				}
				j++;
			}
			if (flag != 1)
			{
				ofs << line[i];
			}
			flag = 0;
			i++;
		}
		ofs << std::endl;
	}
	file.close();
}

int main()
{
	std::string filestream;
    std::string s1;
    std::string s2;
	std::ifstream file;
	int flag;
	int j;

	getdatas(filestream, s1, s2);
	file.open(filestream.c_str());
	if (!(file.is_open()))
		std::cout << "Invalid file ! Does not exist !" << std::endl;
	if (s1.empty())
		std::cout << "No s1 identified !" << std::endl;
	if (s2.empty())
		std::cout << "No s2 identified !" << std::endl;
	if (!(file.is_open()) || s2.empty() || s1.empty())
		return (0);
	
	filestream = filestream + ".replace";
	std::ofstream ofs(filestream.c_str());
	
	my_replace(file, ofs, s1, s2);
	
	ofs.close();
	system("leaks replace");
}
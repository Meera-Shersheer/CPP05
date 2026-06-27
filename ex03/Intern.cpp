/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 08:00:34 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/27 15:45:59 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}
	
Intern::Intern(const Intern& other)
{
	
}
Intern& Intern::operator=(const Intern& other)
{
	return (*this);
}

Intern::~Intern()
{
	
}
	
AForm* Intern::makeForm(std::string name, std::string target)
{
	int index = -1;
	std::string form_types[] = {"shrubbery creation" ,"robotomy request", "presidential pardon"};

	for (int j = 0; j < form_types->length();j++)
	{
		if (name == form_types[j])
			index = j;
	}
	
	if (index == -1)
	{
		std::cout << "The provided form name doesn't exist, check again."<<std::endl;
		return (NULL);
	}

		
	AForm* (Intern::*funcs[4])() =
	{

	};

	
	for(int i = 0; i < 4; i++)
	{
		if (mode[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
	

}
	

AForm *Intern::makeShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardon(const std::string &target)
{
    return new PresidentialPardonForm(target);
}
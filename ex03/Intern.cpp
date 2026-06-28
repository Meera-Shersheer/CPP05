/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 08:00:34 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/28 02:36:57 by mshershe         ###   ########.fr       */
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
	std::string form_types[] = {"shrubbery creation" ,"robotomy request", "presidential pardon"};
	AForm* (Intern::*funcs[4])(const std::string& target) =
	{
		&Intern::makeShrubbery,
		&Intern::createRobotomy,
		&Intern::createPresidentialPardon
	};

	for (int j = 0; j < form_types->length();j++)
	{
		if (name == form_types[j])
		{
				return ((this->*funcs[j])(target));
		}
	}
	throw Intern::UnrecognisedForm();

}


const char*  Intern::UnrecognisedForm::what() const throw()
{
	return "The provided form name doesn't exist, check again.";
}


AForm *Intern::makeShrubbery(const std::string &target)
{
	std::cout << "The Intern created Shrubbery creation form for " << target<< std::endl;
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomy(const std::string &target)
{
	std::cout << "The Intern created Robotomy request for " << target<< std::endl;
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardon(const std::string &target)
{
	std::cout << "The Intern created presidential pardon form for " << target<< std::endl;
    return new PresidentialPardonForm(target);
}
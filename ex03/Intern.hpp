/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 08:00:20 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/28 02:23:22 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		AForm *Intern::makeShrubbery(const std::string &target);
		AForm *Intern::createRobotomy(const std::string &target);
		AForm *Intern::createPresidentialPardon(const std::string &target);
	
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();

		class UnrecognisedForm : public std::exception
		{
			public:
				const char* what() const throw();
		};
	
		AForm* makeForm(std::string name, std::string target);
	
};
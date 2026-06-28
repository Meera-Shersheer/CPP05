/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:45:24 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/28 03:06:38 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>


//ShrubberyCreationForm sign 145, exec 137
//RobotomyRequestForm sign 72, exec 45
//PresidentialPardonForm sign 25, exec 5
//
int main()
{
	srand(time(0));
		
	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("shrubbery creation", "home");
		Bureaucrat b("Bob", 100);
			
		b.signForm(*f);
		
		delete f;
			
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////////
	
	try
	{
		Intern Sam;

		ShrubberyCreationForm *f = (ShrubberyCreationForm *)Sam.makeForm("shrubbery creation", "home");
		
		Bureaucrat S("Sara", 150);
		
		S.signForm(*f);

		delete f;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////
//********************
	
	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("shrubbery creation", "home1");
		Bureaucrat M("Meera", 1);
			
		M.signForm(*f);
		M.executeForm(*f);
		delete f;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////


	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("shrubbery creation", "home2");
		Bureaucrat b("Bob", 150);
			
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	///////////////////////////////////////////////////////

	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("shrubbery creation", "");
		Bureaucrat M("Meera", 1);
			
		M.signForm(*f);
		M.executeForm(*f);
		delete f;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("shrubbery creation", "");
		Bureaucrat M("M", 1);
			
		M.signForm(*f);
		M.executeForm(*f);
		M.executeForm(*f);
		
		delete f;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

	try
	{
		Intern Mike;

		AForm *f1 = Mike.makeForm("presidential pardon", "home3");
		PresidentialPardonForm *f2 = (PresidentialPardonForm *)f1;
		
		std::cout << f1;
		std::cout << f2;
		delete f1;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}


	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("robotomy request", "home4");
			
		Bureaucrat b("Alice", 1);
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	

	try
	{
		Intern Mike;

		AForm *f = Mike.makeForm("shrubbery creation", "home5");
		Bureaucrat a("A", 1);
		Bureaucrat b("B", 150);
				
		a.signForm(*f);
		a.signForm(*f);
		a.executeForm(*f);
		
		b.signForm(*f);   
		b.executeForm(*f);
		delete f ;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	
}
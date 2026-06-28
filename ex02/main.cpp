/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:45:24 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/28 19:41:12 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
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
		Bureaucrat b("Bob", 100);
		ShrubberyCreationForm f("home");

		b.signForm(f);

	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////////
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat S("Sara", 150);
		ShrubberyCreationForm f("home");

		S.signForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat M("Meera", 1);
		ShrubberyCreationForm f("home1");

		M.signForm(f);
		M.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat b("Bob", 150);
		ShrubberyCreationForm f("home2");

		b.signForm(f);
		b.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	///////////////////////////////////////////////////////
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat M("Meera", 1);
		ShrubberyCreationForm f("");

		M.signForm(f);
		M.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat M("M", 1);
		ShrubberyCreationForm f("H");

		M.signForm(f);
		M.executeForm(f);
		M.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		ShrubberyCreationForm f1("home3");
		ShrubberyCreationForm f2 = f1;

		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		PresidentialPardonForm f1("A");
		PresidentialPardonForm f2("B");

		f2 = f1;

		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		AForm* f = new RobotomyRequestForm("home4");

		Bureaucrat b("Alice", 1);
		b.signForm(*f);
		b.executeForm(*f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat a("A", 1);
		Bureaucrat b("B", 150);

		ShrubberyCreationForm f("home5");

		a.signForm(f);
		a.signForm(f);
		a.executeForm(f);

		b.signForm(f);
		b.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

}

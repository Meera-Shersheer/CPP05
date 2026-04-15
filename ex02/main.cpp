/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:45:24 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/15 15:43:17 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

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

	
	try
	{
		Bureaucrat M("Meera", 1);
		ShrubberyCreationForm f("home");
			
		M.signForm(f);
		M.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

	try
	{
	
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

///////////////////////////////////////////////////////

	try
	{
		Bureaucrat b("Bob", 150);
		ShrubberyCreationForm f("home");
			
		b.signForm(f);
		b.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	///////////////////////////////////////////////////////

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

	try
	{
		Bureaucrat M("Meera", 1);
		ShrubberyCreationForm f("H");
			
		M.signForm(f);
		M.executeForm(f);
		M.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

	try
	{
		ShrubberyCreationForm f1("home");
		ShrubberyCreationForm f2 = f1;
		
		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

	try
	{
		ShrubberyCreationForm f1("A");
		ShrubberyCreationForm f2("B");
			
		f2 = f1;
		
		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

	try
	{
		AForm* f = new ShrubberyCreationForm("home");
			
		Bureaucrat b("Alice", 1);
		b.signForm(*f);
		b.executeForm(*f);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

	// try
	// {
	// 	for (int i = 0; i < 100; i++)
    // 	ShrubberyCreationForm f("test" + std::to_string(i));
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout<< e.what() << std::endl;
	// }
	

	try
	{
		Bureaucrat a("A", 1);
		Bureaucrat b("B", 150);
		
		ShrubberyCreationForm f("home");
		
		a.signForm(f);
		a.executeForm(f);
		
    	b.signForm(f);     // should fail
    	b.executeForm(f);  // should fail
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	
}
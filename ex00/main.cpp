/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:45:24 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/01 19:36:30 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A;
		Bureaucrat B("B", 150);
		Bureaucrat C("C", 0);
		Bureaucrat D1("D", 30);
		Bureaucrat D2(D1);
		Bureaucrat C_copy = C;

		std::cout << D1 ;
		
		D1.increment_grade();
		std::cout << D1 ;

		D1.increment_grade();
		std::cout << D1 ;

		D1.increment_grade();
		std::cout << D1 ;

		D1.increment_grade();
		std::cout << D1 ;



		std::cout << D2 ;

		D2.decrement_grade();
		std::cout << D2 ;

		D2.decrement_grade();
		std::cout << D2 ;

		D2.decrement_grade();
		std::cout << D2 ;

		D2.decrement_grade();
		std::cout << D2 ;

	
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////////
	
	try
	{
		Bureaucrat B("B", 153);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

	
	try
	{
		Bureaucrat B("B", -1);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

	try
	{
		Bureaucrat B("B", 151);
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

///////////////////////////////////////////////////////

	try
	{
		Bureaucrat B("B", 150);

		std::cout << B ;

		B.decrement_grade();
		std::cout<< "Hi"<< std::endl;
		std::cout << B ;
	
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	
	///////////////////////////////////////////////////////

	try
	{
		Bureaucrat M("M", 0);

		std::cout << M ;

		M.increment_grade();
		std::cout<< "Hi"<< std::endl;
		std::cout << M ;
	
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
}
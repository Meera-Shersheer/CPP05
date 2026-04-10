/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:45:24 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/09 18:29:06 by mshershe         ###   ########.fr       */
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


		std::cout << A ;
		std::cout << B ;
		std::cout << C ;
		std::cout << D1 ;
		std::cout << D2 ;
		std::cout << C_copy ;
		
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
		std::cout << B;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

	
	try
	{
		Bureaucrat B("B", -1);
		std::cout << B ;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////

	try
	{
		Bureaucrat B("B", 151);
		std::cout << B ;
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
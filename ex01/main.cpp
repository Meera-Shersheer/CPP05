/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:45:24 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/28 19:45:28 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form A;
		Form B("B", 150, 120);
		Form C("C", 1, 4);
		Form D1("D", 30, 30);
		Form D2(D1);
		Form B_copy = B;


		std::cout << A ;
		std::cout << B ;
		std::cout << C ;
		std::cout << D1 ;
		std::cout << D2 ;
		std::cout << B_copy ;

	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat B("B", 5);
		Form C_form("C_form", 1, 4);

		std::cout << B;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

 std::cout<< "--------------------------------------------------"<< std:: endl;


	try
	{
		Bureaucrat B("B", 50);
		Form C_form("C_form", 51, 4);

		std::cout << B;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;

	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

//////////////////////////////////////////////////////
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat G("G", 100);
		Form C_form("C_form", 100, 4);

		std::cout << G;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		G.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

///////////////////////////////////////////////////////
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat B("B", 5);
		Form C_form("C_form", 151, 4);

		std::cout << B;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
	///////////////////////////////////////////////////////
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat B("B", 5);
		Form C_form("C_form", -1, 4);

		std::cout << B;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat B("B", 5);
		Form C_form("C_form", 15, -1);

		std::cout << B;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}
 std::cout<< "--------------------------------------------------"<< std:: endl;

	try
	{
		Bureaucrat B("B", 5);
		Form C_form("C_form", 15, 151);

		std::cout << B;
		std::cout << C_form;
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
		B.signForm(C_form);
		std::cout << "The Form Status is : "<< C_form.get_is_signed()<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<< e.what() << std::endl;
	}

}


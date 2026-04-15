/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 21:15:58 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/15 16:06:05 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): 	AForm(other)
{
	this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	return (*this );
}

void   ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_is_signed())
		throw  AForm::AlreadyIsSigned();
	if (executor.getGrade() > this->get_grade_to_execute())
		throw AForm::GradeTooLowException();

	std::ofstream file((this->target +"_shrubbery").c_str());
	
	if (!file.is_open())
		throw std::runtime_error("Error: could not open shrubbery file");

	file<<"               # #### ####                "<< std::endl;
	file<<"             ### \\/#|### |/####           "<< std::endl;
	file<<"            ##\\/#/ \\||/##/_/##/_#         "<< std::endl;
	file<<"          ###  \\/###|/ \\/ # ###           "<< std::endl;
	file<<"        ##_\\_#\\_\\## | #/###_/_####        "<< std::endl;
	file<<"       ## #### # \\ #| /  #### ##/##       "<< std::endl;
	file<<"        __#_--###`  |{,###---###-~        "<< std::endl;
	file<<"                  \\ }{                    "<< std::endl;
	file<<"                   }}{                    "<< std::endl;
	file<<"                   }}{                    "<< std::endl;
	file<<"              ejm  {{}                    "<< std::endl;
	file<<"             , -=-~{ .-^- _               "<< std::endl;
	file<<"                   `}                     "<< std::endl;
	file<<"                    {                     "<< std::endl;


    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

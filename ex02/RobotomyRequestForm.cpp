/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 21:16:23 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/15 15:57:38 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 72, 45)
{
	this->target = _target;
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm(other)
{
	this->target = other.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	return (*this );
}

void   RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->get_is_signed())
		throw  AForm::AlreadyIsSigned();
	if (executor.getGrade() > this->get_grade_to_execute())
		throw AForm::GradeTooLowException();
	
	int n;

	n = rand();
	if (n % 2 == 0)
	{
		std::cout<< "[DRILLING...] VRRRRRRRRRRRRRRRRRRRRR" <<std::endl; 
		std::cout<<this->target<<" has been robotomized successfully"<<std::endl; 
	}
	else 
		std::cout<<"Robotomy Failed "<<std::endl; 
		
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}
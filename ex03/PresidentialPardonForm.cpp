/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 21:16:42 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/29 18:34:54 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other)
{
	this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	return (*this );
}

void   PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!(this->get_is_signed()))
		throw  AForm::FormNotSigned();
	if (executor.getGrade() > this->get_grade_to_execute())
		throw AForm::GradeTooLowException();
	std::cout<<this->target<< " has been pardoned by Zaphod Beeblebrox."<< std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	
}
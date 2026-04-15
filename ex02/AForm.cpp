/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:34:50 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/09 21:11:32 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm():name("default"),grade_to_sign(150), grade_to_execute(150) 
{
	this->is_signed = false;
}

AForm::AForm(std::string _name, int _grade_to_sign, int _grade_to_execute):name(_name),grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute) 
{
	if ( _grade_to_sign > 150 ||  _grade_to_execute > 150 )
		throw AForm::GradeTooLowException();
	else if ( _grade_to_sign < 0 ||  _grade_to_execute < 0)
		throw AForm::GradeTooHighException();
	this->is_signed = false;	
}

AForm::AForm(const AForm& other):name(other.name),grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute) 
{
	this->is_signed = other.is_signed;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		this->is_signed = other.is_signed;
	}
	return (*this);
}

AForm::~AForm()
{
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too High!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too Low!" ;
}

std::string AForm::getName() const
{
	return (this->name);
}

int AForm::get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

int AForm::get_grade_to_execute() const
{
	return (this->grade_to_execute);
}


void AForm::beSigned(Bureaucrat Burea)
{
	if (Burea.getGrade() > this->get_grade_to_sign())
		throw AForm::GradeTooLowException();
	if (this->is_signed == false )
		this->is_signed = true;
	else
		std::cout<<Burea.getName()<<" couldn’t sign " << this->name <<" because this Aform is already signed." <<std::endl;
}

bool AForm::get_is_signed() const
{
	return (this->is_signed);
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
	out << form.getName() << ", Grade need to be signed: "<< form.get_grade_to_sign() <<", Grade need to be executed: " << form.get_grade_to_execute() <<std::endl;
	return (out);
}

// void   AForm::execute(Bureaucrat const & executor) const
// {

// }

const char* AForm::AlreadyIsSigned::what() const throw()
{
	return "The form is already signed" ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:34:50 by mshershe          #+#    #+#             */
/*   Updated: 2026/06/29 15:15:18 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form():name("default"),grade_to_sign(150), grade_to_execute(150)
{
	this->is_signed = false;
}

Form::Form(std::string _name, int _grade_to_sign, int _grade_to_execute):name(_name),grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute)
{
	if ( _grade_to_sign > 150 ||  _grade_to_execute > 150 )
		throw Form::GradeTooLowException();
	else if ( _grade_to_sign < 1 ||  _grade_to_execute < 1)
		throw Form::GradeTooHighException();
	this->is_signed = false;
}

Form::Form(const Form& other):name(other.name),grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
	this->is_signed = other.is_signed;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->is_signed = other.is_signed;
	}
	return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

int Form::get_grade_to_execute() const
{
	return (this->grade_to_execute);
}

void Form::beSigned(Bureaucrat Burea)
{
	if (Burea.getGrade() > this->get_grade_to_sign())
		throw Form::GradeTooLowException();

	if (this->is_signed)
		throw AlreadyIsSigned();

	this->is_signed = true;
}

bool Form::get_is_signed() const
{
	return (this->is_signed);
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << ", Grade need to be signed: "<< form.get_grade_to_sign() <<", Grade need to be executed: " << form.get_grade_to_execute()<<
	", Signed: "<< form.get_is_signed() <<std::endl;
		return (out);
}



const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low!" ;
}
const char* Form::AlreadyIsSigned::what() const throw()
{
	return "The form is already signed" ;
}

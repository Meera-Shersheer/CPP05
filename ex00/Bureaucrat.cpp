/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:46:31 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/01 19:37:47 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("default"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name)
{
	this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}
	

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment_grade()
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}
		
void Bureaucrat::decrement_grade()
{
	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureau)
{
	out << bureau.getName()<< ", bureaucrat grade "<< bureau.getGrade()<<"." <<std::endl;
	return (out);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low!" ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High!";
}
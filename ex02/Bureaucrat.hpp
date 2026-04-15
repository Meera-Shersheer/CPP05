/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:46:25 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/15 15:00:18 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
	
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		std::string getName() const;
		int getGrade() const;

		void increment_grade();
		void decrement_grade();
		
		void signForm(AForm& form);
		void executeForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureau);
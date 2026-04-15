/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:35:00 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/09 20:59:58 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string name;
		bool is_signed;
		const int grade_to_sign;
		const int grade_to_execute;
		

	public:
		AForm();
		AForm(std::string _name, int _grade_to_sign, int _grade_to_execute);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		~AForm();
		std::string getName() const;
		int get_grade_to_sign() const;
		int get_grade_to_execute()const;


		bool get_is_signed() const;
		void beSigned(Bureaucrat Burea);
		virtual void  execute(Bureaucrat const & executor) const = 0;
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
		class AlreadyIsSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

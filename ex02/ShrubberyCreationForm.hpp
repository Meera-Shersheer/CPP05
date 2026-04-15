/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 21:15:48 by mshershe          #+#    #+#             */
/*   Updated: 2026/04/15 16:04:00 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <fstream>
#include <string>
#include <stdexcept>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:21:50 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 15:35:57 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "colors.h"
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);
		Form * makeShrubbery(std::string target);
		Form * makeRobotomyRequest(std::string target);
		Form * makePresidentialPardon(std::string target);
		Form * makeForm(std::string name, std::string target);
		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:14:47 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 13:13:12 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <string>
# include "colors.h"
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);
		friend std::ostream & operator<<(std::ostream & os, Bureaucrat const & src);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void executeForm(Form const & form) const;
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	private:
		std::string const _name;
		int _grade;
};

#endif
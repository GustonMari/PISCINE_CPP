/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:14:47 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 17:04:03 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <string>
# include "colors.h"

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
	//class GradeTooHighException : public std::exception
	//{
	//	public:
	//		GradeTooHighException();
	//		GradeTooHighException(GradeTooHighException const & src);
	//		~GradeTooHighException() throw();
	//		GradeTooHighException & operator=(GradeTooHighException const & rhs);
	//		virtual const char * what() const throw();
	//};
	//class GradeTooLowException : public std::exception
	//{
	//	public:
	//		GradeTooLowException();
	//		GradeTooLowException(GradeTooLowException const & src);
	//		~GradeTooLowException() throw();
	//		GradeTooLowException & operator=(GradeTooLowException const & rhs);
	//		virtual const char * what() const throw();
	//};
	private:
		std::string const _name;
		int _grade;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:37:38 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 16:15:23 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include "colors.h"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int required_sign, int required_execute);
		Form(const Form & src);
		friend std::ostream & operator<<(std::ostream & os, const Form & src);
		Form &operator=(const Form & src);
		virtual ~Form();
		
		const std::string	get_name(void) const;
		bool				get_sign(void) const;
		int			get_required_sign(void) const;
		int			get_required_execute(void) const;
		
		void	beSigned(Bureaucrat const & src);
		void	signForm(Bureaucrat const & src);
		virtual void	execute(Bureaucrat const & executor) const = 0;
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
		class NotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		const std::string	_name;
		bool				_sign;
		const int			_required_sign;
		const int			_required_execute;
};

#endif
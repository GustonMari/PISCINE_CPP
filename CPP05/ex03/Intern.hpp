/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:21:50 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 14:18:36 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);
		Form * makeForm(std::string name, std::string target) const;
		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
};

#endif
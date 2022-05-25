/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:35:26 by gmary             #+#    #+#             */
/*   Updated: 2022/05/25 14:06:54 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM
# include<iostream>
# include<fstream>
# include<string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm	& operator=(const ShrubberyCreationForm & src);
		
		void createAsciiTrees(void);
		void					execute(Bureaucrat const & executor) const;
	private:
		std::string				_target;
		int						_signGrade;
		int						_execGrade;
		
};

#endif
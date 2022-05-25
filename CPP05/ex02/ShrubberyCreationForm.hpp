/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:35:26 by gmary             #+#    #+#             */
/*   Updated: 2022/05/25 11:36:59 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM
#include<iostream>

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		ShrubberyCreationForm	& operator=(const ShrubberyCreationForm & src);
		~ShrubberyCreationForm();
	private:
		
};

#endif
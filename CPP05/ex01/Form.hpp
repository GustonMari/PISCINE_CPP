/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:37:38 by gmary             #+#    #+#             */
/*   Updated: 2022/05/24 16:18:09 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "colors.h"

class Form
{
	public:
		Form();
		Form(const Form & src);
		~Form();
		Form &operator=(const Form & src);
		const std::string	get_name(void) const;
		bool				get_sign(void) const;
		int			get_required_sign(void) const;
		int			get_required_execute(void) const;
		friend std::ostream & operator<<(std::ostream & os, const Form & src);
	private:
		const std::string	_name;
		bool				_sign;
		const int			_required_sign;
		const int			_required_execute;
};

#endif
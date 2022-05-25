/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:01:00 by gmary             #+#    #+#             */
/*   Updated: 2022/05/25 17:19:08 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm & src);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm & src);
		
		void	execute(Bureaucrat const & executor) const;
		class NotPossibleToExecute : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
};

#endif
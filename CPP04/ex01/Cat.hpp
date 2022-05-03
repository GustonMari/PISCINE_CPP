/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:46:08 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 12:56:43 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat & src);
		virtual ~Cat();
		Cat	&operator=(const Cat & src);
		virtual void	makeSound() const;
	protected:
		std::string	type;
		Brain * attribute;
};

#endif
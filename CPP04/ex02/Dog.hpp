/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:46:08 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 12:56:43 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class	Dog: public AAnimal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog & src);
		virtual ~Dog();
		Dog	&operator=(const Dog & src);
		virtual void	makeSound() const;
	protected:
		std::string	type;
		Brain * attribute;
};

#endif
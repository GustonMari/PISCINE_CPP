/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:03:04 by gmary             #+#    #+#             */
/*   Updated: 2022/05/18 16:08:24 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class	AMateria
{
	protected:
		//more to add
	public:
		AMateria(std::string const & type);
		//more to add
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; //function pure virtual
		virtual void use(ICharacter& target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:22:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/27 14:30:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	-> lorsque'on est situation de dynamique cast on estd ans une situation
	ou les rtti sont active, cad quon a une classe polymorphique avec une methode
	(une fonction membre qui est virtual) => il permet de verifier un type lors dun cast
	via:
		catch(const std::bad_cast& e)
		{
			std::cout << e.what() << '\n';
		}

	-> reinterpret_cast est un cast permet de passer par exemple dun void a un int 
	(pour faire des retypage)
*/
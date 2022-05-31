/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:22:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/31 17:49:53 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include "Data.hpp"
/*
	-> lorsque'on est situation de dynamique cast on estd ans une situation
	ou les rtti sont active, cad quon a une classe polymorphique avec une methode
	(une fonction membre qui est virtual) => il permet de verifier un type lors dun cast
	via:
		catch(const std::bad_cast& e)
		{
			std::cout << e.what() << '\n';
		}
	https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/
	-> reinterpret_cast est un cast permet de passer par exemple dun void a un int 
	(pour faire des retypage)
	->reinterpret_cast: https://fr.acervolima.com/reinterpret_cast-en-c-type-operateurs-de-coulee/
	->const_cast ne fonctionne pas sur les pointeurs de fonctions
	https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/
	->  It is a compile time cast.It does things like implicit conversions between types 
	(such as int to float, or pointer to void*), 
	and it can also call explicit conversion functions (or implicit ones).
	->The above code will not compile even if you inherit as protected.
	 So to use static_cast, inherit it as public.
	https://docs.microsoft.com/fr-fr/cpp/cpp/static-cast-operator?view=msvc-170
	->explicit: Specifies that a constructor or conversion function (since C++11) 
	or deduction guide (since C++17) is explicit,
	that is, it cannot be used for implicit conversions and copy-initialization.
	https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
	std::numeric_limits<int>::min() std::numeric_limits<int>::max()
	(str.find("int") != std::string::npos) => sorte de strchr qui renvoie la position
	de la premiere occurence
	-> a la place de c_str() on peut utiliser data() qui retourne un pointeur
*/

uintptr_t serialize(Data * ptr);
Data* deserialize(uintptr_t raw);

int main()
{
	Data test(42, "test");
	uintptr_t raw = serialize(&test);
	std::cout << "Serialize: " << raw << std::endl;
	Data * data = deserialize(raw);
	data->printValues();
	return 0;
}
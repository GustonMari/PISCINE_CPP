/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:23:24 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 19:12:48 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Array.tpp"

/*
	Base *tab;

	tab = new Type[length];
	et ne pas faire le new dans la boucle for 
	template <class T>
    class A
    {
      public:
        A(const A &){}
        A & operator=(const A& a){return *this;}
    };
	https://stackoverflow.com/questions/19167201/copy-constructor-of-template-class
	https://stackoverflow.com/questions/17131911/what-does-int-do-in-c
*/

/*
	BUG:
	Array<std::string> test2(5);
	Array<std::string> test3(test2);
*/
int main()
{
	//int tab[5] = {1, 2, 3, 4, 5};
	//Array<int> test(tab, 5);
	Array<double> test;
	Array<std::string> test2(5);
	Array<std::string> test3(test2);
	//Array<std::string> test2(5);
	//int	* a= new int();
	//std::cout << *a << std::endl;
	return 0;
}
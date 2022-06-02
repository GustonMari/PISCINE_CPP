/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:23:24 by gmary             #+#    #+#             */
/*   Updated: 2022/06/02 10:47:07 by gmary            ###   ########.fr       */
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
	try
	{
		//! copy construct & operator
		
			double tab[5] = {1, 2, 3, 4, 5};
			Array<double> testoo(tab, 5);
			Array<double> testii(testoo);
			Array<double> testuu;
			testuu = testoo;
			std::cout << testii[3] << std::endl;
			std::cout << testuu[3] << std::endl;
		
		//!size test
		
			std::cout << "size= "<< testuu.size() << std::endl;
		
		//! string + standard and size constructor
			
			
			std::string tab2[2] = {"ca va la mifff", "yessai ca va"};
			Array<std::string> test1;
			Array<std::string> test2(2);
			Array<std::string> test3(tab2, 2);
			Array<std::string> test4(test3);
			std::cout << test2[1] << std::endl;
			std::cout << test4[1] << std::endl;			
		
		//! error std::exception
		
			testoo[-10];
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//int tab[5] = {1, 2, 3, 4, 5};
	//Array<int> test(tab, 5);

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:04:01 by gmary             #+#    #+#             */
/*   Updated: 2022/06/06 12:53:14 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.bogotobogo.com/cplusplus/stl.php
TOP : 
https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp9_STL.html
INIT:
https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/
Vecteur:
	on ne fait que de insertion via la fin ou avec insert mais du coupassez llent
	cest pour cela quil ny a pasde push_front => v.insert(v.begin(), 6); altenative
	Il permet un accès aléatoire, 
	ce qui signifie que nous pouvons accéder à chaque élément directement avec index.
	
	v.resize(n); -> permet de resize la taille du vecteur
	v.empty() -> permet de savoir si le vecteur est vide
	v.push_back(x) -> permet d'ajouter un element a la fin du vecteur
	v.pop_back() -> permet de supprimer le dernier element du vecteur
?	v.front() -> permet de retourner le premier element du vecteur
?	v.back() -> permet de retourner le dernier element du vecteur
!	v.at(i) -> permet de retourner l'element a la position i
!	v.insert(i,x) -> permet d'inserer un element a la position i
!	v.erase(i) -> permet de supprimer l'element a la position i
!	v.clear() -> permet de supprimer tous les elements du vecteur
	v.swap(v2) -> permet de swaper les deux vecteurs
!	v.reserve(n) -> permet de reserve la memoire pour n elements du vecteur
	v.shrink_to_fit() -> permet de reduire la taille du vecteur
	v.begin() -> permet de retourner le premier element du vecteur
!	v.end() -> he past-the-end element is the theoretical element that would follow the last element in the vector.
!	v.capacity() -> permet de retourner la taille de la memoire allouee.
	le nombre d'éléments qu'un vecteur peut contenir avant qu'un programme ne doive lui allouer plus de mémoire
	v.reverse() -> permet de retourner le vecteur dans l'ordre inverse
!	v.find(x) -> permet de retourner la position de l'element x dans le vecteur
Dequeu:
	lui possede a la fois une entre a la fin et au debut mais l'insert au millieu prends du temps
	on peut donc push front et push back 

List:
	doublement liee, l'acces nest pas aleatoire, lacces est lineaire et donc est bcp plus
	lent que le vecteur et les dequeu. l'insertion et la suppression sont plus rapide

Iterateur:
	vector<int>::iterator it = v.begin();

Algorithms:
	for_each(v.begin(), v.end(), sort);
	find(v.begin(), v.end(), x);
	word.insert(find(word.begin(),word.end(),"canal"),"a");
	it - container.begin() => done index iterator
	rand() % 100     // between 0 and 99
	rand() % 100 + 1 // between 1 and 100

?	int maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
?	int maxElement = *std::max_element(v.begin(), v.end());
?	int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
?	int minElement = *std::min_element(v.begin(), v.end());
*/

# include <iostream>
# include <string>
# include <vector>

# include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(33);
		sp.addNumber(200);
		sp.addNumber(90);
		//!active the line down to make exception work for span is full
		//sp.addNumber(11);
		//std::cout << sp.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;
		//!SHORTEST TEST
		Span shortest(2);
		shortest.addNumber(-9);
		shortest.addNumber(-3);
		std::cout << "Shortest span is = " << shortest.shortestSpan() << std::endl;
		return (0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:15:49 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 13:35:05 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Vecteur:
	on ne fait que de insertion via la fin ou avec insert mais du coupassez llent
	cest pour cela quil ny a pasde push_front => v.insert(v.begin(), 6); altenative
	
	v.resize(n); -> permet de resize la taille du vecteur
	v.empty() -> permet de savoir si le vecteur est vide
	v.push_back(x) -> permet d'ajouter un element a la fin du vecteur
	v.pop_back() -> permet de supprimer le dernier element du vecteur
	v.front() -> permet de retourner le premier element du vecteur
	v.back() -> permet de retourner le dernier element du vecteur
	v.at(i) -> permet de retourner l'element a la position i
	v.insert(i,x) -> permet d'inserer un element a la position i
	v.erase(i) -> permet de supprimer l'element a la position i
	v.clear() -> permet de supprimer tous les elements du vecteur
	v.swap(v2) -> permet de swaper les deux vecteurs
	v.reserve(n) -> permet de reserve la taille du vecteur
	v.shrink_to_fit() -> permet de reduire la taille du vecteur
	v.begin() -> permet de retourner le premier element du vecteur
	v.end() -> permet de retourner le dernier element du vecteur

Dequeu:
	lui possede a la fois une entre a la fin et au debut mais l'insert au millieu prends du temps
	on peut donc push front et push back 

List:
	doublement liee, l'acces nest pas aleatoire, lacces est lineaire et donc est bcp plus
	lent que le vecteur et les dequeu

Iterateur:
	vector<int>::iterator it = v.begin();
*/
#include "Brain.hpp"

/*
--------------------CONSTRUCTOR----------------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain was constructed" << std::endl;
}

Brain::Brain(const Brain & src)
{
	*this = src;
	std::cout << "Brain was copy constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain was destructed" << std::endl;
}

/*
--------------------OPERATOR----------------------------------------
*/

Brain	& Brain::operator=(const Brain &src)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		ideas[i] = src.ideas[i];
		i++;
	}
	std::cout << "Brain = operator called" << std::endl;
	return (*this);
}

/*
--------------------FUNCTION----------------------------------------
*/

void	Brain::show_ideas()
{
	int	i;

	i = 0;
	while (i < 100)
	{
		if (!ideas[i].empty())
			std::cout << ideas[i] << std::endl;
		i++;
	}
}

void	Brain::set_ideas(int index, std::string thought)
{
	if (index >= 0 && index < 100)
		ideas[index] = thought;
	else
		std::cout << "I've too many thought" << std::endl;
}
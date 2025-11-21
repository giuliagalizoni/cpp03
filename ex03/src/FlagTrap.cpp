#include "../include/FlagTrap.hpp"

#include <iostream>

FlagTrap::FlagTrap() : ClapTrap()
{
	std::cout << "FlagTrap default constructor called" << std::endl;
}
FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FlagTrap constructor for " << _name << " called" << std::endl;
}
FlagTrap::FlagTrap(const FlagTrap &src) : ClapTrap(src)
{
	std::cout << "FlagTrap copy constructor called" << std::endl;
}
FlagTrap &FlagTrap::operator=(const FlagTrap &src)
{
	std::cout << "FlagTrap copy assignment operator called" << std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap destructor called for " << _name << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	if (_energyPoints > 0 && _hitPoints)
		std::cout << "FlagTrap " << _name << " says: High five, guys! ✋"
				  << std::endl;
	else if (_energyPoints == 0)
		std::cout << "FlagTrap " << _name
				  << " tries to high five but have no energy left."
				  << std::endl;
	else if (_hitPoints == 0)
		std::cout << "FlagTrap " << _name
				  << " tries to high five but they're dead." << std::endl;
}

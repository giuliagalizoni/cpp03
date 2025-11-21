#include "../include/DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), _name(name)
{
	_hitPoints = FlagTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FlagTrap::_attackDamage;
	std::cout << "DiamondTrap constructor for " << _name << " called"
			  << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << ". Or am I " << ClapTrap::_name
			  << "? ..." << std::endl;
}

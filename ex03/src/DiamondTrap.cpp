#include "../include/DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = FlagTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FlagTrap::_attackDamage;
	this->ClapTrap::_name = _name.append("_clap_name");
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
	std::cout << "I am " << this->_name << std::endl;
	std::cout << "or am I " << ClapTrap::_name << "? ..." << std::endl;
}

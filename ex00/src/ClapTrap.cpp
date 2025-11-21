#include "../include/ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor for " << _name << " called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &src)
	: _name(src._name),
	  _hitPoints(src._hitPoints),
	  _energyPoints(src._energyPoints),
	  _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " attacks " << target << " and causes "
				  << _attackDamage << " points of damage." << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << _name << " tries to attack " << target
				  << " but have no energy left." << std::endl;
	else if (_hitPoints == 0)
		std::cout << _name << " tries to attack " << target
				  << " but have no hit points left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << _name << " is attacked and loses " << amount
				  << " hit points." << std::endl;
		if (_hitPoints > amount)
			_hitPoints = _hitPoints - amount;
		else
			_hitPoints = 0;
	}
	else
		std::cout << _name << " doesn't have anything left to lose."
				  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " is repaired and gain " << amount
				  << " hit points." << std::endl;
		_hitPoints = _hitPoints + amount;
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << _name
				  << " tries to attack be repaired but have no energy left."
				  << std::endl;
	else if (_hitPoints == 0)
		std::cout << _name
				  << " tries to be repaired but have no hit points left."
				  << std::endl;
}

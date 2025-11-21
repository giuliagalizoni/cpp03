#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap
{
private:
	std::string _name;
	// FlagTrap::ClapTrap::_name; // not sure about this

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap &operator=(const DiamondTrap &src);
	~DiamondTrap();

	void attack(const std::string &target);
	void whoAmI();
};

#endif

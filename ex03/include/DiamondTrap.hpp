#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap
{
private:
	FlagTrap::ClapTrap::_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap &operator=(const DiamondTrap &src);
	~DiamondTrap();
};

#endif

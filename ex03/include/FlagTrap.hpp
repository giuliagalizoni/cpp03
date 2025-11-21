#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
private:
public:
	FlagTrap();
	FlagTrap(std::string name);
	FlagTrap(const FlagTrap &src);
	FlagTrap &operator=(const FlagTrap &src);
	~FlagTrap();

	void highFivesGuys(void);
};

#endif

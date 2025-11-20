#include <iostream>

#include "../include/ClapTrap.hpp"

int main()
{
	std::cout << "\n=== TEST 1: Basic Actions ===" << std::endl;
	ClapTrap claudio("Claudio");
	claudio.attack("Banana Split");
	claudio.takeDamage(7);
	claudio.beRepaired(4);
	claudio.takeDamage(8);
	claudio.attack("Crazy Eyes");

	std::cout << "\n=== TEST 2: Energy Depletion ===" << std::endl;
	ClapTrap energyTest("EnergyBot");
	for (int i = 0; i < 11; i++)
		energyTest.attack("dummy");

	std::cout << "\n=== TEST 3: Actions After Death ===" << std::endl;
	ClapTrap deadBot("DeadBot");
	deadBot.takeDamage(15);
	deadBot.attack("ghost");
	deadBot.beRepaired(5);

	std::cout << "\n=== TEST 4: Repair With No Energy ===" << std::endl;
	ClapTrap noEnergy("NoEnergy");
	for (int i = 0; i < 10; i++)
		noEnergy.attack("test");
	noEnergy.beRepaired(5);

	std::cout << "\n=== Destructors ===" << std::endl;
}

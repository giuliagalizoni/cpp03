#include <iostream>

#include "../include/ScavTrap.hpp"

int main()
{
	std::cout << "\n=== TEST 1: Basic Actions & Guard Gate ===" << std::endl;
	ScavTrap guardian("Guardian");
	guardian.attack("Banana Split");
	guardian.takeDamage(30);
	guardian.beRepaired(15);
	guardian.guardGate();
	guardian.attack("Crazy Eyes");
	guardian.guardGate();

	std::cout << "\n=== TEST 2: Energy Depletion (50 energy) ===" << std::endl;
	ScavTrap energyTest("EnergyBot");
	for (int i = 0; i < 51; i++)
		energyTest.attack("dummy");
	energyTest.guardGate();

	std::cout << "\n=== TEST 3: Actions After Death (100 HP) ===" << std::endl;
	ScavTrap deadBot("DeadBot");
	deadBot.takeDamage(100);
	deadBot.attack("ghost");
	deadBot.beRepaired(5);
	deadBot.guardGate();

	std::cout << "\n=== TEST 4: Repair With No Energy ===" << std::endl;
	ScavTrap noEnergy("NoEnergy");
	for (int i = 0; i < 50; i++)
		noEnergy.attack("test");
	noEnergy.beRepaired(5);
	noEnergy.guardGate();

	std::cout << "\n=== TEST 5: High Damage Survival (100 HP) ===" << std::endl;
	ScavTrap tank("Tank");
	tank.takeDamage(50);
	tank.attack("target");
	tank.takeDamage(40);
	tank.beRepaired(20);
	tank.guardGate();
	tank.takeDamage(30);
	tank.attack("final target");

	std::cout << "\n=== Destructors ===" << std::endl;
}

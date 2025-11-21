#include <iostream>

#include "../include/FlagTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
	std::cout << "\n=== ScavTrap Quick Test ===" << std::endl;
	ScavTrap scav("Guardian");
	scav.attack("enemy");
	scav.guardGate();

	std::cout << "\n=== TEST 1: Basic Actions & High Fives ===" << std::endl;
	FlagTrap friendly("Friendly");
	friendly.attack("Target");
	friendly.highFivesGuys();
	friendly.takeDamage(40);
	friendly.beRepaired(20);
	friendly.highFivesGuys();

	std::cout << "\n=== TEST 2: Energy Depletion (100 energy) ===" << std::endl;
	FlagTrap energyTest("EnergyBot");
	for (int i = 0; i < 101; i++)
		energyTest.attack("dummy");
	energyTest.highFivesGuys();

	std::cout << "\n=== TEST 3: Actions After Death (100 HP) ===" << std::endl;
	FlagTrap deadBot("DeadBot");
	deadBot.takeDamage(100);
	deadBot.attack("ghost");
	deadBot.beRepaired(5);
	deadBot.highFivesGuys();

	std::cout << "\n=== TEST 4: Repair With No Energy ===" << std::endl;
	FlagTrap noEnergy("NoEnergy");
	for (int i = 0; i < 100; i++)
		noEnergy.attack("test");
	noEnergy.beRepaired(5);
	noEnergy.highFivesGuys();

	std::cout << "\n=== TEST 5: High Damage Survival (100 HP) ===" << std::endl;
	FlagTrap tank("Tank");
	tank.takeDamage(50);
	tank.highFivesGuys();
	tank.attack("target");
	tank.takeDamage(40);
	tank.beRepaired(20);
	tank.highFivesGuys();
	tank.takeDamage(30);
	tank.attack("final target");
	tank.highFivesGuys();

	std::cout << "\n=== Destructors ===" << std::endl;
}

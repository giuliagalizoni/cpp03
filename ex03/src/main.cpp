#include <iostream>

#include "../include/DiamondTrap.hpp"

int main()
{
	std::cout << "\n=== TEST 1: Basic DiamondTrap Creation & Identity ==="
			  << std::endl;
	DiamondTrap diamond("Diamond");
	diamond.whoAmI();
	diamond.attack("enemy");
	diamond.takeDamage(30);
	diamond.beRepaired(15);

	std::cout << "\n=== TEST 2: DiamondTrap Stats Verification ==="
			  << std::endl;
	DiamondTrap stats("StatsBot");
	stats.whoAmI();
	std::cout << "Testing attack (should use ScavTrap's attack):" << std::endl;
	stats.attack("target");
	std::cout << "Testing special abilities:" << std::endl;
	stats.guardGate();
	stats.highFivesGuys();

	std::cout << "\n=== TEST 3: Energy Depletion (50 energy from ScavTrap) ==="
			  << std::endl;
	DiamondTrap energyTest("EnergyBot");
	for (int i = 0; i < 51; i++)
		energyTest.attack("dummy");
	energyTest.whoAmI();

	std::cout << "\n=== TEST 4: Death and Actions (100 HP from FlagTrap) ==="
			  << std::endl;
	DiamondTrap deadBot("DeadBot");
	deadBot.takeDamage(100);
	deadBot.attack("ghost");
	deadBot.whoAmI();
	deadBot.guardGate();
	deadBot.highFivesGuys();

	std::cout << "\n=== TEST 5: Copy Constructor & Assignment ===" << std::endl;
	DiamondTrap original("Original");
	original.attack("test");
	DiamondTrap copy(original);
	copy.whoAmI();
	DiamondTrap assigned("Assigned");
	assigned = original;
	assigned.whoAmI();

	std::cout << "\n=== Destructors ===" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarherna <sarherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:00 by sarherna          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:00 by sarherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	std::cout << "=== Test 1: DiamondTrap Construction and Destruction Chain ===" << std::endl;
	{
		DiamondTrap diamond1("Diamond");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 2: DiamondTrap whoAmI ===" << std::endl;
	{
		DiamondTrap diamond2("Shiny");
		diamond2.whoAmI();
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 3: DiamondTrap Stats ===" << std::endl;
	{
		DiamondTrap diamond3("Hybrid");
		std::cout << "DiamondTrap stats:" << std::endl;
		std::cout << "  HP: " << diamond3.getHitPoints() << " (from FragTrap)" << std::endl;
		std::cout << "  Energy: " << diamond3.getEnergyPoints() << " (from ScavTrap)" << std::endl;
		std::cout << "  Damage: " << diamond3.getAttackDamage() << " (from FragTrap)" << std::endl;
		diamond3.whoAmI();
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 4: DiamondTrap Attack (from ScavTrap) ===" << std::endl;
	{
		DiamondTrap diamond4("Warrior");
		diamond4.attack("Enemy1");
		diamond4.attack("Enemy2");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 5: DiamondTrap Inherited Abilities ===" << std::endl;
	{
		DiamondTrap diamond5("Versatile");
		diamond5.attack("Target");
		diamond5.takeDamage(30);
		diamond5.beRepaired(15);
		diamond5.guardGate();        // From ScavTrap
		diamond5.highFivesGuys();    // From FragTrap
		diamond5.whoAmI();           // From DiamondTrap
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 6: DiamondTrap Copy Constructor ===" << std::endl;
	{
		DiamondTrap diamond6("Original");
		diamond6.takeDamage(20);
		diamond6.whoAmI();
		DiamondTrap diamond7(diamond6);
		diamond7.whoAmI();
		diamond7.attack("Target");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 7: Multiple DiamondTraps ===" << std::endl;
	{
		DiamondTrap d1("Alpha");
		DiamondTrap d2("Beta");
		DiamondTrap d3("Gamma");
		
		d1.whoAmI();
		d2.whoAmI();
		d3.whoAmI();
		
		d1.attack("Beta");
		d2.attack("Gamma");
		d3.attack("Alpha");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 8: All Classes Together ===" << std::endl;
	{
		ClapTrap clap("Clappy");
		ScavTrap scav("Scavvy");
		FragTrap frag("Fraggy");
		DiamondTrap diamond("Diamondy");
		
		std::cout << "\n--- Attacks ---" << std::endl;
		clap.attack("Target");
		scav.attack("Target");
		frag.attack("Target");
		diamond.attack("Target");
		
		std::cout << "\n--- Special Abilities ---" << std::endl;
		scav.guardGate();
		frag.highFivesGuys();
		diamond.whoAmI();
		diamond.guardGate();
		diamond.highFivesGuys();
	}
	std::cout << std::endl;
	
	return 0;
}


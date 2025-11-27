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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "=== Test 1: FragTrap Construction and Destruction Chain ===" << std::endl;
	{
		FragTrap frag1("Fraggy");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 2: FragTrap High Five ===" << std::endl;
	{
		FragTrap frag2("Friendly");
		frag2.highFivesGuys();
		frag2.attack("Target");
		frag2.highFivesGuys();
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 3: Comparing All Three Classes ===" << std::endl;
	{
		ClapTrap clap("Clappy");
		ScavTrap scav("Scavvy");
		FragTrap frag("Fraggy");
		
		std::cout << "\nClapTrap stats - HP: " << clap.getHitPoints() 
				  << ", Energy: " << clap.getEnergyPoints() 
				  << ", Damage: " << clap.getAttackDamage() << std::endl;
		std::cout << "ScavTrap stats - HP: " << scav.getHitPoints() 
				  << ", Energy: " << scav.getEnergyPoints() 
				  << ", Damage: " << scav.getAttackDamage() << std::endl;
		std::cout << "FragTrap stats - HP: " << frag.getHitPoints() 
				  << ", Energy: " << frag.getEnergyPoints() 
				  << ", Damage: " << frag.getAttackDamage() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 4: FragTrap Attack and Repair ===" << std::endl;
	{
		FragTrap frag3("Fighter");
		frag3.attack("Enemy1");
		frag3.takeDamage(40);
		frag3.beRepaired(25);
		frag3.attack("Enemy2");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 5: FragTrap Copy Constructor ===" << std::endl;
	{
		FragTrap frag4("Original");
		frag4.takeDamage(30);
		frag4.highFivesGuys();
		FragTrap frag5(frag4);
		frag5.attack("Target");
		frag5.highFivesGuys();
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 6: FragTrap and ScavTrap Together ===" << std::endl;
	{
		FragTrap frag6("FragWarrior");
		ScavTrap scav6("ScavGuard");
		
		frag6.attack("Villain");
		scav6.attack("Villain");
		
		frag6.highFivesGuys();
		scav6.guardGate();
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 7: FragTrap Massive Damage ===" << std::endl;
	{
		FragTrap frag7("Tank");
		frag7.takeDamage(50);
		frag7.takeDamage(30);
		frag7.beRepaired(20);
		frag7.takeDamage(100);  // Should destroy it
		frag7.attack("Target");  // Should not work
		frag7.highFivesGuys();   // Can still high five when destroyed
	}
	std::cout << std::endl;
	
	return 0;
}


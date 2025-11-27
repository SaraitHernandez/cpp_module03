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

#include "ScavTrap.hpp"

int main() {
	std::cout << "=== Test 1: ScavTrap Construction and Destruction Chain ===" << std::endl;
	{
		ScavTrap scav1("Guardian");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 2: ScavTrap Attack Function ===" << std::endl;
	{
		ScavTrap scav2("Warrior");
		scav2.attack("Enemy1");
		scav2.attack("Enemy2");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 3: Gate Keeper Mode ===" << std::endl;
	{
		ScavTrap scav3("Keeper");
		scav3.guardGate();
		scav3.attack("Intruder");
		scav3.guardGate();
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 4: ScavTrap vs ClapTrap Stats ===" << std::endl;
	{
		ClapTrap clap("Clap");
		ScavTrap scav("Scav");
		
		std::cout << "ClapTrap stats - HP: " << clap.getHitPoints() 
				  << ", Energy: " << clap.getEnergyPoints() 
				  << ", Damage: " << clap.getAttackDamage() << std::endl;
		std::cout << "ScavTrap stats - HP: " << scav.getHitPoints() 
				  << ", Energy: " << scav.getEnergyPoints() 
				  << ", Damage: " << scav.getAttackDamage() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 5: ScavTrap Take Damage and Repair ===" << std::endl;
	{
		ScavTrap scav4("Tank");
		scav4.takeDamage(30);
		scav4.beRepaired(20);
		scav4.takeDamage(50);
		scav4.attack("Target");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 6: ScavTrap Copy Constructor ===" << std::endl;
	{
		ScavTrap scav5("Original");
		scav5.takeDamage(20);
		scav5.guardGate();
		ScavTrap scav6(scav5);
		scav6.attack("Enemy");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 7: Energy Depletion Test ===" << std::endl;
	{
		ScavTrap scav7("Exhausted");
		// Use up energy points
		for (int i = 0; i < 50; i++) {
			scav7.attack("Target");
		}
		scav7.attack("Target");  // Should not work
		scav7.beRepaired(10);     // Should not work
	}
	std::cout << std::endl;
	
	return 0;
}


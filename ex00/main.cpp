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

#include "ClapTrap.hpp"

int main() {
	std::cout << "=== Test 1: Basic Construction and Destruction ===" << std::endl;
	{
		ClapTrap clap1("Robot1");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 2: Attack Function ===" << std::endl;
	{
		ClapTrap clap2("Attacker");
		clap2.attack("Target1");
		clap2.attack("Target2");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 3: Take Damage Function ===" << std::endl;
	{
		ClapTrap clap3("Defender");
		clap3.takeDamage(3);
		clap3.takeDamage(5);
		clap3.takeDamage(10);  // Should destroy it
		clap3.attack("Enemy");  // Should not work
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 4: Repair Function ===" << std::endl;
	{
		ClapTrap clap4("Healer");
		clap4.takeDamage(5);
		clap4.beRepaired(3);
		clap4.beRepaired(2);
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 5: Energy Depletion ===" << std::endl;
	{
		ClapTrap clap5("Exhausted");
		// Use up all 10 energy points
		for (int i = 0; i < 10; i++) {
			clap5.attack("Target");
		}
		clap5.attack("Target");  // Should not work (no energy)
		clap5.beRepaired(5);     // Should not work (no energy)
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 6: Copy Constructor ===" << std::endl;
	{
		ClapTrap clap6("Original");
		clap6.takeDamage(3);
		ClapTrap clap7(clap6);
		clap7.attack("Enemy");
	}
	std::cout << std::endl;
	
	std::cout << "=== Test 7: Assignment Operator ===" << std::endl;
	{
		ClapTrap clap8("First");
		ClapTrap clap9("Second");
		clap8.takeDamage(5);
		clap9 = clap8;
		clap9.beRepaired(2);
	}
	std::cout << std::endl;
	
	return 0;
}


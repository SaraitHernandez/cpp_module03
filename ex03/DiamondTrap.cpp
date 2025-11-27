/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarherna <sarherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:00 by sarherna          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:00 by sarherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default") {
	// Hit points from FragTrap (100)
	_hitPoints = FragTrap::_hitPoints;
	// Energy points from ScavTrap (50)
	_energyPoints = ScavTrap::_energyPoints;
	// Attack damage from FragTrap (30)
	_attackDamage = FragTrap::_attackDamage;
	
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	// Hit points from FragTrap (100)
	_hitPoints = FragTrap::_hitPoints;
	// Energy points from ScavTrap (50)
	_energyPoints = ScavTrap::_energyPoints;
	// Attack damage from FragTrap (30)
	_attackDamage = FragTrap::_attackDamage;
	
	std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

// Destructor
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

// Special ability
void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << _name 
			  << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}


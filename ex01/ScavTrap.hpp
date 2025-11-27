/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarherna <sarherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:00 by sarherna          #+#    #+#             */
/*   Updated: 2025/11/27 12:00:00 by sarherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	// Constructors
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	
	// Destructor
	~ScavTrap();
	
	// Assignment operator
	ScavTrap& operator=(const ScavTrap& other);
	
	// Override attack function
	void attack(const std::string& target);
	
	// Special ability
	void guardGate();
};

#endif


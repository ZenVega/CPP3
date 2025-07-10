/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:36:23 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include "../FragTrap/FragTrap.hpp"
#include "../ScavTrap/ScavTrap.hpp"
#include "../includes/CONSTANTS.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	string _name;

public:
	DiamondTrap();
	DiamondTrap(string name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &other);
	using ScavTrap::attack;
	void whoAmI(void);
};

#endif

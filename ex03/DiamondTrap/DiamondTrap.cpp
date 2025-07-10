/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:50:04 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:39:55 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("default_name_clap_name")
{
	ClapTrap::_name = "_clap_name";
	_name			= "default_name";
	_hitPoints		= FragTrap::_hitPoints;
	_energyPoints	= ScavTrap::_energyPoints;
	_attackDamage	= FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap: " << _name << " destroyed" << endl;
}

DiamondTrap::DiamondTrap(string name) :
	ClapTrap(name + "_clap_name")
{
	_name		  = name;
	_hitPoints	  = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
	ClapTrap(other._name + "_clap_name"),
	ScavTrap(other._name),
	FragTrap(other._name)

{
	_name		  = other._name;
	_hitPoints	  = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::_name = other._name + "_clap_name";
		_name			= other._name;
		_hitPoints		= other._hitPoints;
		_energyPoints	= other._energyPoints;
		_attackDamage	= other._attackDamage;
	}
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	cout << "My name is " << _name << endl;
	cout << "My Clap's name is " << ClapTrap::_name << endl;
}

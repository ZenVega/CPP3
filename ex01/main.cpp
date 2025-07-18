/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/05 10:39:10 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main(void)
{
	ClapTrap trap_a = ClapTrap("clap_a");
	ScavTrap trap_b = ScavTrap("scav_b");

	trap_a.attack("scav_b");
	trap_b.takeDamage(trap_a.getAttackDamage());
	trap_a.attack("scav_b");
	trap_b.takeDamage(trap_a.getAttackDamage());
	trap_b.attack("clap_a");
	trap_b.beRepaired(3);
	trap_b.guardGate();

	return 0;
}

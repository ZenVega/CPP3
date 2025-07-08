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
	FragTrap trap_c = FragTrap("frag_a");

	trap_a.attack("trap_b");
	trap_b.takeDamage(trap_a.getAttackDamage());
	trap_b.attack("trap_c");
	trap_c.takeDamage(trap_b.getAttackDamage());
	trap_c.attack("trap_a");
	trap_a.takeDamage(trap_c.getAttackDamage());
	trap_c.beRepaired(3);
	trap_b.guardGate();
	trap_c.highFivesGuys();

	return 0;
}

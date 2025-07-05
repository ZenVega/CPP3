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
	ClapTrap trap_a = ClapTrap("trap_a");
	ClapTrap trap_b = ClapTrap("trap_b");

	trap_a.attack("trap_b");
	trap_b.takeDamage(5);
	trap_a.attack("trap_b");
	trap_b.takeDamage(7);
	trap_b.attack("trap_a");
	trap_b.beRepaired(3);
	trap_b.attack("trap_a");

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/05 10:33:49 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include "../includes/CONSTANTS.hpp"

class FragTrap : public ClapTrap
{
protected:
public:
	FragTrap();
	FragTrap(string name);
	FragTrap(const FragTrap &other);
	~FragTrap();

	void highFivesGuys(void);
};

#endif

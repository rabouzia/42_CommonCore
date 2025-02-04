/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_op2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:00:32 by ramzerk           #+#    #+#             */
/*   Updated: 2024/03/07 16:26:22 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_ra(t_list **a)
{
	rotate(a);
}

void	b_rb(t_list **b)
{
	rotate(b);
}

void	b_rr(t_list **a, t_list **b)
{
	rotate(b);
	rotate(a);
}

void	b_sa(t_list *a)
{
	swap(a);
}

void	b_sb(t_list *b)
{
	swap(b);
}

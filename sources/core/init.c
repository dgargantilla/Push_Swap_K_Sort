/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:19:28 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/26 11:25:40 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	n_nums;

	n_nums = ft_lstsize(*stack_a);
	ft_printf("numero de digitos: %d\n", n_nums);
	get_index(stack_a);
	if (!nums_ordered(stack_a))
	{
		if (n_nums == 2)
			sa(stack_a);
		if (n_nums == 3)
			sort_three(stack_a);
		if (n_nums == 4)
			sort_four(stack_a, stack_b, n_nums);
		if (n_nums == 5)
			sort_five(stack_a, stack_b, n_nums);
	}
}
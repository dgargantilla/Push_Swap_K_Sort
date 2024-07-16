/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:48:12 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/16 12:32:09 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_list *stack_a)
{
	t_list	*current;
	t_list	*compare;
	int		current_num;
	int		compare_num;

	current = stack_a;
	while (current != NULL && current->next != NULL)
	{
		compare = current->next;
		current_num = *((int *)current->content);
		while (compare != NULL)
		{
			compare_num = *((int *)compare->content);
			if (current_num == compare_num)
			{
				ft_lstclear(&stack_a, free);
				print_error();
			}
			compare = compare->next;
		}
		current = current->next;
	}
}
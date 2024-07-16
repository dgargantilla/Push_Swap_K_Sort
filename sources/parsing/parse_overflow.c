/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:46:46 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/16 10:37:16 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_overflow(char *nums)
{
	if (ft_strlen(nums) >= 11)
		return (1);
	else if (ft_atoi(nums) != ft_atoll(nums))
		return (1);
	/*else
		ft_printf("%s %d\n", nums, ft_atoi(nums));*/
	return (0);
}

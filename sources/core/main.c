/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:59:33 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/12 12:00:46 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		//check_letrs (argv);
		parse_init(argv);
		//ft_printf("%s %d\n", argv[2], ft_atoi(argv[2]));	
		//printf("%s %lld\n", argv[2], ft_atoll(argv[2]));	
	}
	else
		return (0);
	return (0);	
}

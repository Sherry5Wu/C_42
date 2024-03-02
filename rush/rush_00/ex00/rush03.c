/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:33:03 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/17 13:21:28 by vfors            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	len;

	len = 1;
	while (len <= y)
	{
		wid = 1;
		while (wid <= x)
		{
			if ((wid > 1 && wid < x) && (len > 1 && len < y))
				ft_putchar(' ');
			else if ((wid == 1 && len == 1) || (wid == 1 && len == y))
				ft_putchar('A');
			else if (wid == x && len == 1)
				ft_putchar('C');
			else if (wid != 1 && wid == x && len != 1 && len == y)
				ft_putchar('C');
			else
				ft_putchar('B');
			wid++;
		}
		len++;
		ft_putchar('\n');
	}
}

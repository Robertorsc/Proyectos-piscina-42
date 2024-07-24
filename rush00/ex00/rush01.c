/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:58:07 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/07 17:31:00 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int altura, int anchura, int alturap, int anchurap)
{
	if ((alturap == 1 && anchurap == 1)
		|| (anchurap > 1 && anchurap == anchura
			&& alturap == altura && alturap > 1))
		ft_putchar('/');
	else
		if ((alturap == 1 && anchurap == anchura)
			|| (alturap > 1 && alturap == altura && anchurap == 1))
			ft_putchar('\\');
	else
		if (alturap == 1
			|| alturap == altura)
			ft_putchar('*');
	else
		if ((alturap != 1 && alturap != altura)
			&& (anchurap == 1 || anchurap == anchura))
			ft_putchar('*');
	else
		ft_putchar (' ');
	if (anchurap == anchura)
		ft_putchar ('\n');
}

int	rush(int x, int y)
{
	int	alturap;
	int	anchurap;

	alturap = 1;
	while (y >= alturap)
	{
		anchurap = 1;
		while (x >= anchurap)
		{
			conditions (y, x, alturap, anchurap);
			anchurap++;
		}
		alturap++;
	}
	return (0);
}

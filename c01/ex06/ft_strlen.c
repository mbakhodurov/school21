/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wroggo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:40:16 by wroggo            #+#    #+#             */
/*   Updated: 2021/06/24 21:40:20 by wroggo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *Str)
{
	int	i;

	i = 0;
	while (*Str != 0)
	{
		i++;
		Str++;
	}
	return (i);
}

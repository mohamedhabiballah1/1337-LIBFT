/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:15:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/19 13:26:33 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int c)
{
	int	i;

	i = 0;
	while (c > 9)
	{
		c = (c / 10);
		i++;
	}
	i = i + 1;
	return (i);
}

char	*ft_positif(int c)
{
	int		i;
	char	*new;

	i = count(c);
	new = malloc(sizeof(char) * i + 1);
	new[i] = '\0';
	if (new == NULL)
		return (NULL);
	while (i > 0)
	{
		new[i - 1] = (c % 10) + 48;
		c = (c / 10);
		i--;
	}
	return (new);
}

char	*ft_negative(int c)
{
	int		i;
	char	*new;

	if (c == -2147483648)
		i = 12;
	else
		i = count(c);
	new = malloc(sizeof(char) * i + 2);
	new[i + 1] = '\0';
	if (new == NULL)
		return (NULL);
	new[0] = '-';
	while (i > 0)
	{
		new[i] = (c % 10) + 48;
		c = (c / 10);
		i--;
	}
	return (new);
}

char	*ft_itoa(int n)
{
	char	*new;

	if (n >= 0)
		new = ft_positif(n);
	if (n < 0)
	{
		n = n * -1;
		new = ft_negative(n);
	}
	return (new);
}

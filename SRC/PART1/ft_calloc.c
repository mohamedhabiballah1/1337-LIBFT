/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:39:12 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/16 21:31:12 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*str;

	str = malloc(sizeof(char) * ((nitems * size)));
	if (str == '\0')
		return ('\0');
	str = ft_bzero(str, (nitems * size));
	return (str);
}

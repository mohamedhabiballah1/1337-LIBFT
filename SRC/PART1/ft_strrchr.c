/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:45:10 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/16 20:53:19 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

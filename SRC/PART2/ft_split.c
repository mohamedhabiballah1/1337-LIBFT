/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:32:25 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/19 19:49:38 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			while (str[i] && str[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

char	*putword(char *str, char const *s, int len, int z)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		str[i] = s[z - len];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

char	**lenwords(char const *s, char c, int words, char **str)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		len = (len + 1);
		str[j] = malloc(sizeof(char *) * len);
		putword(*str, s, len, i);
		j++;
		len = 0;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = count_words(s, c);
	str = malloc(sizeof(char *) * i + 1);
	if (str == NULL)
		return (NULL);
	lenwords(s, c, i, str);
	return (str);
}
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int main()
{
    char	**tabstr;
	int		i;

    tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		i++;
	}
    return(0);
}

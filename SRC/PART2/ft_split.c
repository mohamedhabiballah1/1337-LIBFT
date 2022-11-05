/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:32:25 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/30 15:48:40 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static int	count_words(char const *str, char c)
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

static char	*putword(char *str, char const *s, int len, int z)
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
static char	**ft_free(char **str, int j)
{
	j = (j - 1);
	while(j >= 0)
		free(str[j]);
	return(NULL);
}
static char	**lenwords(char const *s, char c, int words, char **str)
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
		str[j] = malloc(sizeof(char) * (len + 1));
		if (str[j] == NULL)
			return (ft_free(str, j));
		putword(str[j], s, len, i);
		j++;
		len = 0;
	}
	str[j] = (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	if (!s)
		return (NULL);
	i = count_words(s, c);
	str = malloc(sizeof(char *) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (!lenwords(s, c, i, str))
	{
		free(str);
		return (NULL);
	}
	return (str);
}

int main()
{
	char s[] = "mohamed.habiballah....cwniwe.dcc.ec.edcwec.wc";
	char c = '.';
	int i = 0;
	char **str = ft_split(s, c); 
	while(str[i] != NULL)
	{
		printf("%s\n", str[i]);
		i++;
	}
	return(0);
}
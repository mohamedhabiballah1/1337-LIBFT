/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:30:34 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/10 13:36:20 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *str;

    i = 0;
    str = malloc(sizeof(char) * len + 1);
    if(str == NULL)
        return (NULL);
    while(i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
int main()
{
    char src[] = "substr.function.Implementation";
 
    int m = 7;
    int n = 3;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
}
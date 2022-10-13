/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:27:26 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/13 19:18:22 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int ,char))
{
    unsigned int i;
    i = 0;
    char *str;
    str = malloc(sizeof(char) * strlen(s));
    if(str == NULL)
        return (NULL);
    while(s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}
char f(unsigned int i, char c)
{
    if(c >= 'A' && c <'Z')
        c +=32;
    return(c);
}
int main()
{
    char str[] = "MOHAMED";
    printf("%s",str);
    printf("%s", ft_strmapi(str, f));
    return(0);
}
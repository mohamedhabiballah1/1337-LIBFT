/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:50:17 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/09 20:45:24 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)s;
    while(i < n)
    {
        if(str[i] == c)
            return((char *)&s[i]);
        i++;
    }
    return(NULL);
}